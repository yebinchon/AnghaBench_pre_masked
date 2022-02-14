
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int winding_t ;
typedef int vec_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_4 ;

winding_t *FUNC_2 (int VAR_5)
{
 winding_t *VAR_6;
 int VAR_7;

 if (VAR_4 == 1)
 {
  VAR_2++;
  VAR_3 += VAR_5;
  VAR_0++;
  if (VAR_0 > VAR_1)
   VAR_1 = VAR_0;
 }
 VAR_7 = sizeof(vec_t)*3*VAR_5 + sizeof(int);
 VAR_6 = FUNC_0 (VAR_7);
 FUNC_1 (VAR_6, 0, VAR_7);
 return VAR_6;
}
