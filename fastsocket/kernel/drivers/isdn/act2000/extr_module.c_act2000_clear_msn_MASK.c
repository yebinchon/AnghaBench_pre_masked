
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msn_entry {struct msn_entry* next; } ;
struct TYPE_3__ {int lock; struct msn_entry* msn_list; } ;
typedef TYPE_1__ act2000_card ;


 int FUNC_0 (struct msn_entry*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(act2000_card *VAR_0)
{
 struct msn_entry *VAR_1 = VAR_0->msn_list;
 struct msn_entry *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_0->msn_list = ((void*)0);
 FUNC_2(&VAR_0->lock, VAR_3);
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
