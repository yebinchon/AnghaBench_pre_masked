
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_1__ ;


struct TYPE_35__ {int used; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_13 (mp_int * VAR_3, mp_int * VAR_4, mp_int * VAR_5, mp_int * VAR_6, int VAR_7)
{
  mp_int VAR_8[VAR_2], VAR_9, VAR_10;
  mp_digit VAR_11;
  int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  int (*VAR_21)(mp_int*,mp_int*,mp_int*);


  VAR_18 = FUNC_2 (VAR_4);
  if (VAR_18 <= 7) {
    VAR_20 = 2;
  } else if (VAR_18 <= 36) {
    VAR_20 = 3;
  } else if (VAR_18 <= 140) {
    VAR_20 = 4;
  } else if (VAR_18 <= 450) {
    VAR_20 = 5;
  } else if (VAR_18 <= 1303) {
    VAR_20 = 6;
  } else if (VAR_18 <= 3529) {
    VAR_20 = 7;
  } else {
    VAR_20 = 8;
  }
  if ((VAR_12 = FUNC_4(&VAR_8[1])) != VAR_1) {
     return VAR_12;
  }


  for (VAR_18 = 1<<(VAR_20-1); VAR_18 < (1 << VAR_20); VAR_18++) {
    if ((VAR_12 = FUNC_4(&VAR_8[VAR_18])) != VAR_1) {
      for (VAR_19 = 1<<(VAR_20-1); VAR_19 < VAR_18; VAR_19++) {
        FUNC_0 (&VAR_8[VAR_19]);
      }
      FUNC_0(&VAR_8[1]);
      return VAR_12;
    }
  }


  if ((VAR_12 = FUNC_4 (&VAR_10)) != VAR_1) {
    goto LBL_M;
  }

  if (VAR_7 == 0) {
     if ((VAR_12 = FUNC_10 (&VAR_10, VAR_5)) != VAR_1) {
        goto LBL_MU;
     }
     VAR_21 = FUNC_7;
  } else {
     if ((VAR_12 = FUNC_9 (VAR_5, &VAR_10)) != VAR_1) {
        goto LBL_MU;
     }
     VAR_21 = FUNC_8;
  }
  if ((VAR_12 = FUNC_5 (VAR_3, VAR_5, &VAR_8[1])) != VAR_1) {
    goto LBL_MU;
  }




  if ((VAR_12 = FUNC_1 (&VAR_8[1], &VAR_8[1 << (VAR_20 - 1)])) != VAR_1) {
    goto LBL_MU;
  }

  for (VAR_18 = 0; VAR_18 < (VAR_20 - 1); VAR_18++) {

    if ((VAR_12 = FUNC_12 (&VAR_8[1 << (VAR_20 - 1)],
                       &VAR_8[1 << (VAR_20 - 1)])) != VAR_1) {
      goto LBL_MU;
    }


    if ((VAR_12 = VAR_21 (&VAR_8[1 << (VAR_20 - 1)], VAR_5, &VAR_10)) != VAR_1) {
      goto LBL_MU;
    }
  }




  for (VAR_18 = (1 << (VAR_20 - 1)) + 1; VAR_18 < (1 << VAR_20); VAR_18++) {
    if ((VAR_12 = FUNC_6 (&VAR_8[VAR_18 - 1], &VAR_8[1], &VAR_8[VAR_18])) != VAR_1) {
      goto LBL_MU;
    }
    if ((VAR_12 = VAR_21 (&VAR_8[VAR_18], VAR_5, &VAR_10)) != VAR_1) {
      goto LBL_MU;
    }
  }


  if ((VAR_12 = FUNC_4 (&VAR_9)) != VAR_1) {
    goto LBL_MU;
  }
  FUNC_11 (&VAR_9, 1);


  VAR_16 = 0;
  VAR_15 = 1;
  VAR_11 = 0;
  VAR_17 = VAR_4->used - 1;
  VAR_14 = 0;
  VAR_13 = 0;

  for (;;) {

    if (--VAR_15 == 0) {

      if (VAR_17 == -1) {
        break;
      }

      VAR_11 = VAR_4->dp[VAR_17--];
      VAR_15 = (int) VAR_0;
    }


    VAR_19 = (VAR_11 >> (mp_digit)(VAR_0 - 1)) & 1;
    VAR_11 <<= (mp_digit)1;






    if (VAR_16 == 0 && VAR_19 == 0) {
      continue;
    }


    if (VAR_16 == 1 && VAR_19 == 0) {
      if ((VAR_12 = FUNC_12 (&VAR_9, &VAR_9)) != VAR_1) {
        goto LBL_RES;
      }
      if ((VAR_12 = VAR_21 (&VAR_9, VAR_5, &VAR_10)) != VAR_1) {
        goto LBL_RES;
      }
      continue;
    }


    VAR_13 |= (VAR_19 << (VAR_20 - ++VAR_14));
    VAR_16 = 2;

    if (VAR_14 == VAR_20) {


      for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
        if ((VAR_12 = FUNC_12 (&VAR_9, &VAR_9)) != VAR_1) {
          goto LBL_RES;
        }
        if ((VAR_12 = VAR_21 (&VAR_9, VAR_5, &VAR_10)) != VAR_1) {
          goto LBL_RES;
        }
      }


      if ((VAR_12 = FUNC_6 (&VAR_9, &VAR_8[VAR_13], &VAR_9)) != VAR_1) {
        goto LBL_RES;
      }
      if ((VAR_12 = VAR_21 (&VAR_9, VAR_5, &VAR_10)) != VAR_1) {
        goto LBL_RES;
      }


      VAR_14 = 0;
      VAR_13 = 0;
      VAR_16 = 1;
    }
  }


  if (VAR_16 == 2 && VAR_14 > 0) {

    for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
      if ((VAR_12 = FUNC_12 (&VAR_9, &VAR_9)) != VAR_1) {
        goto LBL_RES;
      }
      if ((VAR_12 = VAR_21 (&VAR_9, VAR_5, &VAR_10)) != VAR_1) {
        goto LBL_RES;
      }

      VAR_13 <<= 1;
      if ((VAR_13 & (1 << VAR_20)) != 0) {

        if ((VAR_12 = FUNC_6 (&VAR_9, &VAR_8[1], &VAR_9)) != VAR_1) {
          goto LBL_RES;
        }
        if ((VAR_12 = VAR_21 (&VAR_9, VAR_5, &VAR_10)) != VAR_1) {
          goto LBL_RES;
        }
      }
    }
  }

  FUNC_3 (&VAR_9, VAR_6);
  VAR_12 = VAR_1;
LBL_RES:FUNC_0 (&VAR_9);
LBL_MU:FUNC_0 (&VAR_10);
LBL_M:
  FUNC_0(&VAR_8[1]);
  for (VAR_18 = 1<<(VAR_20-1); VAR_18 < (1 << VAR_20); VAR_18++) {
    FUNC_0 (&VAR_8[VAR_18]);
  }
  return VAR_12;
}
