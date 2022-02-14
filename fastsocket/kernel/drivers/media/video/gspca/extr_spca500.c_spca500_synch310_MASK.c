
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int alt; int iface; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3)
{
 if (FUNC_3(VAR_3->dev, VAR_3->iface, 0) < 0) {
  FUNC_0(VAR_0, "Set packet size: set interface error");
  goto error;
 }
 FUNC_2(VAR_3);

 FUNC_1(VAR_3, 0x0d00, 1);


 FUNC_0(VAR_1, "ClickSmart310 sync alt: %d", VAR_3->alt);


 if (FUNC_3(VAR_3->dev,
    VAR_3->iface,
    VAR_3->alt) < 0) {
  FUNC_0(VAR_0, "Set packet size: set interface error");
  goto error;
 }
 return 0;
error:
 return -VAR_2;
}
