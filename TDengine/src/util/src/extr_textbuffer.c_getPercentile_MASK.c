
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numOfElems; } ;
typedef TYPE_1__ tMemBucket ;
typedef scalar_t__ int32_t ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 int FUNC_1 (TYPE_1__*,double*,double*) ;
 double FUNC_2 (TYPE_1__*) ;
 double FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;

double FUNC_4(tMemBucket *VAR_1, double VAR_2) {
  if (VAR_1->numOfElems == 0) {
    return 0.0;
  }

  if (VAR_1->numOfElems == 1) {
    return FUNC_2(VAR_1);
  }

  VAR_2 = FUNC_0(VAR_2);


  if (FUNC_0(VAR_2 - 100.0) < VAR_0 || (VAR_2 < VAR_0)) {
    double VAR_3 = 0, VAR_4 = 0;



    FUNC_1(VAR_1, &VAR_4, &VAR_3);

    return FUNC_0(VAR_2 - 100) < VAR_0 ? VAR_4 : VAR_3;
  }

  double VAR_5 = (VAR_2 * (VAR_1->numOfElems - 1)) / ((double)100.0);
  int32_t VAR_6 = (int32_t)VAR_5;


  return FUNC_3(VAR_1, VAR_6, VAR_5 - VAR_6);
}
