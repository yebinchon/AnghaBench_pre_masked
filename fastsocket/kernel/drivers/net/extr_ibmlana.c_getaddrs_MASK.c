
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mca_device {int dummy; } ;
typedef int ibmlana_medium ;


 int FUNC_0 (struct mca_device*,int) ;

__attribute__((used)) static void FUNC_1(struct mca_device *VAR_0, int *VAR_1, int *VAR_2,
       int *VAR_3, int *VAR_4, ibmlana_medium *VAR_5)
{
 u_char VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_0, 2);
 VAR_7 = FUNC_0(VAR_0, 3);

 *VAR_1 = 0xc0000 + ((VAR_7 & 0xf0) << 9);
 *VAR_2 = (VAR_7 & 0x01) ? 0x8000 : 0x4000;
 *VAR_3 = (VAR_6 & 0xe0) << 7;
 switch (VAR_6 & 0x06) {
 case 0:
  *VAR_4 = 5;
  break;
 case 2:
  *VAR_4 = 15;
  break;
 case 4:
  *VAR_4 = 10;
  break;
 case 6:
  *VAR_4 = 11;
  break;
 }
 *VAR_5 = (VAR_6 & 0x18) >> 3;
}
