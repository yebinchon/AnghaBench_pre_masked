
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev_ops; } ;
struct intel_dvo {TYPE_2__ dev; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_3__ {int (* detect ) (TYPE_2__*) ;} ;


 struct intel_dvo* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_0, bool VAR_1)
{
 struct intel_dvo *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->dev.dev_ops->detect(&VAR_2->dev);
}
