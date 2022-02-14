
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_skb_parms {int eff_cap; } ;
struct cn_msg {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cn_msg*) ;
 int FUNC_2 (struct cn_msg*,int) ;
 int FUNC_3 (struct cn_msg*) ;
 int FUNC_4 (struct cn_msg*) ;
 int FUNC_5 (struct cn_msg*) ;

__attribute__((used)) static void FUNC_6(struct cn_msg *VAR_2, struct netlink_skb_parms *VAR_3)
{
 int VAR_4;

 if (!FUNC_0(VAR_3->eff_cap, VAR_0))
  return;

 switch (VAR_2->flags) {
  case 134:
  case 132:
  case 129:
   VAR_4 = FUNC_2(VAR_2, VAR_2->flags);
   break;
  case 130:
   VAR_4 = FUNC_5(VAR_2);
   break;
  case 128:
   VAR_4 = FUNC_3(VAR_2);
   break;
  case 131:
   VAR_4 = FUNC_4(VAR_2);
   break;
  case 133:
   VAR_4 = FUNC_1(VAR_2);
   break;
  default:
   VAR_4 = -VAR_1;
   break;
 }
}
