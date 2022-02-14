
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dev; int present; } ;


 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 if (!VAR_0->present)
  return;


 FUNC_0(VAR_0->dev, 0x03, 0x03, 0x20);
 FUNC_0(VAR_0->dev, 0x03, 0x01, 0x00);
 FUNC_0(VAR_0->dev, 0x03, 0x00, 0x01);
 FUNC_0(VAR_0->dev, 0x05, 0x10, 0x01);
 FUNC_0(VAR_0->dev, 0x05, 0x11, 0x0f);
}
