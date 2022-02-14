
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int brightness; int colors; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 __u8 VAR_5[] = { 0x88, 0x00, 0xd4, 0x01, 0x88, 0x01, 0x01, 0x01 };
 __u8 VAR_6[2];
 __u8 VAR_7;
 __u8 VAR_8;

 VAR_7 = VAR_4->brightness;
 VAR_5[2] = VAR_7;
 FUNC_1(VAR_3, 0x00e5, VAR_5, 8);
 FUNC_0(VAR_3, 0x00e8, 8);
 FUNC_1(VAR_3, 0x00e5, VAR_2, 4);
 FUNC_0(VAR_3, 0x00e8, 1);

 VAR_8 = VAR_4->colors;
 VAR_6[0] = 0x77;
 VAR_6[1] = VAR_8;
 FUNC_1(VAR_3, 0x0051, VAR_6, 2);
 FUNC_1(VAR_3, 0x0010, VAR_0, 2);
 FUNC_2(VAR_3, 0x0070, VAR_1);
}
