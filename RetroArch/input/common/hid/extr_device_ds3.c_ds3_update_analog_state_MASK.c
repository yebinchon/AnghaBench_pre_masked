
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int* data; int** analog_state; } ;
typedef TYPE_1__ ds3_instance_t ;



__attribute__((used)) static void FUNC_0(ds3_instance_t *VAR_0)
{
   int VAR_1;
   int16_t VAR_2;
   unsigned VAR_3, VAR_4;

   for(VAR_1 = 0; VAR_1 < 4; VAR_1++)
   {
      VAR_4 = VAR_1 % 2 ? 0 : 1;
      VAR_3 = VAR_1 / 2;
      VAR_2 = VAR_0->data[6+VAR_1];
      VAR_0->analog_state[VAR_3][VAR_4] = (VAR_2 - 128) * 256;
   }
}
