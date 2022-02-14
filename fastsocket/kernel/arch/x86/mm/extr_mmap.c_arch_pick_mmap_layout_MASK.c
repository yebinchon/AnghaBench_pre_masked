
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int unmap_area; scalar_t__ shlib_base; int get_unmapped_exec_area; int get_unmapped_area; int mmap_base; } ;
struct TYPE_2__ {int personality; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(struct mm_struct *VAR_9)
{
 if (!(2 & VAR_8) && FUNC_2()) {
  VAR_9->mmap_base = FUNC_3();
  VAR_9->get_unmapped_area = VAR_2;
  VAR_9->unmap_area = VAR_5;
 } else {
  VAR_9->mmap_base = FUNC_0();
  VAR_9->get_unmapped_area = VAR_3;
  if (!(VAR_7->personality & VAR_0)
      && FUNC_1()) {
   VAR_9->get_unmapped_exec_area = VAR_4;
   VAR_9->shlib_base = VAR_1 + FUNC_4();
  }
  VAR_9->unmap_area = VAR_6;
 }
}
