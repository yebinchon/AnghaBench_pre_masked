
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vtable; int * utable; int * ytable; } ;
typedef TYPE_1__ xv_t ;
typedef int uint8_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(xv_t *VAR_0)
{
   unsigned VAR_1;
   VAR_0->ytable = (uint8_t*)FUNC_0(0x10000);
   VAR_0->utable = (uint8_t*)FUNC_0(0x10000);
   VAR_0->vtable = (uint8_t*)FUNC_0(0x10000);

   for (VAR_1 = 0; VAR_1 < 0x10000; VAR_1++)
   {

      unsigned VAR_2 = (VAR_1 >> 11) & 0x1f;
      unsigned VAR_3 = (VAR_1 >> 5) & 0x3f;
      unsigned VAR_4 = (VAR_1 >> 0) & 0x1f;
      VAR_2 = (VAR_2 << 3) | (VAR_2 >> 2);
      VAR_3 = (VAR_3 << 2) | (VAR_3 >> 4);
      VAR_4 = (VAR_4 << 3) | (VAR_4 >> 2);

      FUNC_1(&VAR_0->ytable[VAR_1],
            &VAR_0->utable[VAR_1], &VAR_0->vtable[VAR_1], VAR_2, VAR_3, VAR_4);
   }
}
