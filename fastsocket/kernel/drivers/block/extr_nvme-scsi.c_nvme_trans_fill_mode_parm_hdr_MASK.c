
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(u8 *VAR_3, int VAR_4, u8 VAR_5, u8 VAR_6,
     u16 VAR_7, u16 VAR_8)
{

 if ((VAR_5 && VAR_4 < 8) || (!VAR_5 && VAR_4 < 4))
  return VAR_1;

 if (VAR_5) {
  VAR_3[0] = (VAR_7 & 0xFF00) >> 8;
  VAR_3[1] = (VAR_7 & 0x00FF);

  VAR_3[4] = VAR_6;
  VAR_3[5] = VAR_0;
  VAR_3[6] = (VAR_8 & 0xFF00) >> 8;
  VAR_3[7] = (VAR_8 & 0x00FF);
 } else {
  VAR_3[0] = (VAR_7 & 0x00FF);

  VAR_3[3] = (VAR_8 & 0x00FF);
 }

 return VAR_2;
}
