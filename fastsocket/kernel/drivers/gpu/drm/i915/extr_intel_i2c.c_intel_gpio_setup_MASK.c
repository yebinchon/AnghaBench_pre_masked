
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct i2c_algo_bit_data* algo_data; } ;
struct i2c_algo_bit_data {struct intel_gmbus* data; int timeout; int udelay; int post_xfer; int pre_xfer; int getscl; int getsda; int setscl; int setsda; } ;
struct intel_gmbus {TYPE_1__ adapter; scalar_t__ gpio_reg; struct i2c_algo_bit_data bit_algo; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {scalar_t__ gpio_mmio_base; } ;
struct TYPE_4__ {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct intel_gmbus *VAR_8, u32 VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_8->dev_priv;
 struct i2c_algo_bit_data *VAR_11;

 VAR_11 = &VAR_8->bit_algo;


 VAR_8->gpio_reg = VAR_10->gpio_mmio_base + VAR_3[VAR_9 - 1].reg;

 VAR_8->adapter.algo_data = VAR_11;
 VAR_11->setsda = VAR_7;
 VAR_11->setscl = VAR_6;
 VAR_11->getsda = VAR_2;
 VAR_11->getscl = VAR_1;
 VAR_11->pre_xfer = VAR_5;
 VAR_11->post_xfer = VAR_4;
 VAR_11->udelay = VAR_0;
 VAR_11->timeout = FUNC_0(2200);
 VAR_11->data = VAR_8;
}
