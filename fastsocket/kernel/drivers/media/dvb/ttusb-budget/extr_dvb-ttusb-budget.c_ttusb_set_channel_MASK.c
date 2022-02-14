
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb {int c; } ;
typedef int b ;


 int FUNC_0 (struct ttusb*,int*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ttusb *VAR_0, int VAR_1, int VAR_2,
        int VAR_3)
{
 int VAR_4;

 u8 VAR_5[] = { 0xaa, ++VAR_0->c, 0x22, 4, VAR_1, VAR_2,
  (VAR_3 >> 8) & 0xff, VAR_3 & 0xff
 };

 VAR_4 = FUNC_0(VAR_0, VAR_5, sizeof(VAR_5), 0);
 return VAR_4;
}
