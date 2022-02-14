
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct ip6_fw_chain* le_next; } ;
struct ip6_fw_chain {TYPE_1__* rule; TYPE_2__ chain; } ;
struct ip6_fw {scalar_t__ fw_number; } ;
struct TYPE_6__ {struct ip6_fw_chain* lh_first; } ;
struct TYPE_4__ {scalar_t__ fw_number; scalar_t__ timestamp; scalar_t__ fw_pcnt; scalar_t__ fw_bcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct ip6_fw *VAR_4)
{
 struct ip6_fw_chain *VAR_5;






 for (VAR_5 = VAR_3.lh_first; VAR_5; VAR_5 = VAR_5->chain.le_next)
  if (!VAR_4 || VAR_4->fw_number == 0 || VAR_4->fw_number == VAR_5->rule->fw_number) {
   VAR_5->rule->fw_bcnt = VAR_5->rule->fw_pcnt = 0;
   VAR_5->rule->timestamp = 0;
  }

 if (VAR_2) {
  if (VAR_4)
   FUNC_0(VAR_0 | VAR_1,
       "ip6fw: Entry %d cleared.\n", VAR_4->fw_number);
  else
   FUNC_0(VAR_0 | VAR_1,
       "ip6fw: Accounting cleared.\n");
 }

 return(0);
}
