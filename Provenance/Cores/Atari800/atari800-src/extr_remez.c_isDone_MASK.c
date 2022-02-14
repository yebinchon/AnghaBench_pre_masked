
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double const) ;

__attribute__((used)) static int FUNC_1(int VAR_0, const int VAR_1[], const double VAR_2[])
{
 int VAR_3;
 double VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_5 = FUNC_0(VAR_2[VAR_1[0]]);
 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  VAR_6 = FUNC_0(VAR_2[VAR_1[VAR_3]]);
  if (VAR_6 < VAR_4)
   VAR_4 = VAR_6;
  if (VAR_6 > VAR_5)
   VAR_5 = VAR_6;
 }
 if (((VAR_5 - VAR_4) / VAR_5) < 0.0001)
  return 1;
 return 0;
}
