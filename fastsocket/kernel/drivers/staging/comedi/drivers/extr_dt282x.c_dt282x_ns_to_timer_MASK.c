
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  if (VAR_2 == 1)
   continue;
  VAR_3 = 250 * (1 << VAR_2);
  switch (VAR_1) {
  case 129:
  default:
   VAR_4 = (*VAR_0 + VAR_3 / 2) / VAR_3;
   break;
  case 130:
   VAR_4 = (*VAR_0) / VAR_3;
   break;
  case 128:
   VAR_4 = (*VAR_0 + VAR_3 - 1) / VAR_3;
   break;
  }
  if (VAR_4 < 256) {
   *VAR_0 = VAR_4 * VAR_3;
   return (VAR_2 << 8) | (255 - VAR_4);
  }
 }
 VAR_3 = 250 * (1 << 15);
 VAR_4 = 255;
 *VAR_0 = VAR_4 * VAR_3;
 return (15 << 8) | (255 - VAR_4);
}
