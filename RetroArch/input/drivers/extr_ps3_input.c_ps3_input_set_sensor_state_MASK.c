
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum retro_sensor_action { ____Placeholder_retro_sensor_action } retro_sensor_action ;
struct TYPE_3__ {int* device_capability; } ;
typedef TYPE_1__ CellPadInfo2 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_2, unsigned VAR_3,
      enum retro_sensor_action VAR_4, unsigned VAR_5)
{
   CellPadInfo2 VAR_6;
   (void)VAR_5;

   switch (VAR_4)
   {
      case 128:
         FUNC_0(&VAR_6);
         if ((VAR_6.device_capability[VAR_3]
                  & VAR_0)
               != VAR_0)
            return 0;

         FUNC_1(VAR_3, VAR_1);
         return 1;
      case 129:
         FUNC_1(VAR_3, 0);
         return 1;

      default:
         return 0;
   }
}
