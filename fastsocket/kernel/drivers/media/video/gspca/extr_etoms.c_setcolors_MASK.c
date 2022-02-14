
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int colors; scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 __u8 VAR_5[] = { 0x05, 0x02, 0x02, 0x05, 0x0d };
 __u8 VAR_6 = 0x01;

 __u8 VAR_7 = VAR_4->colors;

 VAR_5[3] = VAR_7;
 VAR_5[0] = 15 - VAR_7;


 if (VAR_4->sensor == VAR_2) {
  FUNC_0(VAR_3, VAR_0, &VAR_6, 1, 3);
  FUNC_0(VAR_3, VAR_1, VAR_5, sizeof VAR_5, 1);
 }


}
