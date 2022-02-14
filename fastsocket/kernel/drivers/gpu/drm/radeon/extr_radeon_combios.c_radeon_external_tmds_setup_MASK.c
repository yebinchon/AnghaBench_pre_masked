
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_ext_tmds {int dvo_chip; int slave_addr; int i2c_bus; } ;
struct radeon_encoder {struct radeon_encoder_ext_tmds* enc_priv; } ;
struct drm_encoder {int dummy; } ;




 int FUNC_0 (int ,int ,int,int) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

void FUNC_2(struct drm_encoder *VAR_0)
{
 struct radeon_encoder *VAR_1 = FUNC_1(VAR_0);
 struct radeon_encoder_ext_tmds *VAR_2 = VAR_1->enc_priv;

 if (!VAR_2)
  return;

 switch (VAR_2->dvo_chip) {
 case 128:

  FUNC_0(VAR_2->i2c_bus,
        VAR_2->slave_addr,
        0x08, 0x30);
  FUNC_0(VAR_2->i2c_bus,
           VAR_2->slave_addr,
           0x09, 0x00);
  FUNC_0(VAR_2->i2c_bus,
        VAR_2->slave_addr,
        0x0a, 0x90);
  FUNC_0(VAR_2->i2c_bus,
        VAR_2->slave_addr,
        0x0c, 0x89);
  FUNC_0(VAR_2->i2c_bus,
           VAR_2->slave_addr,
           0x08, 0x3b);
  break;
 case 129:
  break;
 default:
  break;
 }

}
