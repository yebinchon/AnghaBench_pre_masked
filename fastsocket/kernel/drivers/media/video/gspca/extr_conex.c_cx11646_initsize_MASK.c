
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef int __u8 ;
struct TYPE_3__ {int priv; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int const*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4)
{
 const __u8 *VAR_5;
 static const __u8 VAR_6[] = { 0x08, 0x05, 0x07, 0x04, 0x24 };
 static const __u8 VAR_7[] =
   { 0x0a, 0x00, 0xf2, 0x01, 0x0f, 0x00, 0x97, 0x02 };

 switch (VAR_4->cam.cam_mode[(int) VAR_4->curr_mode].priv) {
 case 0:
  VAR_5 = VAR_3;
  break;
 case 1:
  VAR_5 = VAR_2;
  break;
 default:

  VAR_5 = VAR_1;
  break;
 case 3:
  VAR_5 = VAR_0;
  break;
 }
 FUNC_2(VAR_4, 0x009a, 0x01);
 FUNC_2(VAR_4, 0x0010, 0x10);
 FUNC_1(VAR_4, 0x0012, VAR_6, 5);
 FUNC_1(VAR_4, 0x0017, VAR_7, 8);
 FUNC_2(VAR_4, 0x00c0, 0x00);
 FUNC_2(VAR_4, 0x00c1, 0x04);
 FUNC_2(VAR_4, 0x00c2, 0x04);

 FUNC_1(VAR_4, 0x0061, VAR_5, 8);
 VAR_5 += 8;
 FUNC_1(VAR_4, 0x00ca, VAR_5, 8);
 VAR_5 += 8;
 FUNC_1(VAR_4, 0x00d2, VAR_5, 8);
 VAR_5 += 8;
 FUNC_1(VAR_4, 0x00da, VAR_5, 6);
 VAR_5 += 8;
 FUNC_1(VAR_4, 0x0041, VAR_5, 8);
 VAR_5 += 8;
 FUNC_1(VAR_4, 0x0049, VAR_5, 8);
 VAR_5 += 8;
 FUNC_1(VAR_4, 0x0051, VAR_5, 2);

 FUNC_0(VAR_4, 0x0010, 1);
}
