
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*,int) ;

int FUNC_1(u32 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
 u32 VAR_9;


 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  VAR_6 = FUNC_0(VAR_0,VAR_4);
  if (VAR_6)
   break;
 }


 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 1;
 for (; VAR_4 < VAR_1 * 32; VAR_4++) {
  if (VAR_7 > VAR_3)
   break;
  if (VAR_8 > 1)
   break;
  VAR_5 = VAR_6;
  VAR_6 = FUNC_0(VAR_0,VAR_4);
  if (VAR_5 == VAR_6) {
   VAR_7++;
   continue;
  }
  if (VAR_7 < VAR_2) {
   VAR_7++;
   VAR_8++;
   continue;
  }
  VAR_9 <<= 1;
  VAR_9 |= VAR_6;
  VAR_8 = 0;
  VAR_7 = 1;
 }
 return VAR_9;
}
