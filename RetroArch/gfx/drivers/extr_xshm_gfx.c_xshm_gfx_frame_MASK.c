
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ shmaddr; } ;
struct TYPE_4__ {int width; int display; int height; int image; int gc; int wndw; TYPE_1__ shmInfo; } ;
typedef TYPE_2__ xshm_t ;
typedef int video_frame_info_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (int *,int *,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(void *VAR_1, const void *VAR_2, unsigned VAR_3,
      unsigned VAR_4, uint64_t VAR_5,
      unsigned VAR_6, const char *VAR_7, video_frame_info_t *VAR_8)
{
   xshm_t* VAR_9 = (xshm_t*)VAR_1;
   int VAR_10;

   for (VAR_10=0;VAR_10<VAR_4;VAR_10++)
   {
      FUNC_2((uint8_t*)VAR_9->shmInfo.shmaddr + sizeof(uint32_t)*VAR_9->width*VAR_10,
            (uint8_t*)VAR_2 + VAR_6*VAR_10, VAR_6);
   }





   FUNC_1(VAR_9->display, VAR_9->wndw, VAR_9->gc, VAR_9->image,
                0, 0, 0, 0, VAR_9->width, VAR_9->height, VAR_0);
   FUNC_0(VAR_9->display);

   return 1;
}
