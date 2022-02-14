
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct iscsi_tcp_conn {int dummy; } ;
struct iscsi_conn {scalar_t__ hdrdgst_en; struct iscsi_tcp_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct iscsi_conn*,int ) ;
 int FUNC_3 (struct iscsi_tcp_conn*) ;
 int FUNC_4 (int,char*,struct iscsi_conn*,struct sk_buff*,int ,int ) ;
 int FUNC_5 (char*,struct iscsi_conn*,struct sk_buff*) ;
 int FUNC_6 (struct iscsi_conn*,struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct iscsi_conn *VAR_5, struct sk_buff *VAR_6)
{
 struct iscsi_tcp_conn *VAR_7 = VAR_5->dd_data;

 FUNC_4(1 << VAR_0,
  "conn 0x%p, skb 0x%p, len %u, flag 0x%lx.\n",
  VAR_5, VAR_6, VAR_6->len, FUNC_0(VAR_6));

 if (!FUNC_3(VAR_7)) {
  FUNC_5("conn 0x%p, skb 0x%p, not hdr.\n", VAR_5, VAR_6);
  FUNC_2(VAR_5, VAR_3);
  return -VAR_1;
 }

 if (VAR_5->hdrdgst_en &&
     FUNC_1(VAR_6, VAR_4)) {
  FUNC_5("conn 0x%p, skb 0x%p, hcrc.\n", VAR_5, VAR_6);
  FUNC_2(VAR_5, VAR_2);
  return -VAR_1;
 }

 return FUNC_6(VAR_5, VAR_6, 0, 0);
}
