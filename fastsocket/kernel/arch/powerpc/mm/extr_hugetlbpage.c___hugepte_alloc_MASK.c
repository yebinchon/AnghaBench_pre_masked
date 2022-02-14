
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {int page_table_lock; } ;
typedef int pte_t ;
struct TYPE_4__ {unsigned long pd; } ;
typedef TYPE_1__ hugepd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 size_t FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int) ;
 int * VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mm_struct *VAR_5, hugepd_t *VAR_6,
      unsigned long VAR_7, unsigned int VAR_8)
{
 pte_t *VAR_9 = FUNC_3(VAR_4[FUNC_0(VAR_8)],
          VAR_1|VAR_3);

 if (! VAR_9)
  return -VAR_0;

 FUNC_4(&VAR_5->page_table_lock);
 if (!FUNC_1(*VAR_6))
  FUNC_2(VAR_4[FUNC_0(VAR_8)], VAR_9);
 else
  VAR_6->pd = (unsigned long)VAR_9 | VAR_2;
 FUNC_5(&VAR_5->page_table_lock);
 return 0;
}
