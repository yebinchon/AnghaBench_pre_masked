
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_1);

  switch (VAR_3) {
  case 0x00:
   return 1;
  case 0x04:
   return 0;
  case 0x03:
   break;
  default:
   FUNC_0(VAR_0, "sccb status 0x%02x, attempt %d/5",
          VAR_3, VAR_4 + 1);
  }
 }
 return 0;
}
