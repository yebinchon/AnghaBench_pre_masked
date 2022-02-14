
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_1__ ;


struct TYPE_38__ {int sign; } ;
typedef TYPE_1__ mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_15(mp_int * VAR_7, mp_int * VAR_8, mp_int * VAR_9, mp_int * VAR_10)
{
   mp_int VAR_11, VAR_12, VAR_13, VAR_14;
   int VAR_15, VAR_16, VAR_17;


  if (FUNC_10 (VAR_8) == 1) {
    return VAR_4;
  }


  if (FUNC_4 (VAR_7, VAR_8) == VAR_1) {
    if (VAR_10 != ((void*)0)) {
      VAR_15 = FUNC_5 (VAR_7, VAR_10);
    } else {
      VAR_15 = VAR_3;
    }
    if (VAR_9 != ((void*)0)) {
      FUNC_14 (VAR_9);
    }
    return VAR_15;
  }


  if ((VAR_15 = FUNC_9(&VAR_11, &VAR_12, &VAR_13, &VAR_14, ((void*)0)) != VAR_3)) {
     return VAR_15;
  }


  FUNC_12(&VAR_13, 1);
  VAR_16 = FUNC_6(VAR_7) - FUNC_6(VAR_8);
  if (((VAR_15 = FUNC_0(VAR_7, &VAR_11)) != VAR_3) ||
      ((VAR_15 = FUNC_0(VAR_8, &VAR_12)) != VAR_3) ||
      ((VAR_15 = FUNC_11(&VAR_12, VAR_16, &VAR_12)) != VAR_3) ||
      ((VAR_15 = FUNC_11(&VAR_13, VAR_16, &VAR_13)) != VAR_3)) {
      goto LBL_ERR;
  }

  while (VAR_16-- >= 0) {
     if (FUNC_3(&VAR_12, &VAR_11) != VAR_0) {
        if (((VAR_15 = FUNC_13(&VAR_11, &VAR_12, &VAR_11)) != VAR_3) ||
            ((VAR_15 = FUNC_1(&VAR_14, &VAR_13, &VAR_14)) != VAR_3)) {
           goto LBL_ERR;
        }
     }
     if (((VAR_15 = FUNC_7(&VAR_12, 1, &VAR_12, ((void*)0))) != VAR_3) ||
         ((VAR_15 = FUNC_7(&VAR_13, 1, &VAR_13, ((void*)0))) != VAR_3)) {
           goto LBL_ERR;
     }
  }


  VAR_16 = VAR_7->sign;
  VAR_17 = (VAR_7->sign == VAR_8->sign ? VAR_6 : VAR_2);
  if (VAR_9 != ((void*)0)) {
     FUNC_8(VAR_9, &VAR_14);
     VAR_9->sign = (FUNC_10(VAR_9) == VAR_5) ? VAR_6 : VAR_17;
  }
  if (VAR_10 != ((void*)0)) {
     FUNC_8(VAR_10, &VAR_11);
     VAR_10->sign = (FUNC_10(VAR_10) == VAR_5) ? VAR_6 : VAR_16;
  }
LBL_ERR:
   FUNC_2(&VAR_11, &VAR_12, &VAR_13, &VAR_14, ((void*)0));
   return VAR_15;
}
