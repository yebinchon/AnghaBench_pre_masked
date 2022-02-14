
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int * slots; } ;
typedef TYPE_1__ libusb_hid_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,unsigned int,int) ;

__attribute__((used)) static int16_t FUNC_3(void *VAR_1,
      unsigned VAR_2, uint32_t VAR_3)
{
   libusb_hid_t *VAR_4 = (libusb_hid_t*)VAR_1;
   int16_t VAR_5 = 0;

   if (VAR_3 == VAR_0)
      return 0;

   if (FUNC_0(VAR_3) < 4)
   {
      VAR_5 = FUNC_2(&VAR_4->slots[VAR_2],
            VAR_2, FUNC_0(VAR_3));

      if (VAR_5 >= 0)
         VAR_5 = 0;
   }
   else if(FUNC_1(VAR_3) < 4)
   {
      VAR_5 = FUNC_2(&VAR_4->slots[VAR_2],
            VAR_2, FUNC_1(VAR_3));

      if (VAR_5 <= 0)
         VAR_5 = 0;
   }

   return VAR_5;
}
