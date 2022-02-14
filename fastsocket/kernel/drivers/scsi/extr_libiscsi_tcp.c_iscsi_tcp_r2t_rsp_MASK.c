
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int queue; } ;
struct iscsi_tcp_task {int exp_datasn; int r2tqueue; TYPE_2__ r2tpool; } ;
struct TYPE_4__ {scalar_t__ datalen; scalar_t__ hdr; } ;
struct iscsi_tcp_conn {TYPE_1__ in; } ;
struct iscsi_task {int sc; int itt; struct iscsi_tcp_task* dd_data; } ;
struct iscsi_session {scalar_t__ state; int max_burst; } ;
struct iscsi_r2t_rsp {int ttt; int data_offset; int data_length; int statsn; int r2tsn; } ;
struct iscsi_r2t_info {int data_length; int data_offset; scalar_t__ sent; scalar_t__ datasn; int ttt; int exp_statsn; } ;
struct iscsi_nopin {int dummy; } ;
struct iscsi_conn {int r2t_pdus_cnt; struct iscsi_tcp_conn* dd_data; struct iscsi_session* session; } ;
struct TYPE_6__ {int length; } ;


 int FUNC_0 (struct iscsi_conn*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int ,void*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct iscsi_conn*,char*,...) ;
 int FUNC_5 (struct iscsi_task*) ;
 int FUNC_6 (struct iscsi_session*,struct iscsi_nopin*) ;
 TYPE_3__* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct iscsi_conn *VAR_6, struct iscsi_task *VAR_7)
{
 struct iscsi_session *VAR_8 = VAR_6->session;
 struct iscsi_tcp_task *VAR_9 = VAR_7->dd_data;
 struct iscsi_tcp_conn *VAR_10 = VAR_6->dd_data;
 struct iscsi_r2t_rsp *VAR_11 = (struct iscsi_r2t_rsp *)VAR_10->in.hdr;
 struct iscsi_r2t_info *VAR_12;
 int VAR_13 = FUNC_3(VAR_11->r2tsn);
 int VAR_14;

 if (VAR_10->in.datalen) {
  FUNC_4(VAR_4, VAR_6,
      "invalid R2t with datalen %d\n",
      VAR_10->in.datalen);
  return VAR_0;
 }

 if (VAR_9->exp_datasn != VAR_13){
  FUNC_0(VAR_6, "task->exp_datasn(%d) != rhdr->r2tsn(%d)\n",
         VAR_9->exp_datasn, VAR_13);
  return VAR_2;
 }


 FUNC_6(VAR_8, (struct iscsi_nopin*)VAR_11);

 if (!VAR_7->sc || VAR_8->state != VAR_3) {
  FUNC_4(VAR_5, VAR_6,
      "dropping R2T itt %d in recovery.\n",
      VAR_7->itt);
  return 0;
 }

 VAR_14 = FUNC_1(VAR_9->r2tpool.queue, (void*)&VAR_12, sizeof(void*));
 if (!VAR_14) {
  FUNC_4(VAR_4, VAR_6, "Could not allocate R2T. "
      "Target has sent more R2Ts than it "
      "negotiated for or driver has has leaked.\n");
  return VAR_1;
 }

 VAR_12->exp_statsn = VAR_11->statsn;
 VAR_12->data_length = FUNC_3(VAR_11->data_length);
 if (VAR_12->data_length == 0) {
  FUNC_4(VAR_4, VAR_6,
      "invalid R2T with zero data len\n");
  FUNC_2(VAR_9->r2tpool.queue, (void*)&VAR_12,
       sizeof(void*));
  return VAR_0;
 }

 if (VAR_12->data_length > VAR_8->max_burst)
  FUNC_0(VAR_6, "invalid R2T with data len %u and max "
         "burst %u. Attempting to execute request.\n",
         VAR_12->data_length, VAR_8->max_burst);

 VAR_12->data_offset = FUNC_3(VAR_11->data_offset);
 if (VAR_12->data_offset + VAR_12->data_length > FUNC_7(VAR_7->sc)->length) {
  FUNC_4(VAR_4, VAR_6,
      "invalid R2T with data len %u at offset %u "
      "and total length %d\n", VAR_12->data_length,
      VAR_12->data_offset, FUNC_7(VAR_7->sc)->length);
  FUNC_2(VAR_9->r2tpool.queue, (void*)&VAR_12,
       sizeof(void*));
  return VAR_0;
 }

 VAR_12->ttt = VAR_11->ttt;
 VAR_12->datasn = 0;
 VAR_12->sent = 0;

 VAR_9->exp_datasn = VAR_13 + 1;
 FUNC_2(VAR_9->r2tqueue, (void*)&VAR_12, sizeof(void*));
 VAR_6->r2t_pdus_cnt++;

 FUNC_5(VAR_7);
 return 0;
}
