
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct texture_image {int supports_rgba; } ;
typedef int respath ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int video_driver_data; } ;
struct TYPE_6__ {int images_count; void** images; TYPE_2__ render_info; TYPE_1__* render; int base_path; scalar_t__ is_archive; } ;
struct TYPE_4__ {void* (* take_image ) (int ,struct texture_image) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,void**,int *,scalar_t__*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct texture_image*,char*) ;
 int FUNC_5 (struct texture_image*,int ,void*,size_t) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,int ,int) ;
 void* FUNC_8 (int ,struct texture_image) ;
 int FUNC_9 (void**,int,int) ;
 int FUNC_10 () ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int FUNC_11(const char *VAR_2)
{
   struct texture_image VAR_3;
   void *VAR_4;
   int VAR_5;

   VAR_3.supports_rgba = FUNC_10();

   if (VAR_1->is_archive)
   {
      void *VAR_6;
      int64_t VAR_7;

      char VAR_8[VAR_0];
      FUNC_7(VAR_8, VAR_1->base_path, sizeof(VAR_8));
      FUNC_6(VAR_8, VAR_2, sizeof(VAR_8));

      if (!FUNC_1(VAR_8, &VAR_6, ((void*)0), &VAR_7))
      {
         FUNC_0("video_layout: failed to decompress image: %s\n", VAR_8);
         return 0;
      }

      if (!FUNC_5(&VAR_3, FUNC_3(VAR_2), VAR_6, (size_t)VAR_7))
      {
         FUNC_2(VAR_6);

         FUNC_0("video_layout: failed to load image: %s\n", VAR_8);
         return 0;
      }

      FUNC_2(VAR_6);
   }
   else
   {
      char VAR_9[VAR_0];
      FUNC_7(VAR_9, VAR_1->base_path, sizeof(VAR_9));
      FUNC_6(VAR_9, VAR_2, sizeof(VAR_9));

      if (!FUNC_4(&VAR_3, VAR_9))
      {
         FUNC_0("video_layout: failed to load image: %s\n", VAR_9);
         return 0;
      }
   }

   VAR_4 = VAR_1->render->take_image(
      VAR_1->render_info.video_driver_data, VAR_3);

   if (!VAR_4)
      return 0;

   VAR_5 = VAR_1->images_count;

   FUNC_9((void**)&VAR_1->images, sizeof(void*), ++VAR_1->images_count);

   VAR_1->images[VAR_5] = VAR_4;

   return VAR_5;
}
