
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iwcm; } ;
struct nes_ib_device {TYPE_1__ ibdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nes_ib_device*) ;

void FUNC_3(struct nes_ib_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_2(VAR_0);

 FUNC_1(VAR_0->ibdev.iwcm);
 FUNC_0(&VAR_0->ibdev);
}
