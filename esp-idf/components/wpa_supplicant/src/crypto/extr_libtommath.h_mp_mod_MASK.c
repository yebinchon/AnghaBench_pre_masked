
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ sign; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5 (mp_int * VAR_1, mp_int * VAR_2, mp_int * VAR_3)
{
  mp_int VAR_4;
  int VAR_5;

  if ((VAR_5 = FUNC_4 (&VAR_4)) != VAR_0) {
    return VAR_5;
  }

  if ((VAR_5 = FUNC_2 (VAR_1, VAR_2, ((void*)0), &VAR_4)) != VAR_0) {
    FUNC_1 (&VAR_4);
    return VAR_5;
  }

  if (VAR_4.sign != VAR_2->sign) {
    VAR_5 = FUNC_0 (VAR_2, &VAR_4, VAR_3);
  } else {
    VAR_5 = VAR_0;
    FUNC_3 (&VAR_4, VAR_3);
  }

  FUNC_1 (&VAR_4);
  return VAR_5;
}
