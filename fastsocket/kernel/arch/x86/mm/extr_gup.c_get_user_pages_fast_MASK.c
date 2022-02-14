
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
typedef int pgd_t ;
struct TYPE_3__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,struct mm_struct*,unsigned long,unsigned long,int,int ,struct page**,int *) ;
 int FUNC_3 (int ,unsigned long,unsigned long,int,struct page**,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (struct mm_struct*,unsigned long) ;
 int FUNC_9 (int *) ;

int FUNC_10(unsigned long VAR_4, int VAR_5, int VAR_6,
   struct page **VAR_7)
{
 struct mm_struct *VAR_8 = VAR_3->mm;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 pgd_t *VAR_13;
 int VAR_14 = 0;

 VAR_4 &= VAR_0;
 VAR_9 = VAR_4;
 VAR_10 = (unsigned long) VAR_5 << VAR_1;

 VAR_11 = VAR_4 + VAR_10;
 if (VAR_11 < VAR_4)
  goto slow_irqon;
 FUNC_4();
 VAR_13 = FUNC_8(VAR_8, VAR_9);
 do {
  pgd_t VAR_15 = *VAR_13;

  VAR_12 = FUNC_6(VAR_9, VAR_11);
  if (FUNC_7(VAR_15))
   goto slow;
  if (!FUNC_3(VAR_15, VAR_9, VAR_12, VAR_6, VAR_7, &VAR_14))
   goto slow;
 } while (VAR_13++, VAR_9 = VAR_12, VAR_9 != VAR_11);
 FUNC_5();

 FUNC_0(VAR_14 != (VAR_11 - VAR_4) >> VAR_1);
 return VAR_14;

 {
  int VAR_16;

slow:
  FUNC_5();
slow_irqon:

  VAR_4 += VAR_14 << VAR_1;
  VAR_7 += VAR_14;

  FUNC_1(&VAR_8->mmap_sem);
  VAR_16 = FUNC_2(VAR_3, VAR_8, VAR_4,
   (VAR_11 - VAR_4) >> VAR_1, VAR_6, 0, VAR_7, ((void*)0));
  FUNC_9(&VAR_8->mmap_sem);


  if (VAR_14 > 0) {
   if (VAR_16 < 0)
    VAR_16 = VAR_14;
   else
    VAR_16 += VAR_14;
  }

  return VAR_16;
 }
}
