
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int exposure; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 __u8 VAR_2;
 __u16 VAR_3;




 VAR_2 = (90 * VAR_1->exposure + 1999) / 2000;





 if (VAR_2 < 6)
  VAR_2 = 6;
 else if (VAR_2 > 63)
  VAR_2 = 63;




 if (VAR_2 < 6 || VAR_2 > 12)
  VAR_2 = ((VAR_2 + 2) / 3) * 3;



 VAR_3 = (VAR_1->exposure * 45 * 448) / (1000 * VAR_2);

 VAR_3 = 448 - VAR_3;

 FUNC_0(VAR_0, 0xff, 0x03);
 FUNC_0(VAR_0, 0x02, VAR_2);
 FUNC_0(VAR_0, 0x0e, VAR_3 & 0xff);
 FUNC_0(VAR_0, 0x0f, VAR_3 >> 8);


 FUNC_0(VAR_0, 0x11, 0x01);
}
