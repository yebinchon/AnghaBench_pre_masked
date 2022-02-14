
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct wiphy {int hw_version; int fw_version; } ;
struct TYPE_13__ {int rev; int patch; TYPE_3__* pcm; TYPE_2__* ucode; } ;
struct b43legacy_wldev {TYPE_6__* dev; TYPE_4__ fw; TYPE_7__* wl; } ;
struct b43legacy_fw_header {int dummy; } ;
typedef int __be32 ;
struct TYPE_16__ {TYPE_1__* hw; } ;
struct TYPE_14__ {int coreid; } ;
struct TYPE_15__ {TYPE_5__ id; } ;
struct TYPE_12__ {size_t const size; scalar_t__ data; } ;
struct TYPE_11__ {size_t const size; scalar_t__ data; } ;
struct TYPE_10__ {struct wiphy* wiphy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_5 (struct b43legacy_wldev*,int ,unsigned int,int ) ;
 int FUNC_6 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_7 (TYPE_7__*,char*) ;
 int FUNC_8 (TYPE_7__*,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_9 (int const) ;
 int VAR_20 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int,char*,int,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct b43legacy_wldev *VAR_21)
{
 struct wiphy *VAR_22 = VAR_21->wl->hw->wiphy;
 const size_t VAR_23 = sizeof(struct b43legacy_fw_header);
 const __be32 *VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 u16 VAR_27;
 u16 VAR_28;
 u16 VAR_29;
 u16 VAR_30;
 u32 VAR_31, VAR_32;
 int VAR_33 = 0;


 VAR_32 = FUNC_2(VAR_21, VAR_6);
 FUNC_0(VAR_32 & VAR_4);
 VAR_32 |= VAR_3;
 FUNC_6(VAR_21, VAR_6, VAR_32);

 for (VAR_25 = 0; VAR_25 < 64; VAR_25++)
  FUNC_5(VAR_21, VAR_16, VAR_25, 0);
 for (VAR_25 = 0; VAR_25 < 4096; VAR_25 += 2)
  FUNC_5(VAR_21, VAR_10, VAR_25, 0);


 VAR_24 = (__be32 *) (VAR_21->fw.ucode->data + VAR_23);
 VAR_26 = (VAR_21->fw.ucode->size - VAR_23) / sizeof(__be32);
 FUNC_3(VAR_21,
       VAR_15 |
       VAR_8,
       0x0000);
 for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++) {
  FUNC_6(VAR_21, VAR_7,
        FUNC_9(VAR_24[VAR_25]));
  FUNC_13(10);
 }

 if (VAR_21->fw.pcm) {

  VAR_24 = (__be32 *) (VAR_21->fw.pcm->data + VAR_23);
  VAR_26 = (VAR_21->fw.pcm->size - VAR_23) / sizeof(__be32);
  FUNC_3(VAR_21, VAR_9, 0x01EA);
  FUNC_6(VAR_21, VAR_7, 0x00004000);

  FUNC_3(VAR_21, VAR_9, 0x01EB);
  for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++) {
   FUNC_6(VAR_21, VAR_7,
       FUNC_9(VAR_24[VAR_25]));
   FUNC_13(10);
  }
 }

 FUNC_6(VAR_21, VAR_5,
     VAR_1);


 VAR_32 = FUNC_2(VAR_21, VAR_6);
 VAR_32 &= ~VAR_3;
 VAR_32 |= VAR_4;
 FUNC_6(VAR_21, VAR_6, VAR_32);


 VAR_25 = 0;
 while (1) {
  VAR_31 = FUNC_2(VAR_21, VAR_5);
  if (VAR_31 == VAR_2)
   break;
  VAR_25++;
  if (VAR_25 >= VAR_0) {
   FUNC_7(VAR_21->wl, "Microcode not responding\n");
   FUNC_1(VAR_21->wl);
   VAR_33 = -VAR_18;
   goto error;
  }
  FUNC_10(50);
  if (FUNC_11(VAR_20)) {
   VAR_33 = -VAR_17;
   goto error;
  }
 }

 FUNC_2(VAR_21, VAR_5);


 VAR_27 = FUNC_4(VAR_21, VAR_10,
         VAR_13);
 VAR_28 = FUNC_4(VAR_21, VAR_10,
           VAR_12);
 VAR_29 = FUNC_4(VAR_21, VAR_10,
          VAR_11);
 VAR_30 = FUNC_4(VAR_21, VAR_10,
          VAR_14);

 if (VAR_27 > 0x128) {
  FUNC_7(VAR_21->wl, "YOU ARE TRYING TO LOAD V4 FIRMWARE."
        " Only firmware from binary drivers version 3.x"
        " is supported. You must change your firmware"
        " files.\n");
  FUNC_1(VAR_21->wl);
  VAR_33 = -VAR_19;
  goto error;
 }
 FUNC_8(VAR_21->wl, "Loading firmware version 0x%X, patch level %u "
        "(20%.2i-%.2i-%.2i %.2i:%.2i:%.2i)\n", VAR_27, VAR_28,
        (VAR_29 >> 12) & 0xF, (VAR_29 >> 8) & 0xF, VAR_29 & 0xFF,
        (VAR_30 >> 11) & 0x1F, (VAR_30 >> 5) & 0x3F,
        VAR_30 & 0x1F);

 VAR_21->fw.rev = VAR_27;
 VAR_21->fw.patch = VAR_28;

 FUNC_12(VAR_22->fw_version, sizeof(VAR_22->fw_version), "%u.%u",
   VAR_21->fw.rev, VAR_21->fw.patch);
 VAR_22->hw_version = VAR_21->dev->id.coreid;

 return 0;

error:
 VAR_32 = FUNC_2(VAR_21, VAR_6);
 VAR_32 &= ~VAR_4;
 VAR_32 |= VAR_3;
 FUNC_6(VAR_21, VAR_6, VAR_32);

 return VAR_33;
}
