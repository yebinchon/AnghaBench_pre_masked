
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_nand {scalar_t__ fcr; } ;
struct TYPE_2__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mfd_cell {int (* disable ) (struct platform_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_2, struct tmio_nand *VAR_3)
{
 struct mfd_cell *VAR_4 = (struct mfd_cell *)VAR_2->dev.platform_data;

 FUNC_1(VAR_1, VAR_3->fcr + VAR_0);
 if (VAR_4->disable)
  VAR_4->disable(VAR_2);
}
