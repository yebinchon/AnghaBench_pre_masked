
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_frame_info_t ;
typedef int title ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(void *VAR_5, void *VAR_6)
{
   video_frame_info_t *VAR_7 = (video_frame_info_t*)VAR_6;
   char VAR_8[128];

   VAR_8[0] = '\0';

   FUNC_2(VAR_8, sizeof(VAR_8));

   if (VAR_8[0])
      FUNC_0(VAR_3, VAR_4, VAR_2, VAR_1,
            8, VAR_0, (const unsigned char*)VAR_8,
            FUNC_1(VAR_8));
}
