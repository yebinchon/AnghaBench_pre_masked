
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uarb ;
typedef int png_uint_32 ;
typedef int png_uint_16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_2(uarb VAR_0, int VAR_1, uarb VAR_2, int VAR_3, png_uint_32 VAR_4)



{
   if (VAR_3 > 0 && VAR_4 > 0)
   {
      VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
         (png_uint_16)(VAR_4 & 0xffff));

      VAR_4 >>= 16;
      if (VAR_4 > 0)
         VAR_1 = FUNC_1(VAR_0+1, VAR_1-1, VAR_2, VAR_3,
            (png_uint_16)VAR_4) + 1;


      FUNC_0(VAR_1 > 0);
   }

   return VAR_1;
}
