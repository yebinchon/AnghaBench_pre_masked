
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct subpage_prot_table {unsigned long maxaddr; int *** protptrs; int ** low_prot; } ;
struct mm_struct {int mmap_sem; int pgd; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int) ;
 int FUNC_2 (int *,int ,int) ;
 struct subpage_prot_table* FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_7, unsigned long VAR_8)
{
 struct mm_struct *VAR_9 = VAR_6->mm;
 struct subpage_prot_table *VAR_10 = FUNC_3(VAR_9->pgd);
 u32 **VAR_11, *VAR_12;
 int VAR_13, VAR_14;
 unsigned long VAR_15, VAR_16;

 FUNC_0(&VAR_9->mmap_sem);
 VAR_16 = VAR_7 + VAR_8;
 if (VAR_16 > VAR_10->maxaddr)
  VAR_16 = VAR_10->maxaddr;
 for (; VAR_7 < VAR_16; VAR_7 = VAR_15) {
  VAR_15 = FUNC_4(VAR_7, VAR_16);
  if (VAR_7 < 0x100000000) {
   VAR_11 = VAR_10->low_prot;
  } else {
   VAR_11 = VAR_10->protptrs[VAR_7 >> VAR_5];
   if (!VAR_11)
    continue;
  }
  VAR_12 = VAR_11[(VAR_7 >> VAR_4) & (VAR_3 - 1)];
  if (!VAR_12)
   continue;
  VAR_12 += (VAR_7 >> VAR_0) & (VAR_2 - 1);

  VAR_13 = (VAR_7 >> VAR_0) & (VAR_1 - 1);
  VAR_14 = VAR_1 - VAR_13;
  if (VAR_7 + (VAR_14 << VAR_0) > VAR_15)
   VAR_14 = (VAR_15 - VAR_7) >> VAR_0;

  FUNC_2(VAR_12, 0, VAR_14 * sizeof(u32));


  FUNC_1(VAR_9, VAR_7, VAR_14);
 }
 FUNC_5(&VAR_9->mmap_sem);
}
