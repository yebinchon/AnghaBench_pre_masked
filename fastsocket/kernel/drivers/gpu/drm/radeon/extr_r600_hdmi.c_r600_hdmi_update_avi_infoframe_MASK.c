
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_4,
        void *VAR_5, size_t VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->dev;
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 struct radeon_encoder *VAR_9 = FUNC_1(VAR_4);
 struct radeon_encoder_atom_dig *VAR_10 = VAR_9->enc_priv;
 uint32_t VAR_11 = VAR_10->afmt->offset;
 uint8_t *VAR_12 = VAR_5 + 3;







 VAR_12[0x0] += 2;

 FUNC_0(VAR_0 + VAR_11,
  VAR_12[0x0] | (VAR_12[0x1] << 8) | (VAR_12[0x2] << 16) | (VAR_12[0x3] << 24));
 FUNC_0(VAR_1 + VAR_11,
  VAR_12[0x4] | (VAR_12[0x5] << 8) | (VAR_12[0x6] << 16) | (VAR_12[0x7] << 24));
 FUNC_0(VAR_2 + VAR_11,
  VAR_12[0x8] | (VAR_12[0x9] << 8) | (VAR_12[0xA] << 16) | (VAR_12[0xB] << 24));
 FUNC_0(VAR_3 + VAR_11,
  VAR_12[0xC] | (VAR_12[0xD] << 8));
}
