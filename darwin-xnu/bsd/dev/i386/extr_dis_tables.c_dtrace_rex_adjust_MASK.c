
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(uint_t VAR_2, uint_t VAR_3, uint_t *VAR_4, uint_t *VAR_5)
{
#pragma unused (mode)
 if (VAR_4 != ((void*)0) && VAR_5 == ((void*)0)) {
  if (VAR_2 & VAR_0)
   *VAR_4 += 8;
 } else {
  if (VAR_4 != ((void*)0) && (VAR_1 & VAR_2) != 0)
   *VAR_4 += 8;
  if (VAR_5 != ((void*)0) && (VAR_0 & VAR_2) != 0)
   *VAR_5 += 8;
 }
}
