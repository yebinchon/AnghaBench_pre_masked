
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int brightness; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2;

 VAR_2 = VAR_1->brightness;
 if (VAR_2 < 8)
  VAR_2 = 15 - VAR_2;
 else
  VAR_2 = VAR_2 - 8;
 FUNC_0(VAR_0, 0x55,
   0x0f | (VAR_2 << 4));
}
