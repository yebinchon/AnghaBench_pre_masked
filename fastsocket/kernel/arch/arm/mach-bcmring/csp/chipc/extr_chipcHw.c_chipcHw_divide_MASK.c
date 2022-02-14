
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3 = 1;



 while ((VAR_1 & 0x40000000) == 0) {
  VAR_1 = VAR_1 << 1;
  VAR_3 = VAR_3 << 1;
 }


 VAR_2 = 0;

 do {

  if ((VAR_0 - VAR_1) >= 0) {

   VAR_0 = VAR_0 - VAR_1;
   VAR_2 = VAR_2 + VAR_3;
  }

  VAR_1 = VAR_1 >> 1;
  VAR_3 = VAR_3 >> 1;
 } while (VAR_3 != 0);

 return VAR_2;
}
