
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_alloc_size_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(png_alloc_size_t VAR_0)
{
   return FUNC_0(VAR_0 >> 24) &&
      FUNC_0((VAR_0 >> 16) & 0xff) &&
      FUNC_0((VAR_0 >> 8) & 0xff) &&
      FUNC_0(VAR_0 & 0xff);
}
