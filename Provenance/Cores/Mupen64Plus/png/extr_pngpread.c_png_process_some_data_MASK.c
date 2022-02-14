
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_inforp ;
struct TYPE_6__ {int process_mode; int buffer_size; } ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(png_structrp VAR_0, png_inforp VAR_1)
{
   if (VAR_0 == ((void*)0))
      return;

   switch (VAR_0->process_mode)
   {
      case 128:
      {
         FUNC_2(VAR_0, VAR_1);
         break;
      }

      case 130:
      {
         FUNC_1(VAR_0, VAR_1);
         break;
      }

      case 129:
      {
         FUNC_0(VAR_0);
         break;
      }

      default:
      {
         VAR_0->buffer_size = 0;
         break;
      }
   }
}
