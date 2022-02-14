
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_creg_mask_parms {int* orvals; int* andvals; } ;


 int FUNC_0 (int**,int,int) ;
 int FUNC_1 (int ,struct ec_creg_mask_parms*,int) ;
 int VAR_0 ;

void FUNC_2(int VAR_1, int VAR_2)
{
 struct ec_creg_mask_parms VAR_3;

 FUNC_0(&VAR_3.orvals, 0, sizeof(VAR_3.orvals));
 FUNC_0(&VAR_3.andvals, 0xff, sizeof(VAR_3.andvals));
 VAR_3.orvals[VAR_1] = 1 << VAR_2;
 FUNC_1(VAR_0, &VAR_3, 1);
}
