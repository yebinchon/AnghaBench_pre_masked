
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum camera_driver_enum { ____Placeholder_camera_driver_enum } camera_driver_enum ;




 int VAR_0 ;




const char *FUNC_0(void)
{
   enum camera_driver_enum VAR_1 = VAR_0;

   switch (VAR_1)
   {
      case 128:
         return "video4linux2";
      case 129:
         return "rwebcam";
      case 132:
         return "android";
      case 131:
         return "avfoundation";
      case 130:
         break;
   }

   return "null";
}
