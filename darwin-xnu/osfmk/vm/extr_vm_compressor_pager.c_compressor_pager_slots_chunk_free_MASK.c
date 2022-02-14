
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ compressor_slot_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;

unsigned int
FUNC_2(
 compressor_slot_t *VAR_1,
 int VAR_2,
 int VAR_3,
 int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 unsigned int VAR_7;

 if (VAR_4)
  *VAR_4 = 0;
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_1[VAR_5] != 0) {
   VAR_6 = FUNC_1(&VAR_1[VAR_5], VAR_3);

   if (VAR_6 == 0)
    VAR_7++;
   else {
    if (VAR_6 == -2)
     FUNC_0(VAR_3 & VAR_0);

    if (VAR_4)
     *VAR_4 += 1;
   }
  }
 }
 return VAR_7;
}
