
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_driver_data {TYPE_1__* vma; } ;
struct TYPE_2__ {int mcr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ioc3_driver_data*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ioc3_driver_data *VAR_0, int VAR_1)
{
 if (VAR_1)
  FUNC_2(FUNC_0(6, 110), &VAR_0->vma->mcr);
 else
  FUNC_2(FUNC_0(80, 30), &VAR_0->vma->mcr);

 FUNC_1(VAR_0);
}
