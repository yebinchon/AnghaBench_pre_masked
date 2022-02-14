
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_offset; int crtc_id; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 struct radeon_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_16)
{
 struct radeon_crtc *VAR_17 = FUNC_6(VAR_16);
 struct radeon_device *VAR_18 = VAR_16->dev->dev_private;

 if (FUNC_1(VAR_18)) {
  FUNC_4(VAR_15, VAR_7 + VAR_17->crtc_offset);
  FUNC_4(VAR_14, VAR_5 |
         FUNC_2(VAR_4) |
         FUNC_3(VAR_6));
 } else if (FUNC_0(VAR_18)) {
  FUNC_4(VAR_15, VAR_3 + VAR_17->crtc_offset);
  FUNC_4(VAR_14, VAR_0 |
         (VAR_1 << VAR_2));
 } else {
  switch (VAR_17->crtc_id) {
  case 0:
   FUNC_4(VAR_15, VAR_13);
   break;
  case 1:
   FUNC_4(VAR_15, VAR_8);
   break;
  default:
   return;
  }

  FUNC_5(VAR_14, (VAR_9 |
       (VAR_10 << VAR_12)),
    ~(VAR_9 | VAR_11));
 }
}
