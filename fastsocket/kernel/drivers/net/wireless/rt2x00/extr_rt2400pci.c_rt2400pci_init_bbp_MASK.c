
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

 FUNC_0(VAR_5, 1, 0x00);
 FUNC_0(VAR_5, 3, 0x27);
 FUNC_0(VAR_5, 4, 0x08);
 FUNC_0(VAR_5, 10, 0x0f);
 FUNC_0(VAR_5, 15, 0x72);
 FUNC_0(VAR_5, 16, 0x74);
 FUNC_0(VAR_5, 17, 0x20);
 FUNC_0(VAR_5, 18, 0x72);
 FUNC_0(VAR_5, 19, 0x0b);
 FUNC_0(VAR_5, 20, 0x00);
 FUNC_0(VAR_5, 28, 0x11);
 FUNC_0(VAR_5, 29, 0x04);
 FUNC_0(VAR_5, 30, 0x21);
 FUNC_0(VAR_5, 31, 0x00);

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
