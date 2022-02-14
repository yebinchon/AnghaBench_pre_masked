
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct radeon_hdmi_acr {int n_48khz; int cts_48khz; int n_44_1khz; int cts_44_1khz; int n_32khz; int cts_32khz; } ;
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct radeon_hdmi_acr FUNC_4 (scalar_t__) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_6, uint32_t VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 struct radeon_hdmi_acr VAR_10 = FUNC_4(VAR_7);
 struct radeon_encoder *VAR_11 = FUNC_5(VAR_6);
 struct radeon_encoder_atom_dig *VAR_12 = VAR_11->enc_priv;
 uint32_t VAR_13 = VAR_12->afmt->offset;

 FUNC_3(VAR_0 + VAR_13, FUNC_0(VAR_10.cts_32khz));
 FUNC_3(VAR_1 + VAR_13, VAR_10.n_32khz);

 FUNC_3(VAR_2 + VAR_13, FUNC_1(VAR_10.cts_44_1khz));
 FUNC_3(VAR_3 + VAR_13, VAR_10.n_44_1khz);

 FUNC_3(VAR_4 + VAR_13, FUNC_2(VAR_10.cts_48khz));
 FUNC_3(VAR_5 + VAR_13, VAR_10.n_48khz);
}
