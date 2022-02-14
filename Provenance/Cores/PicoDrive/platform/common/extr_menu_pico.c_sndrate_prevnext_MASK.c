
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3)
{
 static const int VAR_4[] = { 8000, 11025, 16000, 22050, 44100 };
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
  if (VAR_4[VAR_5] == VAR_2) break;

 VAR_5 += VAR_3 ? 1 : -1;
 if (VAR_5 > 4) {
  if (!(VAR_1 & VAR_0)) {
   VAR_1 |= VAR_0;
   return VAR_4[0];
  }
  return VAR_4[4];
 }
 if (VAR_5 < 0) {
  if (VAR_1 & VAR_0) {
   VAR_1 &= ~VAR_0;
   return VAR_4[4];
  }
  return VAR_4[0];
 }
 return VAR_4[VAR_5];
}
