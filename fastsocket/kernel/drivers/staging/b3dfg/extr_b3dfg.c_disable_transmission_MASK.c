
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct b3dfg_dev {int buffer_waitqueue; int buffer_lock; scalar_t__ transmission_enabled; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b3dfg_dev*,int ) ;
 int FUNC_1 (struct b3dfg_dev*,int ,int ) ;
 int FUNC_2 (struct b3dfg_dev*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct b3dfg_dev *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(VAR_3, "disable transmission\n");


 FUNC_4(&VAR_2->buffer_lock, VAR_4);
 VAR_2->transmission_enabled = 0;

 FUNC_1(VAR_2, VAR_1, 0);




 VAR_5 = FUNC_0(VAR_2, VAR_0);
 FUNC_3(VAR_3, "DMA_STS reads %x after TX stopped\n", VAR_5);

 FUNC_2(VAR_2);
 FUNC_5(&VAR_2->buffer_lock, VAR_4);

 FUNC_6(&VAR_2->buffer_waitqueue);
}
