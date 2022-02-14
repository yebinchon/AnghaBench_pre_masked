
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb {int fb_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_4(void)
{
   struct drm_fb *VAR_6 = ((void*)0);

   VAR_4 = FUNC_3(VAR_3);
   VAR_6 = (struct drm_fb*)FUNC_2(VAR_4);

   if (!VAR_6)
      VAR_6 = (struct drm_fb*)FUNC_1(VAR_4);

   if (FUNC_0(VAR_2, VAR_1, VAR_6->fb_id,
         VAR_0, &VAR_5) == 0)
      return 1;


   return 0;
}
