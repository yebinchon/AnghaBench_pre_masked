
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {int core_enable_disable_lock; int in_reset; scalar_t__ sgdma_in_queue; int sgdma; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct omap24xxcam_device*) ;
 int FUNC_3 (struct omap24xxcam_device*) ;
 int FUNC_4 (struct omap24xxcam_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct omap24xxcam_device *VAR_0)
{
 unsigned long VAR_1;

 FUNC_6(&VAR_0->core_enable_disable_lock, VAR_1);

 if (FUNC_1(&VAR_0->in_reset) != 1)
  goto out;

 FUNC_3(VAR_0);

 FUNC_4(VAR_0);

 FUNC_5(&VAR_0->sgdma);

 if (VAR_0->sgdma_in_queue)
  FUNC_2(VAR_0);

out:
 FUNC_0(&VAR_0->in_reset);
 FUNC_7(&VAR_0->core_enable_disable_lock, VAR_1);
}
