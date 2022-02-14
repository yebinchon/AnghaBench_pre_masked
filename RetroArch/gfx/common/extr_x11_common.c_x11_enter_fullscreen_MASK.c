
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_frame_info_t ;
typedef int XF86VidModeModeInfo ;
typedef int Display ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,unsigned int,unsigned int,int *,int *) ;

bool FUNC_4(video_frame_info_t *VAR_1,
      Display *VAR_2, unsigned VAR_3,
      unsigned VAR_4)
{
   XF86VidModeModeInfo VAR_5;

   if (!FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5, &VAR_0))
      return 0;

   if (!FUNC_2(VAR_2, FUNC_0(VAR_2), &VAR_5))
      return 0;

   FUNC_1(VAR_2, FUNC_0(VAR_2), 0, 0);
   return 1;
}
