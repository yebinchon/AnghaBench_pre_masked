
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * clear_state_obj; int clear_state_gpu_addr; int * save_restore_obj; int save_restore_gpu_addr; } ;
struct radeon_device {int dev; TYPE_1__ rlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct radeon_device*,int ,int ,int,int ,int *,int **) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_3)
{
 int VAR_4;


 if (VAR_3->rlc.save_restore_obj == ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_0, 1,
         VAR_1, ((void*)0),
         &VAR_3->rlc.save_restore_obj);
  if (VAR_4) {
   FUNC_0(VAR_3->dev, "(%d) create RLC sr bo failed\n", VAR_4);
   return VAR_4;
  }
 }

 VAR_4 = FUNC_3(VAR_3->rlc.save_restore_obj, 0);
 if (FUNC_6(VAR_4 != 0)) {
  FUNC_5(VAR_3);
  return VAR_4;
 }
 VAR_4 = FUNC_2(VAR_3->rlc.save_restore_obj, VAR_1,
     &VAR_3->rlc.save_restore_gpu_addr);
 FUNC_4(VAR_3->rlc.save_restore_obj);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "(%d) pin RLC sr bo failed\n", VAR_4);
  FUNC_5(VAR_3);
  return VAR_4;
 }


 if (VAR_3->rlc.clear_state_obj == ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_0, 1,
         VAR_1, ((void*)0),
         &VAR_3->rlc.clear_state_obj);
  if (VAR_4) {
   FUNC_0(VAR_3->dev, "(%d) create RLC c bo failed\n", VAR_4);
   FUNC_5(VAR_3);
   return VAR_4;
  }
 }
 VAR_4 = FUNC_3(VAR_3->rlc.clear_state_obj, 0);
 if (FUNC_6(VAR_4 != 0)) {
  FUNC_5(VAR_3);
  return VAR_4;
 }
 VAR_4 = FUNC_2(VAR_3->rlc.clear_state_obj, VAR_1,
     &VAR_3->rlc.clear_state_gpu_addr);
 FUNC_4(VAR_3->rlc.clear_state_obj);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "(%d) pin RLC c bo failed\n", VAR_4);
  FUNC_5(VAR_3);
  return VAR_4;
 }

 return 0;
}
