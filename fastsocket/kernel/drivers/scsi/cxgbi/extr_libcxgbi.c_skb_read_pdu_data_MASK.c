
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_4__ {int datalen; TYPE_1__* hdr; } ;
struct iscsi_tcp_conn {TYPE_2__ in; } ;
struct iscsi_conn {scalar_t__ hdrdgst_en; scalar_t__ datadgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_3__ {int opcode; int itt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct iscsi_conn*,int ) ;
 scalar_t__ FUNC_3 (struct iscsi_tcp_conn*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,struct iscsi_conn*,struct sk_buff*,int ) ;
 int FUNC_7 (struct iscsi_conn*,struct sk_buff*,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct iscsi_conn *VAR_8, struct sk_buff *VAR_9,
        struct sk_buff *VAR_10, unsigned int VAR_11)
{
 struct iscsi_tcp_conn *VAR_12 = VAR_8->dd_data;
 bool VAR_13 = 0;
 int VAR_14 = VAR_12->in.hdr->opcode & VAR_4;

 FUNC_4(1 << VAR_0,
  "conn 0x%p, skb 0x%p, len %u, flag 0x%lx.\n",
  VAR_8, VAR_10, VAR_10->len, FUNC_0(VAR_10));

 if (VAR_8->datadgst_en &&
     FUNC_1(VAR_9, VAR_7)) {
  FUNC_6("conn 0x%p, skb 0x%p, dcrc 0x%lx.\n",
   VAR_8, VAR_9, FUNC_0(VAR_9));
  FUNC_2(VAR_8, VAR_3);
  return -VAR_1;
 }

 if (FUNC_3(VAR_12))
  return 0;


 if (VAR_9 == VAR_10 && VAR_8->hdrdgst_en)
  VAR_11 += VAR_2;

 if (FUNC_1(VAR_9, VAR_6))
  VAR_13 = 1;

 if (VAR_14 == VAR_5)
  FUNC_4(1 << VAR_0,
   "skb 0x%p, op 0x%x, itt 0x%x, %u %s ddp'ed.\n",
   VAR_10, VAR_14, FUNC_5(VAR_12->in.hdr->itt),
   VAR_12->in.datalen, VAR_13 ? "is" : "not");

 return FUNC_7(VAR_8, VAR_10, VAR_11, VAR_13);
}
