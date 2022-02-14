
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_sa_manager {int * bo; int cpu_ptr; int gpu_addr; int domain; } ;
struct radeon_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct radeon_device *VAR_1,
          struct radeon_sa_manager *VAR_2)
{
 int VAR_3;

 if (VAR_2->bo == ((void*)0)) {
  FUNC_0(VAR_1->dev, "no bo for sa manager\n");
  return -VAR_0;
 }


 VAR_3 = FUNC_3(VAR_2->bo, 0);
 if (VAR_3) {
  FUNC_0(VAR_1->dev, "(%d) failed to reserve manager bo\n", VAR_3);
  return VAR_3;
 }
 VAR_3 = FUNC_2(VAR_2->bo, VAR_2->domain, &VAR_2->gpu_addr);
 if (VAR_3) {
  FUNC_4(VAR_2->bo);
  FUNC_0(VAR_1->dev, "(%d) failed to pin manager bo\n", VAR_3);
  return VAR_3;
 }
 VAR_3 = FUNC_1(VAR_2->bo, &VAR_2->cpu_ptr);
 FUNC_4(VAR_2->bo);
 return VAR_3;
}
