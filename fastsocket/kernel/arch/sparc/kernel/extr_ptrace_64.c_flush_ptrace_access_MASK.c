
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {unsigned long dcache_line_size; unsigned long icache_line_size; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (void*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (unsigned long,int) ;
 scalar_t__ VAR_3 ;

void FUNC_7(struct vm_area_struct *VAR_4, struct page *VAR_5,
    unsigned long VAR_6, void *VAR_7,
    unsigned long VAR_8, int VAR_9)
{
 FUNC_0(VAR_8 > VAR_0);

 if (VAR_3 == VAR_1)
  return;

 FUNC_4();
 if (VAR_9 && VAR_3 == VAR_2) {
  unsigned long VAR_10 = (unsigned long) VAR_7;
  unsigned long VAR_11 = VAR_10 + VAR_8;
  unsigned long VAR_12;

  VAR_12 = FUNC_3().icache_line_size;

  for (; VAR_10 < VAR_11; VAR_10 += VAR_12)
   FUNC_2(VAR_10);
 }

 FUNC_5();
}
