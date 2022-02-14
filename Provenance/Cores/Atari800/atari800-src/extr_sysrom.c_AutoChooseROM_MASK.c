
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int const *VAR_1)
{
 do {
  if (VAR_0[*VAR_1].filename[0] != '\0')
   return *VAR_1;
 } while (*++VAR_1 != -1);
 return -1;
}
