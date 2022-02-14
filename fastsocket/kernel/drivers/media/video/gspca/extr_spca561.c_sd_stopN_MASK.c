
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ chip_revision; } ;
struct gspca_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_2->chip_revision == VAR_0) {
  FUNC_0(VAR_1->dev, 0x8112, 0x0e);

  FUNC_0(VAR_1->dev, 0x8114, 0x08);
 } else {
  FUNC_0(VAR_1->dev, 0x8112, 0x20);

 }
}
