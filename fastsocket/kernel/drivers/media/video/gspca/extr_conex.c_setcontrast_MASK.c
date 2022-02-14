
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int contrast; int colors; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 __u8 VAR_4[] = { 0x88, 0x0a, 0x0c, 0x01 };

 __u8 VAR_5[2];

 VAR_4[2] = VAR_3->contrast;
 FUNC_1(VAR_2, 0x00e5, VAR_4, 4);
 FUNC_0(VAR_2, 0x00e8, 1);
 VAR_5[0] = 0x77;
 VAR_5[1] = VAR_3->colors;
 FUNC_1(VAR_2, 0x0051, VAR_5, 2);
 FUNC_1(VAR_2, 0x0010, VAR_0, 2);
 FUNC_2(VAR_2, 0x0070, VAR_1);
}
