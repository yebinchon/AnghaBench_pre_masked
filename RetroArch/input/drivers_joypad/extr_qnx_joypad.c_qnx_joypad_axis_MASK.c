
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int * devices; } ;
typedef TYPE_1__ qnx_input_t ;
struct TYPE_4__ {int* analog0; int* analog1; } ;
typedef TYPE_2__ qnx_input_device_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int16_t FUNC_3(unsigned VAR_2, uint32_t VAR_3)
{
   int VAR_4 = 0;
   int VAR_5 = -1;
   bool VAR_6 = 0;
   bool VAR_7 = 0;
   qnx_input_t *VAR_8 = (qnx_input_t*)FUNC_2();

   if (!VAR_8 || VAR_3 == VAR_0 || VAR_2 >= VAR_1)
      return 0;

   if (FUNC_0(VAR_3) < 4)
   {
      VAR_5 = FUNC_0(VAR_3);
      VAR_6 = 1;
   }
   else if (FUNC_1(VAR_3) < 4)
   {
      VAR_5 = FUNC_1(VAR_3);
      VAR_7 = 1;
   }

   qnx_input_device_t* VAR_9 = ((void*)0);
   VAR_9 = (qnx_input_device_t*)&VAR_8->devices[VAR_2];

   switch (VAR_5)
   {
      case 0:
         VAR_4 = VAR_9->analog0[0];
         break;
      case 1:
          VAR_4 = VAR_9->analog0[1];
         break;
      case 2:
          VAR_4 = VAR_9->analog1[0];
         break;
      case 3:
          VAR_4 = VAR_9->analog1[1];
         break;
   }

   if (VAR_6 && VAR_4 > 0)
      VAR_4 = 0;
   else if (VAR_7 && VAR_4 < 0)
      VAR_4 = 0;

   return VAR_4;
}
