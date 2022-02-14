
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static u32
FUNC_2(struct drm_display_mode *VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1->hdisplay, VAR_2);
 return FUNC_0(VAR_3 * VAR_1->vdisplay, VAR_0);
}
