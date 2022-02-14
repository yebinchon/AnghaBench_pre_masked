
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_nand {TYPE_2__* dev; scalar_t__ fcr; } ;
struct nand_chip {scalar_t__ state; int (* read_byte ) (struct mtd_info*) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;TYPE_1__* controller; } ;
struct mtd_info {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 struct tmio_nand* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*,int ,int,int) ;
 int FUNC_4 (struct mtd_info*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct mtd_info*) ;
 scalar_t__ FUNC_7 (int) ;
 long FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct mtd_info *VAR_4, struct nand_chip *VAR_5)
{
 struct tmio_nand *VAR_6 = FUNC_2(VAR_4);
 long VAR_7;


 FUNC_5(0x0f, VAR_6->fcr + VAR_1);
 FUNC_5(0x81, VAR_6->fcr + VAR_0);

 VAR_7 = FUNC_8(VAR_5->controller->wq,
  FUNC_6(VAR_4),
  FUNC_1(VAR_5->state == VAR_2 ? 400 : 20));

 if (FUNC_7(!FUNC_6(VAR_4))) {
  FUNC_5(0x00, VAR_6->fcr + VAR_0);
  FUNC_0(&VAR_6->dev->dev, "still busy with %s after %d ms\n",
   VAR_5->state == VAR_2 ? "erase" : "program",
   VAR_5->state == VAR_2 ? 400 : 20);

 } else if (FUNC_7(!VAR_7)) {
  FUNC_5(0x00, VAR_6->fcr + VAR_0);
  FUNC_0(&VAR_6->dev->dev, "timeout waiting for interrupt\n");
 }

 VAR_5->cmdfunc(VAR_4, VAR_3, -1, -1);
 return VAR_5->read_byte(VAR_4);
}
