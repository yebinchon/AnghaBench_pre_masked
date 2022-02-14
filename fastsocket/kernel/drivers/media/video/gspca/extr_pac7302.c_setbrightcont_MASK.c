
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int brightness; int const contrast; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4, VAR_5;
 static const __u8 VAR_6[10] =
  {0x29, 0x33, 0x42, 0x5a, 0x6e, 0x80, 0x9f, 0xbb,
   0xd4, 0xec};
 static const __u8 VAR_7[10] =
  {0x35, 0x33, 0x33, 0x2f, 0x2a, 0x25, 0x1e, 0x17,
   0x11, 0x0b};

 FUNC_0(VAR_2, 0xff, 0x00);
 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  VAR_5 = VAR_6[VAR_4];
  VAR_5 += (VAR_3->brightness - VAR_0)
   * 150 / VAR_0;
  VAR_5 -= VAR_7[VAR_4] * VAR_3->contrast / VAR_1;
  if (VAR_5 < 0)
   VAR_5 = 0;
  else if (VAR_5 > 0xff)
   VAR_5 = 0xff;
  FUNC_0(VAR_2, 0xa2 + VAR_4, VAR_5);
 }
 FUNC_0(VAR_2, 0xdc, 0x01);
}
