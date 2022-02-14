
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_4 ;

void FUNC_5(void *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_1 == 1)
  FUNC_3(&VAR_3, VAR_6);

 FUNC_0((pgd_t *) VAR_5 + VAR_2,
        VAR_4 + VAR_2,
        (VAR_0 - VAR_2) * sizeof(pgd_t));

 if (VAR_1 > 1)
  return;

 FUNC_2(VAR_5);
 FUNC_4(&VAR_3, VAR_6);
 FUNC_1(VAR_5, 0, VAR_2 * sizeof(pgd_t));
}
