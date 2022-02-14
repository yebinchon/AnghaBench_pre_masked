
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct android_app {int** hat_state; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;




 int VAR_1 ;
 int * FUNC_3 (unsigned int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_4(unsigned VAR_3, uint16_t VAR_4)
{
   uint8_t *VAR_5 = FUNC_3(VAR_3);
   struct android_app *VAR_6 = (struct android_app*)VAR_2;
   unsigned VAR_7 = FUNC_2(VAR_4);

   if (VAR_3 >= VAR_0)
      return 0;

   if (VAR_7)
   {
      unsigned VAR_8 = FUNC_1(VAR_4);
      if (VAR_8 > 0)
         return 0;

      switch (VAR_7)
      {
         case 130:
            return VAR_6->hat_state[VAR_3][0] == -1;
         case 129:
            return VAR_6->hat_state[VAR_3][0] == 1;
         case 128:
            return VAR_6->hat_state[VAR_3][1] == -1;
         case 131:
            return VAR_6->hat_state[VAR_3][1] == 1;
         default:
            return 0;
      }
   }

   return VAR_4 < VAR_1 && FUNC_0(VAR_5, VAR_4);
}
