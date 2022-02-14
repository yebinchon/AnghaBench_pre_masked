
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(int VAR_2, int VAR_3, int VAR_4, double VAR_5[],
                            const double VAR_6[], const double VAR_7[],
                            int *VAR_8, double VAR_9[],
                            double VAR_10[], double VAR_11[], int VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 double VAR_17, VAR_18, VAR_19;

 VAR_17 = 0.5 / (VAR_0 * VAR_2);




 if (VAR_12 == VAR_1 && VAR_17 > VAR_5[0])
  VAR_5[0] = VAR_17;

 VAR_14 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  VAR_9[VAR_14] = VAR_5[2 * VAR_16];
  VAR_18 = VAR_5[2 * VAR_16];
  VAR_19 = VAR_5[2 * VAR_16 + 1];
  VAR_15 = (int) ((VAR_19 - VAR_18) / VAR_17 + 0.5);
  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
   VAR_10[VAR_14] = VAR_6[VAR_16];
   VAR_11[VAR_14] = VAR_7[VAR_16];
   VAR_9[VAR_14] = VAR_18;
   VAR_18 += VAR_17;
   VAR_14++;
  }
  VAR_9[VAR_14 - 1] = VAR_19;
 }



 if ((VAR_12 == VAR_1) &&
    (VAR_9[*VAR_8 - 1] > (0.5 - VAR_17)) &&
    (VAR_3 % 2))
 {
  VAR_9[*VAR_8 - 1] = 0.5 - VAR_17;
 }
}
