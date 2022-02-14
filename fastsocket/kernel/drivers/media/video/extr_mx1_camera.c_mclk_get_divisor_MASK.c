
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mx1_camera_dev {unsigned int mclk; TYPE_2__* icd; int clk; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct mx1_camera_dev *VAR_0)
{
 unsigned int VAR_1 = VAR_0->mclk;
 unsigned long VAR_2;
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0->clk);



 VAR_2 = (VAR_3 + 2 * VAR_1 - 1) / (2 * VAR_1) - 1;

 FUNC_1(VAR_0->icd->dev.parent,
  "System clock %lukHz, target freq %dkHz, divisor %lu\n",
  VAR_3 / 1000, VAR_1 / 1000, VAR_2);

 return VAR_2;
}
