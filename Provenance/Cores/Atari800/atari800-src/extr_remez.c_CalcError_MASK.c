
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double const,int,double const*,double const*,double const*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, const double VAR_1[],
                      const double VAR_2[], const double VAR_3[],
                      int VAR_4, const double VAR_5[],
                      const double VAR_6[], const double VAR_7[], double VAR_8[])
{
 int VAR_9;
 double VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_10 = FUNC_0(VAR_5[VAR_9], VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_8[VAR_9] = VAR_7[VAR_9] * (VAR_6[VAR_9] - VAR_10);
 }
}
