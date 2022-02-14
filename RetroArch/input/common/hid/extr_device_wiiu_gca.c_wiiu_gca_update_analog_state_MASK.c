
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int* data; int** analog_state; } ;
typedef TYPE_1__ gca_pad_t ;


 int FUNC_0 (char*,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(gca_pad_t *VAR_1)
{
   int VAR_2;
   int16_t VAR_3;
   unsigned VAR_4, VAR_5;




   for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
   {
      VAR_5 = VAR_2 % 2 ? 0 : 1;
      VAR_4 = VAR_2 / 2;
      VAR_3 = VAR_1->data[3 + VAR_2];

      VAR_3 = (VAR_5) ?
         ((VAR_3 - 128) * 256) :
         ((VAR_3 - 128) * -256);

      VAR_1->analog_state[VAR_4][VAR_5] = VAR_3;



   }
}
