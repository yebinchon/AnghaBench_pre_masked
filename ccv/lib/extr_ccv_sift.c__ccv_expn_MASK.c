
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double* VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline double FUNC_1(double VAR_3)
{
 double VAR_4, VAR_5, VAR_6;
 int VAR_7;
 FUNC_0(0 <= VAR_3 && VAR_3 <= VAR_0);
 if (VAR_3 > VAR_0)
  return 0.0;
 VAR_3 *= VAR_1 / VAR_0;
 VAR_7 = (int)VAR_3;
 VAR_6 = VAR_3 - VAR_7;
 VAR_4 = VAR_2[VAR_7];
 VAR_5 = VAR_2[VAR_7 + 1];
 return VAR_4 + VAR_6 * (VAR_5 - VAR_4);
}
