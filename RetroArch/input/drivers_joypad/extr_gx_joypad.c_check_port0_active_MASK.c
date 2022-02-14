
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* input_joypad_map; } ;
struct TYPE_6__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_7__ {int ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_4(uint8_t VAR_4)
{
   settings_t *VAR_5 = FUNC_0();
   int VAR_6 = VAR_5->uints.input_joypad_map[0];

   if(VAR_4 < 2 && VAR_6 != 0)
   {



      VAR_3[0] = VAR_0;

      VAR_5->uints.input_joypad_map[0] = 0;

      FUNC_2(
            FUNC_1(0),
            ((void*)0),
            VAR_2.ident,
            0,
            0,
            0
            );

      FUNC_3(0, FUNC_1(0));
   }
}
