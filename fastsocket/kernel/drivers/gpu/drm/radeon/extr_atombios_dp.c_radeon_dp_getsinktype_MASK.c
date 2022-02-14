
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {TYPE_3__* dp_i2c_bus; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct radeon_connector {TYPE_1__ base; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_5__ {int i2c_id; } ;
struct TYPE_6__ {TYPE_2__ rec; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int ,int ,int ,int ) ;

u8 FUNC_1(struct radeon_connector *VAR_1)
{
 struct radeon_connector_atom_dig *VAR_2 = VAR_1->con_priv;
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct radeon_device *VAR_4 = VAR_3->dev_private;

 return FUNC_0(VAR_4, VAR_0, 0,
      VAR_2->dp_i2c_bus->rec.i2c_id, 0);
}
