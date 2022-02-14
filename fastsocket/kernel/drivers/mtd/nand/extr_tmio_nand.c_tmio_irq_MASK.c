
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {TYPE_1__* controller; } ;
struct tmio_nand {TYPE_2__* dev; scalar_t__ fcr; struct nand_chip chip; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int wq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct tmio_nand *VAR_4 = VAR_3;
 struct nand_chip *VAR_5 = &VAR_4->chip;


 FUNC_1(0x00, VAR_4->fcr + VAR_0);

 if (FUNC_2(!FUNC_3(&VAR_5->controller->wq)))
  FUNC_0(&VAR_4->dev->dev, "spurious interrupt\n");

 FUNC_4(&VAR_5->controller->wq);
 return VAR_1;
}
