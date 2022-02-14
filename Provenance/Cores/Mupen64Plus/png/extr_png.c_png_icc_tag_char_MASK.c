
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;



__attribute__((used)) static char
FUNC_0(png_uint_32 VAR_0)
{
   VAR_0 &= 0xff;
   if (VAR_0 >= 32 && VAR_0 <= 126)
      return (char)VAR_0;
   else
      return '?';
}
