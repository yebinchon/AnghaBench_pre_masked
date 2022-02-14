
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_4, int VAR_5)
{
 unsigned char *VAR_6, *VAR_7;
 int VAR_8;


 VAR_8 = 0;
 VAR_6 = VAR_7 = VAR_4;
 while (VAR_5-- > 0) {

  if (*VAR_6 == VAR_0) {

   if (VAR_5 && VAR_6[1] == VAR_0) {




    *VAR_7++ = *VAR_6++;
    VAR_5--;
   } else




    VAR_8 = ~VAR_8;

   VAR_6++;
  } else

   if (VAR_8)

    if (VAR_3)

     *VAR_7++ = VAR_2[(int) *VAR_6++];
    else

     *VAR_7++ = VAR_1[(int) *VAR_6++];
   else

    *VAR_7++ = *VAR_6++;
 }

 return VAR_7 - VAR_4;
}
