
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sram_list_struct {void const* addr; struct sram_list_struct* next; } ;
struct TYPE_3__ {struct sram_list_struct* sram_list; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct sram_list_struct*) ;
 int FUNC_1 (void const*) ;

int FUNC_2(const void *VAR_1)
{
 struct sram_list_struct *VAR_2, **VAR_3;
 struct mm_struct *VAR_4 = VAR_0->mm;

 for (VAR_3 = &VAR_4->context.sram_list; *VAR_3; VAR_3 = &(*VAR_3)->next)
  if ((*VAR_3)->addr == VAR_1)
   goto found;
 return -1;
found:
 VAR_2 = *VAR_3;
 FUNC_1(VAR_1);
 *VAR_3 = VAR_2->next;
 FUNC_0(VAR_2);

 return 0;
}
