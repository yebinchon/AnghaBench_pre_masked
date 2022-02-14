
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_4, s16* VAR_5)
{
 u8 VAR_6[2];
 int VAR_7;

 switch (VAR_4) {
 case 130:
  VAR_7 = FUNC_0(VAR_1, VAR_6, 2);
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_2, VAR_6, 2);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_3, VAR_6, 2);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 *VAR_5 = ((s16)VAR_6[0] << 8) | VAR_6[1];

 return VAR_7;
}
