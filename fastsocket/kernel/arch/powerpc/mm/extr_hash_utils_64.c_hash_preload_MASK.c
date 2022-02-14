
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_psize; int id; } ;
struct mm_struct {TYPE_1__ context; void* pgd; } ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct mm_struct*,void*,unsigned long,unsigned long,unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned long,unsigned long,unsigned long,int *,unsigned long,int,int,int ) ;
 int FUNC_4 (unsigned long,unsigned long,unsigned long,int *,unsigned long,int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (void*,unsigned long) ;
 int FUNC_8 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_9 (int ,unsigned long,int) ;
 int FUNC_10 (unsigned long,unsigned long,unsigned long,unsigned long,int,int ,int) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (struct mm_struct*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (void*,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (unsigned long) ;

void FUNC_19(struct mm_struct *VAR_4, unsigned long VAR_5,
    unsigned long VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;
 void *VAR_9;
 pte_t *VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;

 FUNC_0(FUNC_2(VAR_5) != VAR_1);







 FUNC_1("hash_preload(mm=%p, mm->pgdir=%p, ea=%016lx, access=%lx,"
  " trap=%lx\n", VAR_4, VAR_4->pgd, VAR_5, VAR_6, VAR_7);


 VAR_9 = VAR_4->pgd;
 if (VAR_9 == ((void*)0))
  return;
 VAR_10 = FUNC_7(VAR_9, VAR_5);
 if (!VAR_10)
  return;
 VAR_13 = FUNC_18(VAR_5);
 VAR_8 = FUNC_9(VAR_4->context.id, VAR_5, VAR_13);


 FUNC_12(VAR_11);


 if (FUNC_5(FUNC_13(VAR_4), FUNC_6(FUNC_15())))
  VAR_14 = 1;







  VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_8, VAR_10, VAR_7, VAR_14, VAR_13,
        FUNC_16(VAR_9, VAR_5));




 if (VAR_12 == -1)
  FUNC_10(VAR_5, VAR_6, VAR_8, VAR_7, VAR_13,
       VAR_4->context.user_psize, FUNC_14(*VAR_10));

 FUNC_11(VAR_11);
}
