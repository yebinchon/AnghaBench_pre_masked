
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct radeon_device {scalar_t__ is_atom_bios; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; TYPE_2__* dp_i2c_bus; } ;
struct TYPE_11__ {scalar_t__ connector_type; struct drm_device* dev; } ;
struct TYPE_8__ {scalar_t__ ddc_valid; } ;
struct radeon_connector {TYPE_4__ base; int * edid; TYPE_3__* ddc_bus; struct radeon_connector_atom_dig* con_priv; TYPE_1__ router; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_10__ {int adapter; } ;
struct TYPE_9__ {int adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 void* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 void* FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct radeon_connector*) ;

int FUNC_6(struct radeon_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->base.dev;
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 int VAR_9 = 0;


 if (VAR_6->router.ddc_valid)
  FUNC_5(VAR_6);

 if (FUNC_4(&VAR_6->base) !=
     VAR_5) {
  struct radeon_connector_atom_dig *VAR_10 = VAR_6->con_priv;

  if (VAR_10->dp_i2c_bus)
   VAR_6->edid = FUNC_1(&VAR_6->base,
             &VAR_10->dp_i2c_bus->adapter);
 } else if ((VAR_6->base.connector_type == VAR_2) ||
     (VAR_6->base.connector_type == VAR_4)) {
  struct radeon_connector_atom_dig *VAR_11 = VAR_6->con_priv;

  if ((VAR_11->dp_sink_type == VAR_0 ||
       VAR_11->dp_sink_type == VAR_1) && VAR_11->dp_i2c_bus)
   VAR_6->edid = FUNC_1(&VAR_6->base,
             &VAR_11->dp_i2c_bus->adapter);
  else if (VAR_6->ddc_bus && !VAR_6->edid)
   VAR_6->edid = FUNC_1(&VAR_6->base,
             &VAR_6->ddc_bus->adapter);
 } else {
  if (VAR_6->ddc_bus && !VAR_6->edid)
   VAR_6->edid = FUNC_1(&VAR_6->base,
             &VAR_6->ddc_bus->adapter);
 }

 if (!VAR_6->edid) {
  if (VAR_8->is_atom_bios) {

   if (((VAR_6->base.connector_type == VAR_3) ||
        (VAR_6->base.connector_type == VAR_4)))
    VAR_6->edid = FUNC_3(VAR_8);
  } else

   VAR_6->edid = FUNC_3(VAR_8);
 }
 if (VAR_6->edid) {
  FUNC_2(&VAR_6->base, VAR_6->edid);
  VAR_9 = FUNC_0(&VAR_6->base, VAR_6->edid);
  return VAR_9;
 }
 FUNC_2(&VAR_6->base, ((void*)0));
 return 0;
}
