
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int shutdown; int * rmmio; int * rio_mem; int pdev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (int ,int *,int *,int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct radeon_device *VAR_0)
{
 FUNC_0("radeon: finishing device.\n");
 VAR_0->shutdown = 1;

 FUNC_3(VAR_0);
 FUNC_5(VAR_0);
 FUNC_7(VAR_0->pdev);
 FUNC_6(VAR_0->pdev, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_0->rio_mem)
  FUNC_2(VAR_0->pdev, VAR_0->rio_mem);
 VAR_0->rio_mem = ((void*)0);
 FUNC_1(VAR_0->rmmio);
 VAR_0->rmmio = ((void*)0);
 FUNC_4(VAR_0);
}
