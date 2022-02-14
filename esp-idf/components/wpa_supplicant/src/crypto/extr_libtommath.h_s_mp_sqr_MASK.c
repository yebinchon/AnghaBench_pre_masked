
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_9__ {int used; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef scalar_t__ mp_digit ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4 (mp_int * VAR_3, mp_int * VAR_4)
{
  mp_int VAR_5;
  int VAR_6, VAR_7, VAR_8, VAR_9;
  mp_word VAR_10;
  mp_digit VAR_11, VAR_12, *VAR_13;

  VAR_9 = VAR_3->used;
  if ((VAR_6 = FUNC_3 (&VAR_5, 2*VAR_9 + 1)) != VAR_2) {
    return VAR_6;
  }


  VAR_5.used = 2*VAR_9 + 1;

  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {


    VAR_10 = ((mp_word) VAR_5.dp[2*VAR_7]) +
        ((mp_word)VAR_3->dp[VAR_7])*((mp_word)VAR_3->dp[VAR_7]);


    VAR_5.dp[VAR_7+VAR_7] = (mp_digit) (VAR_10 & ((mp_word) VAR_1));


    VAR_11 = (mp_digit)(VAR_10 >> ((mp_word) VAR_0));


    VAR_12 = VAR_3->dp[VAR_7];


    VAR_13 = VAR_5.dp + (2*VAR_7 + 1);

    for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_9; VAR_8++) {

      VAR_10 = ((mp_word)VAR_12) * ((mp_word)VAR_3->dp[VAR_8]);




      VAR_10 = ((mp_word) *VAR_13) + VAR_10 + VAR_10 + ((mp_word) VAR_11);


      *VAR_13++ = (mp_digit) (VAR_10 & ((mp_word) VAR_1));


      VAR_11 = (mp_digit)(VAR_10 >> ((mp_word) VAR_0));
    }

    while (VAR_11 != ((mp_digit) 0)) {
      VAR_10 = ((mp_word) *VAR_13) + ((mp_word) VAR_11);
      *VAR_13++ = (mp_digit) (VAR_10 & ((mp_word) VAR_1));
      VAR_11 = (mp_digit)(VAR_10 >> ((mp_word) VAR_0));
    }
  }

  FUNC_0 (&VAR_5);
  FUNC_2 (&VAR_5, VAR_4);
  FUNC_1 (&VAR_5);
  return VAR_2;
}
