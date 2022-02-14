
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0,
  int VAR_1, int VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 if ((VAR_0 == VAR_1) || (VAR_2 < VAR_0) || (VAR_2 > VAR_1)) {
  return -1;
 }




 VAR_6 = (VAR_2 - VAR_0) * (VAR_4 - VAR_3);
 VAR_7 = VAR_1 - VAR_0;
 VAR_8 = VAR_6 / VAR_7;

 if (2 * (VAR_6 % VAR_7) >= VAR_7) {
  VAR_8++;
 }

 *VAR_5 = VAR_8 + VAR_3;

 return 0;
}
