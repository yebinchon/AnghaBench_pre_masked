
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt2x00_dev*,int,int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,scalar_t__,int*) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_5)
{
 unsigned int VAR_6;
 u16 VAR_7;
 u8 VAR_8;
 u8 VAR_9;

 if (FUNC_4(FUNC_1(VAR_5)))
  return -VAR_0;

 FUNC_0(VAR_5, 3, 0x02);
 FUNC_0(VAR_5, 4, 0x19);
 FUNC_0(VAR_5, 14, 0x1c);
 FUNC_0(VAR_5, 15, 0x30);
 FUNC_0(VAR_5, 16, 0xac);
 FUNC_0(VAR_5, 18, 0x18);
 FUNC_0(VAR_5, 19, 0xff);
 FUNC_0(VAR_5, 20, 0x1e);
 FUNC_0(VAR_5, 21, 0x08);
 FUNC_0(VAR_5, 22, 0x08);
 FUNC_0(VAR_5, 23, 0x08);
 FUNC_0(VAR_5, 24, 0x70);
 FUNC_0(VAR_5, 25, 0x40);
 FUNC_0(VAR_5, 26, 0x08);
 FUNC_0(VAR_5, 27, 0x23);
 FUNC_0(VAR_5, 30, 0x10);
 FUNC_0(VAR_5, 31, 0x2b);
 FUNC_0(VAR_5, 32, 0xb9);
 FUNC_0(VAR_5, 34, 0x12);
 FUNC_0(VAR_5, 35, 0x50);
 FUNC_0(VAR_5, 39, 0xc4);
 FUNC_0(VAR_5, 40, 0x02);
 FUNC_0(VAR_5, 41, 0x60);
 FUNC_0(VAR_5, 53, 0x10);
 FUNC_0(VAR_5, 54, 0x18);
 FUNC_0(VAR_5, 56, 0x08);
 FUNC_0(VAR_5, 57, 0x10);
 FUNC_0(VAR_5, 58, 0x08);
 FUNC_0(VAR_5, 61, 0x6d);
 FUNC_0(VAR_5, 62, 0x10);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_2(VAR_5, VAR_3 + VAR_6, &VAR_7);

  if (VAR_7 != 0xffff && VAR_7 != 0x0000) {
   VAR_8 = FUNC_3(VAR_7, VAR_1);
   VAR_9 = FUNC_3(VAR_7, VAR_4);
   FUNC_0(VAR_5, VAR_8, VAR_9);
  }
 }

 return 0;
}
