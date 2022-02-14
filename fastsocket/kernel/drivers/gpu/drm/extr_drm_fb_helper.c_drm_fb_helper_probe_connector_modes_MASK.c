
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_fb_helper {int connector_count; TYPE_1__** connector_info; } ;
struct drm_connector {TYPE_2__* funcs; } ;
struct TYPE_4__ {scalar_t__ (* fill_modes ) (struct drm_connector*,int ,int ) ;} ;
struct TYPE_3__ {struct drm_connector* connector; } ;


 scalar_t__ FUNC_0 (struct drm_connector*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_fb_helper *VAR_0,
            uint32_t VAR_1,
            uint32_t VAR_2)
{
 struct drm_connector *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->connector_count; VAR_5++) {
  VAR_3 = VAR_0->connector_info[VAR_5]->connector;
  VAR_4 += VAR_3->funcs->fill_modes(VAR_3, VAR_1, VAR_2);
 }

 return VAR_4;
}
