
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gl_core_streamed_texture {unsigned int width; unsigned int height; scalar_t__ tex; } ;
struct TYPE_4__ {scalar_t__ rgb32; } ;
struct TYPE_5__ {TYPE_1__ video_info; } ;
typedef TYPE_2__ gl_core_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int,int ,unsigned int,unsigned int) ;
 int FUNC_7 (int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,void const*) ;

__attribute__((used)) static void FUNC_8(gl_core_t *VAR_14,
                                       struct gl_core_streamed_texture *VAR_15,
                                       const void *VAR_16, unsigned VAR_17, unsigned VAR_18, unsigned VAR_19)
{
   if (VAR_17 != VAR_15->width || VAR_18 != VAR_15->height)
   {
      if (VAR_15->tex != 0)
         FUNC_2(1, &VAR_15->tex);
      FUNC_3(1, &VAR_15->tex);
      FUNC_1(VAR_7, VAR_15->tex);
      FUNC_6(VAR_7, 1, VAR_14->video_info.rgb32 ? VAR_6 : VAR_4,
                     VAR_17, VAR_18);
      VAR_15->width = VAR_17;
      VAR_15->height = VAR_18;

      if (VAR_14->video_info.rgb32)
      {
         FUNC_5(VAR_7, VAR_9, VAR_0);
         FUNC_5(VAR_7, VAR_8, VAR_2);
      }
   }
   else
      FUNC_1(VAR_7, VAR_15->tex);

   FUNC_0(VAR_1, 0);
   if (VAR_14->video_info.rgb32)
   {
      FUNC_4(VAR_11, VAR_19 >> 2);
      FUNC_4(VAR_10, 4);
      FUNC_7(VAR_7, 0, 0, 0,
                      VAR_17, VAR_18, VAR_5, VAR_12, VAR_16);
   }
   else
   {
      FUNC_4(VAR_11, VAR_19 >> 1);
      FUNC_4(VAR_10, 2);
      FUNC_7(VAR_7, 0, 0, 0,
                      VAR_17, VAR_18, VAR_3, VAR_13, VAR_16);
   }
}
