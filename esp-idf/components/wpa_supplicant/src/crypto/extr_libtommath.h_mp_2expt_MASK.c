
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int used; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2 (mp_int * VAR_2, int VAR_3)
{
  int VAR_4;


  FUNC_1 (VAR_2);


  if ((VAR_4 = FUNC_0 (VAR_2, VAR_3 / VAR_0 + 1)) != VAR_1) {
    return VAR_4;
  }


  VAR_2->used = VAR_3 / VAR_0 + 1;


  VAR_2->dp[VAR_3 / VAR_0] = ((mp_digit)1) << (VAR_3 % VAR_0);

  return VAR_1;
}
