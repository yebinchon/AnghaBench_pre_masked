
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mx1_camera_dev {scalar_t__ base; int clk; TYPE_2__* icd; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mx1_camera_dev*) ;

__attribute__((used)) static void FUNC_6(struct mx1_camera_dev *VAR_5)
{
 unsigned int VAR_6 = VAR_1;

 FUNC_4(VAR_5->icd->dev.parent, "Activate device\n");

 FUNC_3(VAR_5->clk);


 FUNC_2(VAR_6, VAR_5->base + VAR_0);

 VAR_6 |= VAR_4 | VAR_2 | VAR_3;
 VAR_6 |= FUNC_0(FUNC_5(VAR_5));
 VAR_6 |= FUNC_1(2);

 FUNC_2(VAR_6, VAR_5->base + VAR_0);
}
