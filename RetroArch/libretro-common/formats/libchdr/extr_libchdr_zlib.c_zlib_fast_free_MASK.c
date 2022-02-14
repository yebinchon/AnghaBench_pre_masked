
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int** allocptr; } ;
typedef TYPE_1__ zlib_allocator ;
typedef scalar_t__ voidpf ;
typedef int UINT32 ;


 int VAR_0 ;

void FUNC_0(voidpf VAR_1, voidpf VAR_2)
{
 zlib_allocator *VAR_3 = (zlib_allocator *)VAR_1;
 UINT32 *VAR_4 = (UINT32 *)VAR_2 - 1;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_4 == VAR_3->allocptr[VAR_5])
  {

   *VAR_4 &= ~1;
   return;
  }
}
