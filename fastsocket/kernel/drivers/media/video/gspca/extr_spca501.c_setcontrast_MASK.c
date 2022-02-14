
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int contrast; } ;
struct gspca_dev {int dev; } ;


 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 FUNC_0(VAR_0->dev, 0x00, 0x00,
      (VAR_1->contrast >> 8) & 0xff);
 FUNC_0(VAR_0->dev, 0x00, 0x01,
      VAR_1->contrast & 0xff);
}
