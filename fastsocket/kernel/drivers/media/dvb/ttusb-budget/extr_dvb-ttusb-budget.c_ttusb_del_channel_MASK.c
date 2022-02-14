
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb {int c; } ;
typedef int b ;


 int FUNC_0 (struct ttusb*,int*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ttusb *VAR_0, int VAR_1)
{
 int VAR_2;

 u8 VAR_3[] = { 0xaa, ++VAR_0->c, 0x23, 1, VAR_1 };

 VAR_2 = FUNC_0(VAR_0, VAR_3, sizeof(VAR_3), 0);
 return VAR_2;
}
