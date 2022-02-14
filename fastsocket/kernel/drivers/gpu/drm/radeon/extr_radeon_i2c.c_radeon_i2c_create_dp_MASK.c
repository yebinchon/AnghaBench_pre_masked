
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_11__ {TYPE_3__* algo_data; int name; TYPE_1__ dev; int class; int owner; } ;
struct TYPE_9__ {scalar_t__ address; int aux_ch; } ;
struct TYPE_10__ {TYPE_3__ dp; } ;
struct radeon_i2c_bus_rec {int dummy; } ;
struct radeon_i2c_chan {TYPE_5__ adapter; TYPE_4__ algo; struct drm_device* dev; struct radeon_i2c_bus_rec rec; } ;
struct drm_device {TYPE_2__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,struct radeon_i2c_chan*) ;
 int FUNC_3 (struct radeon_i2c_chan*) ;
 struct radeon_i2c_chan* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int,char*,char const*) ;

struct radeon_i2c_chan *FUNC_6(struct drm_device *VAR_4,
          struct radeon_i2c_bus_rec *VAR_5,
          const char *VAR_6)
{
 struct radeon_i2c_chan *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(struct radeon_i2c_chan), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->rec = *VAR_5;
 VAR_7->adapter.owner = VAR_2;
 VAR_7->adapter.class = VAR_1;
 VAR_7->adapter.dev.parent = &VAR_4->pdev->dev;
 VAR_7->dev = VAR_4;
 FUNC_5(VAR_7->adapter.name, sizeof(VAR_7->adapter.name),
   "Radeon aux bus %s", VAR_6);
 FUNC_2(&VAR_7->adapter, VAR_7);
 VAR_7->adapter.algo_data = &VAR_7->algo.dp;
 VAR_7->algo.dp.aux_ch = VAR_3;
 VAR_7->algo.dp.address = 0;
 VAR_8 = FUNC_1(&VAR_7->adapter);
 if (VAR_8) {
  FUNC_0("Failed to register i2c %s\n", VAR_6);
  goto out_free;
 }

 return VAR_7;
out_free:
 FUNC_3(VAR_7);
 return ((void*)0);

}
