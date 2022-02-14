
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * framebuf; } ;
typedef TYPE_1__ gx_video_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,unsigned int*,unsigned int*) ;
 int FUNC_3 (TYPE_1__*,unsigned int,unsigned int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(gx_video_t *VAR_4)
{
   unsigned VAR_5, VAR_6;

   if (!VAR_4->framebuf[0])
   {
      unsigned VAR_7;
      for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
         VAR_4->framebuf[VAR_7] = FUNC_0(
               FUNC_4(32, 640 * 576 * VAR_1));
   }

   VAR_2 = VAR_0;
   FUNC_1(&VAR_3);

   FUNC_2(VAR_4, &VAR_5, &VAR_6);
   FUNC_3(VAR_4, VAR_5, VAR_6, 1);
}
