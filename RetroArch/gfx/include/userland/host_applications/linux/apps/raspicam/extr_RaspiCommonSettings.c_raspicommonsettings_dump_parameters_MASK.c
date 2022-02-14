
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* camera_name; int width; int height; char* filename; int cameraNum; int sensor_mode; scalar_t__ gps; } ;
typedef TYPE_1__ RASPICOMMONSETTINGS_PARAMETERS ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_1(RASPICOMMONSETTINGS_PARAMETERS *VAR_1)
{
   FUNC_0(VAR_0, "Camera Name %s\n", VAR_1->camera_name);
   FUNC_0(VAR_0, "Width %d, Height %d, filename %s\n", VAR_1->width,
           VAR_1->height, VAR_1->filename);
   FUNC_0(VAR_0, "Using camera %d, sensor mode %d\n\n", VAR_1->cameraNum, VAR_1->sensor_mode);
   FUNC_0(VAR_0, "GPS output %s\n\n", VAR_1->gps ? "Enabled" : "Disabled");
}
