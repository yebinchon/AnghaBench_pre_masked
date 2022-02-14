
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(u8 *VAR_2)
{
 u8 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 u32 VAR_6 = 0;

 VAR_3 = VAR_2[0];
 FUNC_0(VAR_1, VAR_0, 1, " Length field=[%02x]", VAR_3);
 if (VAR_3 < 0x80) {
  VAR_6 = VAR_3 & 0x7f;
  FUNC_0(VAR_1, VAR_0, 1, " Length=[%02x]\n", VAR_6);
 } else {
  VAR_4 = VAR_3 & 0x7f;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   VAR_6 = VAR_6 << 8;
   VAR_6 += VAR_2[VAR_5 + 1];
   FUNC_0(VAR_1, VAR_0, 1, " Length=[%04x]", VAR_6);
  }
 }
 return VAR_6;
}
