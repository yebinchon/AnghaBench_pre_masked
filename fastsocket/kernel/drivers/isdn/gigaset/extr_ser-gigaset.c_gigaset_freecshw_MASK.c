
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* ser; } ;
struct cardstate {TYPE_1__ hw; int write_tasklet; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cardstate *VAR_0)
{
 FUNC_3(&VAR_0->write_tasklet);
 if (!VAR_0->hw.ser)
  return;
 FUNC_0(&VAR_0->hw.ser->dev.dev, ((void*)0));
 FUNC_2(&VAR_0->hw.ser->dev);
 FUNC_1(VAR_0->hw.ser);
 VAR_0->hw.ser = ((void*)0);
}
