
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef size_t u32 ;
struct qib_devdata {int* eep_st_new_errs; int eep_st_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct qib_devdata *VAR_0, u32 VAR_1, u32 VAR_2)
{
 uint VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_0->eep_st_lock, VAR_4);
 VAR_3 = VAR_0->eep_st_new_errs[VAR_1] + VAR_2;
 if (VAR_3 > 255)
  VAR_3 = 255;
 VAR_0->eep_st_new_errs[VAR_1] = VAR_3;
 FUNC_1(&VAR_0->eep_st_lock, VAR_4);
}
