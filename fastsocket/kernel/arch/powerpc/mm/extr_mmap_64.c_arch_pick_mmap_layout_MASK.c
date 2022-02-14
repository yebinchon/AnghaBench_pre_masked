
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int unmap_area; int get_unmapped_area; int mmap_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(struct mm_struct *VAR_5)
{




 if (FUNC_1()) {
  VAR_5->mmap_base = VAR_0;
  VAR_5->get_unmapped_area = VAR_1;
  VAR_5->unmap_area = VAR_3;
 } else {
  VAR_5->mmap_base = FUNC_0();
  VAR_5->get_unmapped_area = VAR_2;
  VAR_5->unmap_area = VAR_4;
 }
}
