
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int console_id; } ;
struct TYPE_4__ {TYPE_1__ patchdata; int fixups; } ;


 int* FUNC_0 (int *,unsigned int,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_1, unsigned VAR_2, void* VAR_3)
{
   const uint8_t* VAR_4 = FUNC_0(&VAR_0.fixups,
      VAR_1, VAR_0.patchdata.console_id);
   unsigned VAR_5 = 0;

   if (VAR_4)
   {
      switch (VAR_2)
      {
         case 4: VAR_5 |= VAR_4[2] << 16 | VAR_4[3] << 24;
         case 2: VAR_5 |= VAR_4[1] << 8;
         case 1: VAR_5 |= VAR_4[0];
      }
   }

   return VAR_5;
}
