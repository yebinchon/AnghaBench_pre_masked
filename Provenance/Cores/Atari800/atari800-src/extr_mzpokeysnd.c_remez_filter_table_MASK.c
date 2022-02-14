
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int passtab ;
typedef int orders ;
struct TYPE_2__ {double member_0; double member_1; double member_2; double member_3; } ;


 int VAR_0 ;
 int FUNC_0 (double*,int,int,double*,double*,double*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 double* VAR_2 ;
 int FUNC_3 (char*,int const,...) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(double VAR_4,
                              double *VAR_5, int VAR_6)
{
  int VAR_7;
  static const int VAR_8[] = {600, 800, 1000, 1200};
  static const struct {
    int stop;
    double weight;
    double twidth[sizeof(VAR_8)/sizeof(VAR_8[0])];
  } VAR_9[] =
  {
    {70, 90, {4.9e-3, 3.45e-3, 2.65e-3, 2.2e-3}},
    {55, 25, {3.4e-3, 2.7e-3, 2.05e-3, 1.7e-3}},
    {40, 6.0, {2.6e-3, 1.8e-3, 1.5e-3, 1.2e-3}},
    {-1, 0, {0, 0, 0, 0}}
  };
  static const double VAR_10[] = {0.5, 0.6, 0.7};
  int VAR_11 = 0, VAR_12 = 0;
  int VAR_13;
  double VAR_14[2], VAR_15[2], VAR_16[4];
  static const int VAR_17 = 5;
  double VAR_18 = 1.0 / VAR_17;

  *VAR_5 = 0.95 * 0.5 * VAR_4;

  if (VAR_6 >= (int) (sizeof(VAR_10) / sizeof(VAR_10[0])))
    VAR_6 = (int) (sizeof(VAR_10) / sizeof(VAR_10[0])) - 1;

  for (VAR_11 = 0; VAR_9[VAR_11].stop > 0; VAR_11++)
  {
    for (VAR_12 = 0; VAR_12 < (int) (sizeof(VAR_8)/sizeof(VAR_8[0])); VAR_12++)
    {
      if ((*VAR_5 - VAR_9[VAR_11].twidth[VAR_12])
   > VAR_10[VAR_6] * 0.5 * VAR_4)

 goto found;
    }
  }


  VAR_11--;
  VAR_12--;

found:
  VAR_13 = VAR_8[VAR_12] + 1;

  if (VAR_13 > VAR_1)
    return 0;

  VAR_15[0] = 1;
  VAR_15[1] = 0;

  VAR_14[0] = 1;
  VAR_14[1] = VAR_9[VAR_11].weight;

  VAR_16[0] = 0;
  VAR_16[2] = *VAR_5;
  VAR_16[1] = VAR_16[2] - VAR_9[VAR_11].twidth[VAR_12];
  VAR_16[3] = 0.5;

  VAR_16[1] *= (double)VAR_17;
  VAR_16[2] *= (double)VAR_17;
  FUNC_0(VAR_2, (VAR_13 / VAR_17) + 1, 2, VAR_16, VAR_15, VAR_14, VAR_0);
  for (VAR_7 = VAR_13 - VAR_17; VAR_7 >= 0; VAR_7 -= VAR_17)
  {
    int VAR_19;
    double VAR_20 = VAR_2[VAR_7/VAR_17];
    double VAR_21 = VAR_2[VAR_7/VAR_17+1];

    for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++)
    {
      double VAR_22 = (double)VAR_19 * VAR_18;
      VAR_2[VAR_7+VAR_19] = (VAR_20*(1.0 - VAR_22) + VAR_21 * VAR_22) * VAR_18;
    }
  }


  for (VAR_7 = VAR_13 - 2; VAR_7 >= 0; VAR_7--)
    VAR_2[VAR_7] += VAR_2[VAR_7 + 1];
  return VAR_13;
}
