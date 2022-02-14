
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0, unsigned int *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;




 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  VAR_4 = VAR_0 * (VAR_5 + 1);
  switch (VAR_2) {
  case 129:
  default:
   VAR_3 = (*VAR_1 + VAR_4 / 2) / VAR_4;
   break;
  case 130:
   VAR_3 = (*VAR_1) / VAR_4;
   break;
  case 128:
   VAR_3 = (*VAR_1) / VAR_4;
   break;
  }
  if (VAR_3 < 65536) {
   *VAR_1 = VAR_3 * VAR_4;
   return (VAR_5 << 16) | (VAR_3);
  }
 }

 VAR_5 = 15;
 VAR_4 = VAR_0 * (1 << VAR_5);
 VAR_3 = 65535;
 *VAR_1 = VAR_3 * VAR_4;
 return (VAR_5 << 16) | (VAR_3);
}
