
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sharpness; } ;
struct gspca_dev {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 s8 VAR_2;

 VAR_2 = VAR_1->sharpness;
 if (VAR_2 < 0) {
  VAR_2 = FUNC_0(VAR_0, 0x42);
  FUNC_1(VAR_0, 0xff, 0x00);
  FUNC_1(VAR_0, 0x42, VAR_2 | 0x40);

  return;
 }
 if (VAR_2 != 0)
  VAR_2 = 1 << (VAR_2 - 1);
 FUNC_1(VAR_0, 0x3f,
   VAR_2);
 VAR_2 = FUNC_0(VAR_0, 0x42);
 FUNC_1(VAR_0, 0xff, 0x00);
 FUNC_1(VAR_0, 0x42, VAR_2 & 0xbf);
}
