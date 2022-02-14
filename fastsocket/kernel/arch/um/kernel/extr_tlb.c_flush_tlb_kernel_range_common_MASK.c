
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mm_struct VAR_5 ;
 int FUNC_1 (unsigned long,int,unsigned long,int,int,int) ;
 int FUNC_2 (void*,unsigned long,int,int,int) ;
 int FUNC_3 (void*,unsigned long) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,unsigned long) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int * FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int ) ;

int FUNC_19(unsigned long VAR_6, unsigned long VAR_7)
{
 struct mm_struct *VAR_8;
 pgd_t *VAR_9;
 pud_t *VAR_10;
 pmd_t *VAR_11;
 pte_t *VAR_12;
 unsigned long VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16;

 VAR_8 = &VAR_5;
 for (VAR_13 = VAR_6; VAR_13 < VAR_7;) {
  VAR_9 = FUNC_6(VAR_8, VAR_13);
  if (!FUNC_7(*VAR_9)) {
   VAR_14 = FUNC_0(VAR_13, VAR_2);
   if (VAR_14 > VAR_7)
    VAR_14 = VAR_7;
   if (FUNC_5(*VAR_9)) {
    VAR_15 = 1;
    VAR_16 = FUNC_3((void *) VAR_13,
            VAR_14 - VAR_13);
    if (VAR_16 < 0)
     FUNC_4("munmap failed, errno = %d\n",
           -VAR_16);
   }
   VAR_13 = VAR_14;
   continue;
  }

  VAR_10 = FUNC_17(VAR_9, VAR_13);
  if (!FUNC_18(*VAR_10)) {
   VAR_14 = FUNC_0(VAR_13, VAR_4);
   if (VAR_14 > VAR_7)
    VAR_14 = VAR_7;
   if (FUNC_16(*VAR_10)) {
    VAR_15 = 1;
    VAR_16 = FUNC_3((void *) VAR_13,
            VAR_14 - VAR_13);
    if (VAR_16 < 0)
     FUNC_4("munmap failed, errno = %d\n",
           -VAR_16);
   }
   VAR_13 = VAR_14;
   continue;
  }

  VAR_11 = FUNC_9(VAR_10, VAR_13);
  if (!FUNC_10(*VAR_11)) {
   VAR_14 = FUNC_0(VAR_13, VAR_3);
   if (VAR_14 > VAR_7)
    VAR_14 = VAR_7;
   if (FUNC_8(*VAR_11)) {
    VAR_15 = 1;
    VAR_16 = FUNC_3((void *) VAR_13,
            VAR_14 - VAR_13);
    if (VAR_16 < 0)
     FUNC_4("munmap failed, errno = %d\n",
           -VAR_16);
   }
   VAR_13 = VAR_14;
   continue;
  }

  VAR_12 = FUNC_13(VAR_11, VAR_13);
  if (!FUNC_14(*VAR_12) || FUNC_11(*VAR_12)) {
   VAR_15 = 1;
   VAR_16 = FUNC_3((void *) VAR_13,
           VAR_1);
   if (VAR_16 < 0)
    FUNC_4("munmap failed, errno = %d\n",
          -VAR_16);
   if (FUNC_14(*VAR_12))
    FUNC_1(VAR_13,
        FUNC_15(*VAR_12) & VAR_0,
        VAR_1, 1, 1, 1);
  }
  else if (FUNC_12(*VAR_12)) {
   VAR_15 = 1;
   FUNC_2((void *) VAR_13, VAR_1, 1, 1, 1);
  }
  VAR_13 += VAR_1;
 }
 return VAR_15;
}
