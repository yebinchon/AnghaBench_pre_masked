
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct gspca_dev*,int ) ;
 int FUNC_4 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_6)
{
 FUNC_0(VAR_0, "Chip revision: 072a");
 FUNC_4(VAR_6, VAR_5);
 FUNC_1(200);
 FUNC_4(VAR_6, VAR_1);
 FUNC_3(VAR_6, VAR_3);
 FUNC_4(VAR_6, VAR_2);
 FUNC_3(VAR_6, VAR_4);
 FUNC_2(VAR_6->dev, 0x8112, 0x30);
 return 0;
}
