
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum rotation { ____Placeholder_rotation } rotation ;
typedef int dm ;
struct TYPE_3__ {int dmDisplayOrientation; int member_0; } ;
typedef TYPE_1__ DEVMODE ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;

enum rotation FUNC_1(void)
{
   DEVMODE VAR_4 = {0};
   enum rotation VAR_5;

   FUNC_0(&VAR_4, -1, sizeof(VAR_4));

   switch (VAR_4.dmDisplayOrientation)
   {
      case 128:
      default:
         VAR_5 = VAR_2;
         break;
      case 129:
         VAR_5 = VAR_1;
         break;
      case 131:
         VAR_5 = VAR_0;
         break;
      case 130:
         VAR_5 = VAR_3;
         break;
   }

   return VAR_5;
}
