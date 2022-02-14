
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned int data_len; int len; } ;
struct iscsi_tcp_conn {struct cxgbi_conn* dd_data; } ;
struct iscsi_task {TYPE_2__* conn; struct iscsi_task* itt; int sc; } ;
struct cxgbi_task_data {struct sk_buff* skb; } ;
struct cxgbi_conn {TYPE_1__* cep; } ;
struct TYPE_5__ {int txdata_octets; scalar_t__ datadgst_en; scalar_t__ hdrdgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_4__ {int csk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,TYPE_2__*,char*,int) ;
 struct cxgbi_task_data* FUNC_3 (struct iscsi_task*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int,char*,struct iscsi_task*,...) ;

int FUNC_6(struct iscsi_task *VAR_7)
{
 struct iscsi_tcp_conn *VAR_8 = VAR_7->conn->dd_data;
 struct cxgbi_conn *VAR_9 = VAR_8->dd_data;
 struct cxgbi_task_data *VAR_10 = FUNC_3(VAR_7);
 struct sk_buff *VAR_11 = VAR_10->skb;
 unsigned int VAR_12;
 int VAR_13;

 if (!VAR_11) {
  FUNC_5(1 << VAR_0 | 1 << VAR_1,
   "task 0x%p, skb NULL.\n", VAR_7);
  return 0;
 }

 VAR_12 = VAR_11->data_len;
 VAR_10->skb = ((void*)0);
 VAR_13 = FUNC_0(VAR_9->cep->csk, VAR_11);
 if (VAR_13 > 0) {
  int VAR_14 = VAR_13;

  FUNC_5(1 << VAR_1,
   "task 0x%p,0x%p, skb 0x%p, len %u/%u, rv %d.\n",
   VAR_7, VAR_7->sc, VAR_11, VAR_11->len, VAR_11->data_len, VAR_13);

  if (VAR_7->conn->hdrdgst_en)
   VAR_14 += VAR_4;

  if (VAR_12 && VAR_7->conn->datadgst_en)
   VAR_14 += VAR_4;

  VAR_7->conn->txdata_octets += VAR_14;
  return 0;
 }

 if (VAR_13 == -VAR_2 || VAR_13 == -VAR_3) {
  FUNC_5(1 << VAR_1,
   "task 0x%p, skb 0x%p, len %u/%u, %d EAGAIN.\n",
   VAR_7, VAR_11, VAR_11->len, VAR_11->data_len, VAR_13);

  VAR_10->skb = VAR_11;
  return VAR_13;
 }

 FUNC_4(VAR_11);
 FUNC_5(1 << VAR_0 | 1 << VAR_1,
  "itt 0x%x, skb 0x%p, len %u/%u, xmit err %d.\n",
  VAR_7->itt, VAR_11, VAR_11->len, VAR_11->data_len, VAR_13);
 FUNC_2(VAR_6, VAR_7->conn, "xmit err %d.\n", VAR_13);
 FUNC_1(VAR_7->conn, VAR_5);
 return VAR_13;
}
