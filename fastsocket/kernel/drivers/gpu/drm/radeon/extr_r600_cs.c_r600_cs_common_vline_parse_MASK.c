
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* ptr; } ;
struct radeon_cs_parser {int idx; TYPE_2__* rdev; TYPE_1__ ib; } ;
struct radeon_cs_packet {scalar_t__ type; scalar_t__ opcode; int idx; int count; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_mode_object {int dummy; } ;
struct drm_crtc {int enabled; } ;
struct TYPE_4__ {int ddev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct drm_mode_object* FUNC_3 (int ,int,int ) ;
 struct drm_crtc* FUNC_4 (struct drm_mode_object*) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*,int) ;
 int FUNC_6 (struct radeon_cs_parser*,int) ;
 struct radeon_crtc* FUNC_7 (struct drm_crtc*) ;

int FUNC_8(struct radeon_cs_parser *VAR_6,
          uint32_t *VAR_7,
          uint32_t *VAR_8)
{
 struct drm_mode_object *VAR_9;
 struct drm_crtc *VAR_10;
 struct radeon_crtc *VAR_11;
 struct radeon_cs_packet VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18, VAR_19;
 volatile uint32_t *VAR_20;

 VAR_20 = VAR_6->ib.ptr;


 VAR_15 = FUNC_5(VAR_6, &VAR_13, VAR_6->idx);
 if (VAR_15)
  return VAR_15;


 if (VAR_13.type != VAR_4 ||
     VAR_13.opcode != VAR_2) {
  FUNC_0("vline wait missing WAIT_REG_MEM segment\n");
  return -VAR_1;
 }

 VAR_19 = FUNC_6(VAR_6, VAR_13.idx + 1);

 if (VAR_19 & 0x10) {
  FUNC_0("vline WAIT_REG_MEM waiting on MEM instead of REG\n");
  return -VAR_1;
 }

 if (VAR_19 & 0x100) {
  FUNC_0("vline WAIT_REG_MEM waiting on PFP instead of ME\n");
  return -VAR_1;
 }

 if ((VAR_19 & 0x7) != 0x3) {
  FUNC_0("vline WAIT_REG_MEM function not equal\n");
  return -VAR_1;
 }
 if ((FUNC_6(VAR_6, VAR_13.idx + 2) << 2) != VAR_8[0]) {
  FUNC_0("vline WAIT_REG_MEM bad reg\n");
  return -VAR_1;
 }

 if (FUNC_6(VAR_6, VAR_13.idx + 5) != VAR_5) {
  FUNC_0("vline WAIT_REG_MEM bad bit mask\n");
  return -VAR_1;
 }


 VAR_15 = FUNC_5(VAR_6, &VAR_12, VAR_6->idx + VAR_13.count + 2);
 if (VAR_15)
  return VAR_15;

 VAR_17 = VAR_6->idx - 2;
 VAR_6->idx += VAR_13.count + 2;
 VAR_6->idx += VAR_12.count + 2;

 VAR_16 = FUNC_6(VAR_6, VAR_17);
 VAR_14 = FUNC_6(VAR_6, VAR_17 + 2 + 7 + 1);
 VAR_18 = FUNC_2(VAR_16);

 VAR_9 = FUNC_3(VAR_6->rdev->ddev, VAR_14, VAR_0);
 if (!VAR_9) {
  FUNC_0("cannot find crtc %d\n", VAR_14);
  return -VAR_1;
 }
 VAR_10 = FUNC_4(VAR_9);
 VAR_11 = FUNC_7(VAR_10);
 VAR_14 = VAR_11->crtc_id;

 if (!VAR_10->enabled) {

  VAR_20[VAR_17 + 2] = FUNC_1(0);
  VAR_20[VAR_17 + 3] = FUNC_1(0);
  VAR_20[VAR_17 + 4] = FUNC_1(0);
  VAR_20[VAR_17 + 5] = FUNC_1(0);
  VAR_20[VAR_17 + 6] = FUNC_1(0);
  VAR_20[VAR_17 + 7] = FUNC_1(0);
  VAR_20[VAR_17 + 8] = FUNC_1(0);
 } else if (VAR_18 == VAR_7[0]) {
  VAR_16 &= ~VAR_3;
  VAR_16 |= VAR_7[VAR_14] >> 2;
  VAR_20[VAR_17] = VAR_16;
  VAR_20[VAR_17 + 4] = VAR_8[VAR_14] >> 2;
 } else {
  FUNC_0("unknown crtc reloc\n");
  return -VAR_1;
 }
 return 0;
}
