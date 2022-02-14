
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int head; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int user_modes; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0,
    struct drm_connector *VAR_1,
    struct drm_display_mode *VAR_2)
{
 FUNC_0(&VAR_2->head, &VAR_1->user_modes);
}
