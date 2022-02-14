
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_const_structp ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static png_uint_32
FUNC_4(png_const_structp VAR_0, png_uint_32 VAR_1)
{
   png_uint_32 VAR_2 = FUNC_3(VAR_0, VAR_1);


   VAR_2 *= FUNC_2(VAR_0, FUNC_0(VAR_1), FUNC_1(VAR_1));
   return (VAR_2 + 7) / 8;
}
