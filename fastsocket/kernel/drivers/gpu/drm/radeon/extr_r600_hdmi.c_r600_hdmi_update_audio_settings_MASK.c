
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct r600_audio {int rate; int bits_per_sample; int status_bits; int channels; scalar_t__ category_code; } ;
struct hdmi_audio_infoframe {int channels; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;
struct TYPE_2__ {int offset; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int,int) ;
 scalar_t__ FUNC_7 (struct hdmi_audio_infoframe*) ;
 scalar_t__ FUNC_8 (struct hdmi_audio_infoframe*,int *,int) ;
 struct r600_audio FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct drm_encoder*) ;
 scalar_t__ FUNC_11 (struct drm_encoder*) ;
 int FUNC_12 (struct drm_encoder*,int *,int) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

void FUNC_14(struct drm_encoder *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_encoder *VAR_12 = FUNC_13(VAR_9);
 struct radeon_encoder_atom_dig *VAR_13 = VAR_12->enc_priv;
 struct r600_audio VAR_14 = FUNC_9(VAR_11);
 uint8_t VAR_15[VAR_8 + VAR_7];
 struct hdmi_audio_infoframe VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 ssize_t VAR_19;

 if (!VAR_13->afmt || !VAR_13->afmt->enabled)
  return;
 VAR_17 = VAR_13->afmt->offset;

 FUNC_0("%s with %d channels, %d Hz sampling rate, %d bits per sample,\n",
   FUNC_11(VAR_9) ? "playing" : "stopped",
    VAR_14.channels, VAR_14.rate, VAR_14.bits_per_sample);
 FUNC_0("0x%02X IEC60958 status bits and 0x%02X category code\n",
    (int)VAR_14.status_bits, (int)VAR_14.category_code);

 VAR_18 = 0;
 if (VAR_14.status_bits & VAR_3)
  VAR_18 |= 1 << 0;
 if (VAR_14.status_bits & VAR_2)
  VAR_18 |= 1 << 1;
 if (VAR_14.status_bits & VAR_0)
  VAR_18 |= 1 << 2;
 if (VAR_14.status_bits & VAR_1)
  VAR_18 |= 1 << 3;

 VAR_18 |= FUNC_2(VAR_14.category_code);

 switch (VAR_14.rate) {
 case 32000:
  VAR_18 |= FUNC_3(0x3);
  break;
 case 44100:
  VAR_18 |= FUNC_3(0x0);
  break;
 case 48000:
  VAR_18 |= FUNC_3(0x2);
  break;
 case 88200:
  VAR_18 |= FUNC_3(0x8);
  break;
 case 96000:
  VAR_18 |= FUNC_3(0xa);
  break;
 case 176400:
  VAR_18 |= FUNC_3(0xc);
  break;
 case 192000:
  VAR_18 |= FUNC_3(0xe);
  break;
 }

 FUNC_5(VAR_5 + VAR_17, VAR_18);

 VAR_18 = 0;
 switch (VAR_14.bits_per_sample) {
 case 16:
  VAR_18 |= FUNC_4(0x2);
  break;
 case 20:
  VAR_18 |= FUNC_4(0x3);
  break;
 case 24:
  VAR_18 |= FUNC_4(0xb);
  break;
 }
 if (VAR_14.status_bits & VAR_4)
  VAR_18 |= 0x5 << 16;
 FUNC_6(VAR_6 + VAR_17, VAR_18, ~0x5000f);

 VAR_19 = FUNC_7(&VAR_16);
 if (VAR_19 < 0) {
  FUNC_1("failed to setup audio infoframe\n");
  return;
 }

 VAR_16.channels = VAR_14.channels;

 VAR_19 = FUNC_8(&VAR_16, VAR_15, sizeof(VAR_15));
 if (VAR_19 < 0) {
  FUNC_1("failed to pack audio infoframe\n");
  return;
 }

 FUNC_12(VAR_9, VAR_15, sizeof(VAR_15));
 FUNC_10(VAR_9);
}
