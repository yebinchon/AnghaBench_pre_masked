
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_1, 0xe0, 0x0001, 0x0000);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_1, 0x06, 0x0000, 0x0000);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_2(VAR_1, 0xe0, 0x0000, 0x0000);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_1(VAR_1, 0x06, 0, 0);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0, "reg_r_wait() failed");
  return VAR_2;
 }

 return 0;
}
