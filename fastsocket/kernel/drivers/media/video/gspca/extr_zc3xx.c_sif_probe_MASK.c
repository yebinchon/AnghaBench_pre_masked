
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (struct gspca_dev*,int ) ;
 int FUNC_5 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_2)
{
 u16 VAR_3;

 FUNC_5(VAR_2, 0x0f);
 FUNC_3(VAR_2, 0x08, 0x008d);
 FUNC_2(150);
 VAR_3 = ((FUNC_1(VAR_2, 0x00) & 0x0f) << 4)
   | ((FUNC_1(VAR_2, 0x01) & 0xf0) >> 4);
 FUNC_0(VAR_0, "probe sif 0x%04x", VAR_3);
 if (VAR_3 == 0x0007) {
  FUNC_4(VAR_2, VAR_1);
  return 0x0f;
 }
 return -1;
}
