
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msn_entry {char eaz; char* msn; struct msn_entry* next; } ;
struct TYPE_3__ {struct msn_entry* msn_list; } ;
typedef TYPE_1__ act2000_card ;



char *
FUNC_0(act2000_card *VAR_0, char VAR_1)
{
        struct msn_entry *VAR_2 = VAR_0->msn_list;

 while (VAR_2) {
  if (VAR_2->eaz == VAR_1)
   return(VAR_2->msn);
  VAR_2 = VAR_2->next;
 }
 return("\0");
}
