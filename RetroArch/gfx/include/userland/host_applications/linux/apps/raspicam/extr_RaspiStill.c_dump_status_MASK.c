
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nextFrameMethod; char* description; } ;
struct TYPE_5__ {int width; int height; int quality; scalar_t__ enable; } ;
struct TYPE_6__ {int quality; int timeout; int timelapse; char* linkname; scalar_t__ frameNextMethod; int numExifTags; char** exifTags; int camera_parameters; int preview_parameters; scalar_t__ enableExifTags; scalar_t__ fullResPreview; TYPE_1__ thumbnailConfig; scalar_t__ wantRAW; int common_settings; } ;
typedef TYPE_2__ RASPISTILL_STATE ;


 int FUNC_0 (int ,char*,...) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(RASPISTILL_STATE *VAR_3)
{
   int VAR_4;

   if (!VAR_3)
   {
      FUNC_4(0);
      return;
   }

   FUNC_2(&VAR_3->common_settings);

   FUNC_0(VAR_2, "Quality %d, Raw %s\n", VAR_3->quality, VAR_3->wantRAW ? "yes" : "no");
   FUNC_0(VAR_2, "Thumbnail enabled %s, width %d, height %d, quality %d\n",
           VAR_3->thumbnailConfig.enable ? "Yes":"No", VAR_3->thumbnailConfig.width,
           VAR_3->thumbnailConfig.height, VAR_3->thumbnailConfig.quality);

   FUNC_0(VAR_2, "Time delay %d, Timelapse %d\n", VAR_3->timeout, VAR_3->timelapse);
   FUNC_0(VAR_2, "Link to latest frame enabled ");
   if (VAR_3->linkname)
   {
      FUNC_0(VAR_2, " yes, -> %s\n", VAR_3->linkname);
   }
   else
   {
      FUNC_0(VAR_2, " no\n");
   }
   FUNC_0(VAR_2, "Full resolution preview %s\n", VAR_3->fullResPreview ? "Yes": "No");

   FUNC_0(VAR_2, "Capture method : ");
   for (VAR_4=0; VAR_4<VAR_1; VAR_4++)
   {
      if (VAR_3->frameNextMethod == VAR_0[VAR_4].nextFrameMethod)
         FUNC_0(VAR_2, "%s", VAR_0[VAR_4].description);
   }
   FUNC_0(VAR_2, "\n\n");

   if (VAR_3->enableExifTags)
   {
      if (VAR_3->numExifTags)
      {
         FUNC_0(VAR_2, "User supplied EXIF tags :\n");

         for (VAR_4=0; VAR_4<VAR_3->numExifTags; VAR_4++)
         {
            FUNC_0(VAR_2, "%s", VAR_3->exifTags[VAR_4]);
            if (VAR_4 != VAR_3->numExifTags-1)
               FUNC_0(VAR_2, ",");
         }
         FUNC_0(VAR_2, "\n\n");
      }
   }
   else
      FUNC_0(VAR_2, "EXIF tags disabled\n");

   FUNC_3(&VAR_3->preview_parameters);
   FUNC_1(&VAR_3->camera_parameters);
}
