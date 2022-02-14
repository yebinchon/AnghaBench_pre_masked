
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ gps; scalar_t__ sensor_mode; scalar_t__ cameraNum; scalar_t__ verbose; int * filename; scalar_t__ height; scalar_t__ width; int camera_name; } ;
typedef TYPE_1__ RASPICOMMONSETTINGS_PARAMETERS ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

void FUNC_1(RASPICOMMONSETTINGS_PARAMETERS *VAR_1)
{
   FUNC_0(VAR_1->camera_name, "(Unknown)", VAR_0);

   VAR_1->width = 0;
   VAR_1->height = 0;
   VAR_1->filename = ((void*)0);
   VAR_1->verbose = 0;
   VAR_1->cameraNum = 0;
   VAR_1->sensor_mode = 0;
   VAR_1->gps = 0;
}
