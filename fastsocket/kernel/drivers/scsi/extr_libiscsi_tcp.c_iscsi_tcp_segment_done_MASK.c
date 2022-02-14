
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct iscsi_tcp_conn {TYPE_5__* iscsi_conn; } ;
struct iscsi_segment {unsigned int copied; unsigned int size; unsigned int data; unsigned int sg_offset; unsigned int total_copied; scalar_t__ total_size; unsigned int padbuf; int digest; int recv_digest; scalar_t__ hash; TYPE_3__* sg; } ;
struct TYPE_9__ {TYPE_2__* session; } ;
struct TYPE_8__ {unsigned int offset; } ;
struct TYPE_7__ {TYPE_1__* tt; } ;
struct TYPE_6__ {int caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,char*,unsigned int,...) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,struct scatterlist*,unsigned int) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct iscsi_segment*,int ,int ) ;
 int FUNC_6 (struct iscsi_segment*,int) ;
 int FUNC_7 (struct iscsi_segment*,int ) ;
 int FUNC_8 (struct iscsi_segment*) ;
 int FUNC_9 (struct scatterlist*,unsigned int,unsigned int) ;
 int FUNC_10 (struct scatterlist*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct scatterlist*,int ,unsigned int,unsigned int) ;

int FUNC_14(struct iscsi_tcp_conn *VAR_1,
      struct iscsi_segment *VAR_2, int VAR_3,
      unsigned VAR_4)
{
 struct scatterlist VAR_5;
 unsigned int VAR_6;

 FUNC_1(VAR_1->iscsi_conn, "copied %u %u size %u %s\n",
        VAR_2->copied, VAR_4, VAR_2->size,
        VAR_3 ? "recv" : "xmit");
 if (VAR_2->hash && VAR_4) {




  FUNC_8(VAR_2);

  if (!VAR_2->data) {
   FUNC_10(&VAR_5, 1);
   FUNC_13(&VAR_5, FUNC_12(VAR_2->sg), VAR_4,
        VAR_2->copied + VAR_2->sg_offset +
       VAR_2->sg->offset);
  } else
   FUNC_9(&VAR_5, VAR_2->data + VAR_2->copied,
        VAR_4);
  FUNC_3(VAR_2->hash, &VAR_5, VAR_4);
 }

 VAR_2->copied += VAR_4;
 if (VAR_2->copied < VAR_2->size) {
  FUNC_6(VAR_2, VAR_3);
  return 0;
 }

 VAR_2->total_copied += VAR_2->copied;
 VAR_2->copied = 0;
 VAR_2->size = 0;


 FUNC_8(VAR_2);


 FUNC_1(VAR_1->iscsi_conn, "total copied %u total size %u\n",
        VAR_2->total_copied, VAR_2->total_size);
 if (VAR_2->total_copied < VAR_2->total_size) {

  FUNC_5(VAR_2, FUNC_11(VAR_2->sg),
       0);
  FUNC_6(VAR_2, VAR_3);
  FUNC_0(VAR_2->size == 0);
  return 0;
 }


 if (!(VAR_1->iscsi_conn->session->tt->caps & VAR_0)) {
  VAR_6 = FUNC_4(VAR_2->total_copied);
  if (VAR_6 != 0) {
   FUNC_1(VAR_1->iscsi_conn,
          "consume %d pad bytes\n", VAR_6);
   VAR_2->total_size += VAR_6;
   VAR_2->size = VAR_6;
   VAR_2->data = VAR_2->padbuf;
   return 0;
  }
 }





 if (VAR_2->hash) {
  FUNC_2(VAR_2->hash, VAR_2->digest);
  FUNC_7(VAR_2,
     VAR_3 ? VAR_2->recv_digest : VAR_2->digest);
  return 0;
 }

 return 1;
}
