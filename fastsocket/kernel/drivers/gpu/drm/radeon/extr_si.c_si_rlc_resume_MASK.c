
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int save_restore_gpu_addr; int clear_state_gpu_addr; } ;
struct radeon_device {TYPE_2__* rlc_fw; TYPE_1__ rlc; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_13)
{
 u32 VAR_14;
 const __be32 *VAR_15;

 if (!VAR_13->rlc_fw)
  return -VAR_0;

 FUNC_3(VAR_13);

 FUNC_0(VAR_6, 0);
 FUNC_0(VAR_7, 0);
 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_4, 0xffffffff);
 FUNC_0(VAR_3, 0);

 FUNC_0(VAR_8, VAR_13->rlc.save_restore_gpu_addr >> 8);
 FUNC_0(VAR_1, VAR_13->rlc.clear_state_gpu_addr >> 8);

 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_10, 0);

 VAR_15 = (const __be32 *)VAR_13->rlc_fw->data;
 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  FUNC_0(VAR_9, VAR_14);
  FUNC_0(VAR_11, FUNC_1(VAR_15++));
 }
 FUNC_0(VAR_9, 0);

 FUNC_2(VAR_13);

 return 0;
}
