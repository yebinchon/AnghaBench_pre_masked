
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int winding_t ;
typedef int vec_t ;


 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_6 ;

winding_t *FUNC_3 (int VAR_7)
{
 winding_t *VAR_8;
 int VAR_9;

 VAR_9 = sizeof(vec_t)*3*VAR_7 + sizeof(int);
 VAR_8 = FUNC_0(VAR_9);
 FUNC_2(VAR_8, 0, VAR_9);

 if (VAR_6 == 1)
 {
  VAR_3++;
  VAR_4 += VAR_7;
  VAR_0++;
  if (VAR_0 > VAR_2)
   VAR_2 = VAR_0;
  VAR_5 += FUNC_1(VAR_8);
  if (VAR_5 > VAR_1)
   VAR_1 = VAR_5;
 }
 return VAR_8;
}
