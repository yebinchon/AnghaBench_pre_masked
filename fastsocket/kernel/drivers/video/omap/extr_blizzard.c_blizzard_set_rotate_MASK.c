
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_3 &= ~0x03;

 switch (VAR_2) {
 case 0:
  VAR_3 = VAR_3 | 0x00;
  break;
 case 90:
  VAR_3 = VAR_3 | 0x03;
  break;
 case 180:
  VAR_3 = VAR_3 | 0x02;
  break;
 case 270:
  VAR_3 = VAR_3 | 0x01;
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_0, VAR_3);

 return 0;
}
