
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int* buttons; int ** hats; } ;
typedef TYPE_1__ iohidmanager_hid_t ;
typedef int input_bits_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;




 unsigned int VAR_0 ;
 int FUNC_3 (void*,unsigned int,int *) ;

__attribute__((used)) static bool FUNC_4(void *VAR_1,
      unsigned VAR_2, uint16_t VAR_3)
{
  input_bits_t VAR_4;
  iohidmanager_hid_t *VAR_5 = (iohidmanager_hid_t*)VAR_1;
  unsigned VAR_6 = FUNC_2(VAR_3);

  FUNC_3(VAR_1, VAR_2, &VAR_4);


   if (VAR_6)
   {
      unsigned VAR_7 = FUNC_1(VAR_3);
      if (VAR_7 >= 1)
         return 0;

      switch(VAR_6)
      {
         case 130:
            return VAR_5->hats[VAR_2][0] < 0;
         case 129:
            return VAR_5->hats[VAR_2][0] > 0;
         case 128:
            return VAR_5->hats[VAR_2][1] < 0;
         case 131:
            return VAR_5->hats[VAR_2][1] > 0;
      }

      return 0;
   }


   if ((VAR_2 < VAR_0) && (VAR_3 < 32))
      return (FUNC_0(VAR_4, VAR_3) != 0)
         || ((VAR_5->buttons[VAR_2] & (1 << VAR_3)) != 0);

   return 0;
}
