
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int*) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1)
{
 int VAR_2;
 __u8 VAR_3[6];

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_0, "Camera Stop read failed");

 FUNC_1(VAR_3, 0, 6);
 VAR_3[0] = 0x14;
 VAR_2 = FUNC_2(VAR_1, VAR_3);
 if (VAR_2 < 0)
  FUNC_0(VAR_0, "Camera Stop command failed");
}
