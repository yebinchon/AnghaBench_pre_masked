
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int param ;
struct TYPE_10__ {int size; int id; } ;
struct TYPE_9__ {int control; } ;
struct TYPE_8__ {int num_cameras; TYPE_1__* cameras; TYPE_4__ hdr; } ;
struct TYPE_7__ {int max_width; int max_height; char* camera_name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_CAMERA_INFO_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__**) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(int VAR_4, char *VAR_5, int *VAR_6, int *VAR_7 )
{
   MMAL_COMPONENT_T *VAR_8;
   MMAL_STATUS_T VAR_9;


   FUNC_3(VAR_5, "OV5647", VAR_2);


   VAR_9 = FUNC_0(VAR_0, &VAR_8);
   if (VAR_9 == VAR_3)
   {
      MMAL_PARAMETER_CAMERA_INFO_T VAR_10;
      VAR_10.hdr.id = VAR_1;
      VAR_10.hdr.size = sizeof(VAR_10)-4;
      VAR_9 = FUNC_2(VAR_8->control, &VAR_10.hdr);

      if (VAR_9 != VAR_3)
      {

         VAR_10.hdr.size = sizeof(VAR_10);
         VAR_9 = FUNC_2(VAR_8->control, &VAR_10.hdr);
         if (VAR_9 == VAR_3 && VAR_10.num_cameras > VAR_4)
         {

            if (*VAR_6 == 0)
               *VAR_6 = VAR_10.cameras[VAR_4].max_width;
            if (*VAR_7 == 0)
               *VAR_7 = VAR_10.cameras[VAR_4].max_height;
            FUNC_3(VAR_5, VAR_10.cameras[VAR_4].camera_name, VAR_2);
            VAR_5[VAR_2-1] = 0;
         }
         else
            FUNC_4("Cannot read camera info, keeping the defaults for OV5647");
      }
      else
      {


      }

      FUNC_1(VAR_8);
   }
   else
   {
      FUNC_4("Failed to create camera_info component");
   }


   if (*VAR_6 == 0)
      *VAR_6 = 2592;
   if (*VAR_7 == 0)
      *VAR_7 = 1944;
}
