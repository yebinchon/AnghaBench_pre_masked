
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; TYPE_3__* es; int encoding; } ;
struct TYPE_6__ {int x; int y; int width; int height; } ;
struct TYPE_7__ {int width; int height; TYPE_1__ crop; } ;
struct TYPE_8__ {TYPE_2__ video; } ;
typedef TYPE_4__ MMAL_ES_FORMAT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,int,int,int,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(MMAL_ES_FORMAT_T *VAR_2)
{
   if (VAR_2->type != VAR_0)
      return;

   FUNC_0(VAR_1, "fourcc: %4.4s, width: %i, height: %i, (%i,%i,%i,%i)\n",
            (char *)&VAR_2->encoding,
            VAR_2->es->video.width, VAR_2->es->video.height,
            VAR_2->es->video.crop.x, VAR_2->es->video.crop.y,
            VAR_2->es->video.crop.width, VAR_2->es->video.crop.height);
}
