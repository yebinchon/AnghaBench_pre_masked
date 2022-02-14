
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int save_restore_gpu_addr; int clear_state_gpu_addr; } ;
struct radeon_device {scalar_t__ family; TYPE_2__* rlc_fw; TYPE_1__ rlc; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_23)
{
 u32 VAR_24;
 const __be32 *VAR_25;

 if (!VAR_23->rlc_fw)
  return -VAR_7;

 FUNC_3(VAR_23);

 FUNC_0(VAR_11, 0);

 if (VAR_23->family == VAR_2) {
  FUNC_0(VAR_22, VAR_23->rlc.save_restore_gpu_addr >> 8);
  FUNC_0(VAR_21, VAR_23->rlc.clear_state_gpu_addr >> 8);
 }
 if (VAR_23->family <= VAR_4) {
  FUNC_0(VAR_10, 0);
  FUNC_0(VAR_12, 0);
  FUNC_0(VAR_13, 0);
 }
 if (VAR_23->family <= VAR_3) {
  FUNC_0(VAR_14, 0);
  FUNC_0(VAR_15, 0);
 }
 FUNC_0(VAR_16, 0);
 FUNC_0(VAR_18, 0);

 VAR_25 = (const __be32 *)VAR_23->rlc_fw->data;
 if (VAR_23->family >= VAR_2) {
  for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
   FUNC_0(VAR_17, VAR_24);
   FUNC_0(VAR_19, FUNC_1(VAR_25++));
  }
 } else if (VAR_23->family >= VAR_4) {
  for (VAR_24 = 0; VAR_24 < VAR_1; VAR_24++) {
   FUNC_0(VAR_17, VAR_24);
   FUNC_0(VAR_19, FUNC_1(VAR_25++));
  }
 } else if (VAR_23->family >= VAR_5) {
  for (VAR_24 = 0; VAR_24 < VAR_8; VAR_24++) {
   FUNC_0(VAR_17, VAR_24);
   FUNC_0(VAR_19, FUNC_1(VAR_25++));
  }
 } else if (VAR_23->family >= VAR_6) {
  for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
   FUNC_0(VAR_17, VAR_24);
   FUNC_0(VAR_19, FUNC_1(VAR_25++));
  }
 } else {
  for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
   FUNC_0(VAR_17, VAR_24);
   FUNC_0(VAR_19, FUNC_1(VAR_25++));
  }
 }
 FUNC_0(VAR_17, 0);

 FUNC_2(VAR_23);

 return 0;
}
