
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;

 if ((VAR_0 ^ VAR_1) & 0x80000000) {
  VAR_4 = VAR_0 & 0x80000000;
  VAR_2 = VAR_0 & 0x7fffffff;
  VAR_3 = VAR_1 & 0x7fffffff;
  if (VAR_3 < 0x00800000) {
   VAR_2 = FUNC_1(VAR_2, VAR_3);
   if ((int) VAR_2 < 0) {
    VAR_2 = -VAR_2;
    VAR_4 ^= 0x80000000;
   }
  } else {
   VAR_2 = FUNC_1(VAR_3, VAR_2);
   VAR_4 ^= 0x80000000;
  }
 } else {
  VAR_4 = VAR_0 & 0x80000000;
  VAR_2 = VAR_0 & 0x7fffffff;
  VAR_3 = VAR_1 & 0x7fffffff;
  if (VAR_3 < 0x00800000)
   VAR_2 = FUNC_0(VAR_2, VAR_3);
  else
   VAR_2 = FUNC_0(VAR_3, VAR_2);
 }

 return VAR_4 | VAR_2;
}
