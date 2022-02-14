
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_driver_data {TYPE_1__* vma; } ;
struct TYPE_2__ {int mcr; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct ioc3_driver_data*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ioc3_driver_data *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_1(VAR_2);
 FUNC_5(FUNC_2(6, 13), &VAR_0->vma->mcr);
 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(VAR_2);

 FUNC_4(500);

 return VAR_1;
}
