
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {int sgdma; int core_enable_disable_lock; int in_reset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct omap24xxcam_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct omap24xxcam_device *VAR_0)
{
 unsigned long VAR_1;

 FUNC_3(&VAR_0->core_enable_disable_lock, VAR_1);

 if (FUNC_0(&VAR_0->in_reset) != 1) {
  FUNC_4(&VAR_0->core_enable_disable_lock, VAR_1);
  return;
 }

 FUNC_1(VAR_0);

 FUNC_4(&VAR_0->core_enable_disable_lock, VAR_1);

 FUNC_2(&VAR_0->sgdma);
}
