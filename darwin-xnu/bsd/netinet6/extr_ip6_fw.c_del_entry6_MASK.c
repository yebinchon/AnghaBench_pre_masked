
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct ip6_fw_head {struct ip6_fw_chain* lh_first; } ;
struct TYPE_2__ {struct ip6_fw_chain* le_next; } ;
struct ip6_fw_chain {scalar_t__ fw_number; struct ip6_fw_chain* rule; TYPE_1__ chain; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip6_fw_chain*,int ) ;
 int FUNC_1 (struct ip6_fw_chain*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct ip6_fw_head *VAR_3, u_short VAR_4)
{
 struct ip6_fw_chain *VAR_5;

 VAR_5 = VAR_3->lh_first;
 if (VAR_4 != (u_short)-1) {
  for (; VAR_5; VAR_5 = VAR_5->chain.le_next) {
   if (VAR_5->rule->fw_number == VAR_4) {
    FUNC_1(VAR_5, VAR_2);
    FUNC_0(VAR_5->rule, VAR_1);
    FUNC_0(VAR_5, VAR_1);
    return 0;
   }
  }
 }

 return (VAR_0);
}
