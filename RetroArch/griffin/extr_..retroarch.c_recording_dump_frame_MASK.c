
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {int width; scalar_t__ height; scalar_t__ full_height; scalar_t__ full_width; scalar_t__ y; scalar_t__ x; } ;
struct record_video_data {unsigned int width; unsigned int height; int pitch; int is_dupe; void const* data; } ;
struct TYPE_2__ {int (* push_video ) (int ,struct record_video_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int,int,int,int *,int ,int ) ;
 int FUNC_4 (int ,struct record_video_data*) ;
 int FUNC_5 (struct video_viewport*) ;
 int FUNC_6 () ;
 int FUNC_7 (void const*,int) ;
 void const* VAR_9 ;

__attribute__((used)) static void FUNC_8(const void *VAR_10, unsigned VAR_11,
      unsigned VAR_12, size_t VAR_13, bool VAR_14)
{
   struct record_video_data VAR_15;

   VAR_15.data = VAR_10;
   VAR_15.width = VAR_11;
   VAR_15.height = VAR_12;
   VAR_15.pitch = (int)VAR_13;
   VAR_15.is_dupe = 0;

   if (VAR_9)
   {
      struct video_viewport VAR_16;

      VAR_16.x = 0;
      VAR_16.y = 0;
      VAR_16.width = 0;
      VAR_16.height = 0;
      VAR_16.full_width = 0;
      VAR_16.full_height = 0;

      FUNC_5(&VAR_16);

      if (!VAR_16.width || !VAR_16.height)
      {
         FUNC_0("[recording] %s \n",
               FUNC_2(VAR_4));
         FUNC_6();
         FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
         return;
      }


      if ( VAR_16.width != VAR_8 ||
            VAR_16.height != VAR_7)
      {
         FUNC_0("[recording] %s\n", FUNC_2(VAR_3));

         FUNC_3(
               FUNC_2(VAR_3),
               1, 180, 1,
               ((void*)0), VAR_2, VAR_1);
         FUNC_1(VAR_0, ((void*)0));
         return;
      }




      if (!FUNC_7(VAR_9, VAR_14))
         return;

      VAR_15.pitch = (int)(VAR_8 * 3);
      VAR_15.width = (unsigned)VAR_8;
      VAR_15.height = (unsigned)VAR_7;
      VAR_15.data = VAR_9 + (VAR_15.height - 1) * VAR_15.pitch;

      VAR_15.pitch = -VAR_15.pitch;
   }
   else
      VAR_15.is_dupe = !VAR_10;

   VAR_6->push_video(VAR_5, &VAR_15);
}
