
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int** allocptr; } ;
typedef TYPE_1__ lzma_allocator ;
typedef scalar_t__ address ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, void *VAR_2)
{
 int VAR_3;
   uint32_t *VAR_4;
   lzma_allocator *VAR_5;
 if (VAR_2 == ((void*)0))
  return;

 VAR_5 = (lzma_allocator *)(VAR_1);


 VAR_4 = (uint32_t *)(VAR_2) - 1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_4 == VAR_5->allocptr[VAR_3])
  {

   *VAR_4 &= ~1;
   return;
  }
 }
}
