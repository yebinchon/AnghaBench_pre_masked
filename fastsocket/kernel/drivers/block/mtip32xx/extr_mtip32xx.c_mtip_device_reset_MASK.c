
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {scalar_t__ mmio; int port; int pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct driver_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct driver_data *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_1(VAR_3->pdev))
  return 0;

 if (FUNC_2(VAR_3) < 0)
  VAR_4 = -VAR_0;

 FUNC_0(1);
 FUNC_3(VAR_3->port);
 FUNC_4(VAR_3->port);


 FUNC_6(FUNC_5(VAR_3->mmio + VAR_1) | VAR_2,
     VAR_3->mmio + VAR_1);
 return VAR_4;
}
