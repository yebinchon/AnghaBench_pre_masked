
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct nes_device {int dummy; } ;


 int FUNC_0 (struct nes_device*,int,int ,int*) ;
 int FUNC_1 (struct nes_device*,int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct nes_device *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u32 VAR_3 = 0;
 u16 VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_0, 1, VAR_2, &VAR_4);
 FUNC_1(VAR_0, 23, VAR_2, 0xb000);


 FUNC_1(VAR_0, 0, VAR_2, 0x8000);
 FUNC_2(100);
 VAR_3 = 0;
 do {
  FUNC_0(VAR_0, 0, VAR_2, &VAR_4);
  if (VAR_3++ > 100) {
   VAR_5 = -1;
   break;
  }
 } while (VAR_4 & 0x8000);


 VAR_4 &= 0xbfff;
 VAR_4 |= 0x1140;
 FUNC_1(VAR_0, 0, VAR_2, VAR_4);
 FUNC_0(VAR_0, 0, VAR_2, &VAR_4);
 FUNC_0(VAR_0, 0x17, VAR_2, &VAR_4);
 FUNC_0(VAR_0, 0x1e, VAR_2, &VAR_4);


 FUNC_0(VAR_0, 0x19, VAR_2, &VAR_4);
 FUNC_1(VAR_0, 0x19, VAR_2, 0xffee);
 FUNC_0(VAR_0, 0x19, VAR_2, &VAR_4);


 FUNC_0(VAR_0, 4, VAR_2, &VAR_4);
 FUNC_1(VAR_0, 4, VAR_2, (VAR_4 & ~(0x03E0)) | 0xc00);
 FUNC_0(VAR_0, 4, VAR_2, &VAR_4);


 FUNC_0(VAR_0, 9, VAR_2, &VAR_4);
 FUNC_1(VAR_0, 9, VAR_2, VAR_4 & ~(0x0100));
 FUNC_0(VAR_0, 9, VAR_2, &VAR_4);

 FUNC_0(VAR_0, 0, VAR_2, &VAR_4);
 FUNC_1(VAR_0, 0, VAR_2, VAR_4 | 0x0300);

 return VAR_5;
}
