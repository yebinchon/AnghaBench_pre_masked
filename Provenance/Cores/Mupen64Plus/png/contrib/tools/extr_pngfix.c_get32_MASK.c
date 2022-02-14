
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int* png_bytep ;



__attribute__((used)) static png_uint_32
FUNC_0(png_bytep VAR_0, int VAR_1)


{
   return
      (VAR_0[ VAR_1 & 7] << 24) +
      (VAR_0[(VAR_1+1) & 7] << 16) +
      (VAR_0[(VAR_1+2) & 7] << 8) +
      (VAR_0[(VAR_1+3) & 7] );
}
