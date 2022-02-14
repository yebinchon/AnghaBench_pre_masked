
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * dev; } ;
struct TYPE_4__ {int rts_pin; int cts_pin; TYPE_1__ port; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_0[VAR_4].port.dev != &VAR_3->dev)
   continue;
  FUNC_1(&VAR_1, &VAR_0[VAR_4].port);
  VAR_0[VAR_4].port.dev = ((void*)0);





 }

 return 0;
}
