
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder {int devices; } ;
struct radeon_device {int dummy; } ;
struct radeon_connector {int devices; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_4 (struct drm_encoder*) ;

void
FUNC_5(struct drm_connector *VAR_29,
          struct drm_encoder *VAR_30,
          bool VAR_31)
{
 struct drm_device *VAR_32 = VAR_29->dev;
 struct radeon_device *VAR_33 = VAR_32->dev_private;
 struct radeon_connector *VAR_34 =
     FUNC_3(VAR_29);
 struct radeon_encoder *VAR_35 = FUNC_4(VAR_30);
 uint32_t VAR_36 = FUNC_1(VAR_12);
 uint32_t VAR_37 = FUNC_1(VAR_13);

 if ((VAR_35->devices & VAR_5) &&
     (VAR_34->devices & VAR_5)) {
  if (VAR_31) {
   FUNC_0("TV1 connected\n");

   VAR_36 |= VAR_27;

   VAR_37 |= VAR_28;
   VAR_37 |= VAR_11;
  } else {
   FUNC_0("TV1 disconnected\n");
   VAR_36 &= ~VAR_26;
   VAR_37 &= ~VAR_28;
   VAR_37 &= ~VAR_11;
  }
 }
 if ((VAR_35->devices & VAR_4) &&
     (VAR_34->devices & VAR_4)) {
  if (VAR_31) {
   FUNC_0("LCD1 connected\n");
   VAR_36 |= VAR_24;
   VAR_37 |= VAR_25;
   VAR_37 |= VAR_10;
  } else {
   FUNC_0("LCD1 disconnected\n");
   VAR_36 &= ~VAR_24;
   VAR_37 &= ~VAR_25;
   VAR_37 &= ~VAR_10;
  }
 }
 if ((VAR_35->devices & VAR_0) &&
     (VAR_34->devices & VAR_0)) {
  if (VAR_31) {
   FUNC_0("CRT1 connected\n");
   VAR_36 |= VAR_14;
   VAR_37 |= VAR_16;
   VAR_37 |= VAR_6;
  } else {
   FUNC_0("CRT1 disconnected\n");
   VAR_36 &= ~VAR_15;
   VAR_37 &= ~VAR_16;
   VAR_37 &= ~VAR_6;
  }
 }
 if ((VAR_35->devices & VAR_1) &&
     (VAR_34->devices & VAR_1)) {
  if (VAR_31) {
   FUNC_0("CRT2 connected\n");
   VAR_36 |= VAR_17;
   VAR_37 |= VAR_19;
   VAR_37 |= VAR_7;
  } else {
   FUNC_0("CRT2 disconnected\n");
   VAR_36 &= ~VAR_18;
   VAR_37 &= ~VAR_19;
   VAR_37 &= ~VAR_7;
  }
 }
 if ((VAR_35->devices & VAR_2) &&
     (VAR_34->devices & VAR_2)) {
  if (VAR_31) {
   FUNC_0("DFP1 connected\n");
   VAR_36 |= VAR_20;
   VAR_37 |= VAR_21;
   VAR_37 |= VAR_8;
  } else {
   FUNC_0("DFP1 disconnected\n");
   VAR_36 &= ~VAR_20;
   VAR_37 &= ~VAR_21;
   VAR_37 &= ~VAR_8;
  }
 }
 if ((VAR_35->devices & VAR_3) &&
     (VAR_34->devices & VAR_3)) {
  if (VAR_31) {
   FUNC_0("DFP2 connected\n");
   VAR_36 |= VAR_22;
   VAR_37 |= VAR_23;
   VAR_37 |= VAR_9;
  } else {
   FUNC_0("DFP2 disconnected\n");
   VAR_36 &= ~VAR_22;
   VAR_37 &= ~VAR_23;
   VAR_37 &= ~VAR_9;
  }
 }
 FUNC_2(VAR_12, VAR_36);
 FUNC_2(VAR_13, VAR_37);
}
