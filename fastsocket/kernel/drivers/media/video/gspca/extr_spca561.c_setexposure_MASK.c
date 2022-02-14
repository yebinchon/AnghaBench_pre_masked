
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int exposure; } ;
struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3, VAR_4 = 0;
 int VAR_5[] = { 0, 450, 550, 625, VAR_0 };

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_5) - 1; VAR_3++) {
  if (VAR_2->exposure <= VAR_5[VAR_3 + 1]) {
   VAR_4 = VAR_2->exposure - VAR_5[VAR_3];
   if (VAR_3)
    VAR_4 += 300;
   VAR_4 |= VAR_3 << 11;
   break;
  }
 }

 VAR_1->usb_buf[0] = VAR_4;
 VAR_1->usb_buf[1] = VAR_4 >> 8;
 FUNC_1(VAR_1, 0x8309, 2);
}
