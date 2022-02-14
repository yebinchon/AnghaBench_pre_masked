
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbm_bo {int dummy; } ;
struct drm_fb {int fb_id; struct gbm_bo* bo; } ;
struct TYPE_2__ {unsigned int u32; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,unsigned int,unsigned int,int,int,unsigned int,unsigned int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct drm_fb*) ;
 int VAR_2 ;
 TYPE_1__ FUNC_5 (struct gbm_bo*) ;
 unsigned int FUNC_6 (struct gbm_bo*) ;
 unsigned int FUNC_7 (struct gbm_bo*) ;
 unsigned int FUNC_8 (struct gbm_bo*) ;
 int FUNC_9 (struct gbm_bo*,struct drm_fb*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct drm_fb *FUNC_11(struct gbm_bo *VAR_3)
{
   int VAR_4;
   unsigned VAR_5, VAR_6, VAR_7, VAR_8;
   struct drm_fb *VAR_9 = (struct drm_fb*)FUNC_2(1, sizeof(*VAR_9));

   VAR_9->bo = VAR_3;

   VAR_5 = FUNC_8(VAR_3);
   VAR_6 = FUNC_6(VAR_3);
   VAR_7 = FUNC_7(VAR_3);
   VAR_8 = FUNC_5(VAR_3).u32;

   FUNC_1("[KMS]: New FB: %ux%u (stride: %u).\n",
         VAR_5, VAR_6, VAR_7);

   VAR_4 = FUNC_3(VAR_2, VAR_5, VAR_6, 24, 32,
         VAR_7, VAR_8, &VAR_9->fb_id);
   if (VAR_4 < 0)
      goto error;

   FUNC_9(VAR_3, VAR_9, VAR_0);
   return VAR_9;

error:
   FUNC_0("[KMS]: Failed to create FB: %s\n", FUNC_10(VAR_1));
   FUNC_4(VAR_9);
   return ((void*)0);
}
