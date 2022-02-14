
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mx1_camera_dev {int clk; scalar_t__ base; TYPE_2__* icd; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct mx1_camera_dev *VAR_1)
{
 FUNC_2(VAR_1->icd->dev.parent, "Deactivate device\n");


 FUNC_0(0x00, VAR_1->base + VAR_0);

 FUNC_1(VAR_1->clk);
}
