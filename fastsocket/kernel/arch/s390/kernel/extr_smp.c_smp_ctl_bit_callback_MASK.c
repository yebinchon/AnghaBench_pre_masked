
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_creg_mask_parms {unsigned long* andvals; unsigned long* orvals; } ;


 int FUNC_0 (unsigned long*,int ,int) ;
 int FUNC_1 (unsigned long*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ec_creg_mask_parms *VAR_1 = VAR_0;
 unsigned long VAR_2[16];
 int VAR_3;

 FUNC_1(VAR_2, 0, 15);
 for (VAR_3 = 0; VAR_3 <= 15; VAR_3++)
  VAR_2[VAR_3] = (VAR_2[VAR_3] & VAR_1->andvals[VAR_3]) | VAR_1->orvals[VAR_3];
 FUNC_0(VAR_2, 0, 15);
}
