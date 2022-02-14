
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* next; } ;
struct pnp_card {int id; TYPE_1__ global_list; } ;
struct list_head {struct list_head* next; } ;


 unsigned short VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 struct pnp_card* FUNC_1 (struct list_head*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 struct list_head VAR_1 ;
 int FUNC_3 (char*,unsigned short,unsigned short) ;

struct pnp_card *FUNC_4(unsigned short VAR_2, unsigned short VAR_3,
          struct pnp_card *VAR_4)
{
 char VAR_5[8];
 char VAR_6[8];
 struct list_head *VAR_7;

 FUNC_3(VAR_5, VAR_2, VAR_3);
 FUNC_3(VAR_6, VAR_0, VAR_0);

 VAR_7 = VAR_4 ? VAR_4->global_list.next : VAR_1.next;

 while (VAR_7 != &VAR_1) {
  struct pnp_card *VAR_8 = FUNC_1(VAR_7);

  if (FUNC_0(VAR_8->id, VAR_5) || (FUNC_2(VAR_5, VAR_6, 7) == 0))
   return VAR_8;
  VAR_7 = VAR_7->next;
 }
 return ((void*)0);
}
