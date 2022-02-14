
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* ptr; } ;
struct radeon_cs_parser {scalar_t__ idx; TYPE_2__* rdev; TYPE_1__ ib; } ;
struct radeon_cs_packet {scalar_t__ reg; scalar_t__ count; int idx; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_mode_object {int dummy; } ;
struct drm_crtc {int enabled; } ;
struct TYPE_4__ {int ddev; } ;



 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;

 int volatile VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct drm_mode_object* FUNC_3 (int ,int,int ) ;
 struct drm_crtc* FUNC_4 (struct drm_mode_object*) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*,scalar_t__) ;
 int FUNC_6 (struct radeon_cs_parser*,int) ;
 struct radeon_crtc* FUNC_7 (struct drm_crtc*) ;

int FUNC_8(struct radeon_cs_parser *VAR_8)
{
 struct drm_mode_object *VAR_9;
 struct drm_crtc *VAR_10;
 struct radeon_crtc *VAR_11;
 struct radeon_cs_packet VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 volatile uint32_t *VAR_19;

 VAR_19 = VAR_8->ib.ptr;


 VAR_15 = FUNC_5(VAR_8, &VAR_13, VAR_8->idx);
 if (VAR_15)
  return VAR_15;


 if (VAR_13.reg != VAR_7 ||
     VAR_13.count != 0) {
  FUNC_0("vline wait had illegal wait until segment\n");
  return -VAR_2;
 }

 if (FUNC_6(VAR_8, VAR_13.idx + 1) != VAR_6) {
  FUNC_0("vline wait had illegal wait until\n");
  return -VAR_2;
 }


 VAR_15 = FUNC_5(VAR_8, &VAR_12, VAR_8->idx + VAR_13.count + 2);
 if (VAR_15)
  return VAR_15;

 VAR_17 = VAR_8->idx - 2;
 VAR_8->idx += VAR_13.count + 2;
 VAR_8->idx += VAR_12.count + 2;

 VAR_16 = FUNC_6(VAR_8, VAR_17);
 VAR_14 = FUNC_6(VAR_8, VAR_17 + 5);
 VAR_18 = FUNC_2(VAR_16);
 VAR_9 = FUNC_3(VAR_8->rdev->ddev, VAR_14, VAR_1);
 if (!VAR_9) {
  FUNC_0("cannot find crtc %d\n", VAR_14);
  return -VAR_2;
 }
 VAR_10 = FUNC_4(VAR_9);
 VAR_11 = FUNC_7(VAR_10);
 VAR_14 = VAR_11->crtc_id;

 if (!VAR_10->enabled) {

  VAR_19[VAR_17 + 2] = FUNC_1(0);
  VAR_19[VAR_17 + 3] = FUNC_1(0);
 } else if (VAR_14 == 1) {
  switch (VAR_18) {
  case 129:
   VAR_16 &= ~VAR_3;
   VAR_16 |= VAR_0 >> 2;
   break;
  case 128:
   VAR_16 &= ~VAR_3;
   VAR_16 |= VAR_4 >> 2;
   break;
  default:
   FUNC_0("unknown crtc reloc\n");
   return -VAR_2;
  }
  VAR_19[VAR_17] = VAR_16;
  VAR_19[VAR_17 + 3] |= VAR_5;
 }

 return 0;
}
