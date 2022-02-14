
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_3__ {size_t n; size_t type; char* z; int member_0; } ;
typedef TYPE_1__ SSQLToken ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (char*,size_t*) ;

SSQLToken FUNC_1(char* VAR_8, int32_t* VAR_9, bool VAR_10, uint32_t VAR_11, uint32_t* VAR_12) {
  SSQLToken VAR_13 = {0};


  if (VAR_8[*VAR_9] == 0) {
    VAR_13 = 0;
    return VAR_13;
  }


  while (1) {
    *VAR_9 += VAR_13;

    bool VAR_14 = 0;
    while ((VAR_8[*VAR_9] == ' ' || VAR_8[*VAR_9] == '\n' || VAR_8[*VAR_9] == '\r' || VAR_8[*VAR_9] == '\t' || VAR_8[*VAR_9] == '\f')
        || VAR_8[*VAR_9] == ',') {
      if (VAR_8[*VAR_9] == ',') {
        if (0 == VAR_14) {
          VAR_14 = 1;
        } else {
          VAR_13 = 0;
          return VAR_13;
        }
      }
      (*VAR_9)++;
    }

    VAR_13 = FUNC_0(&VAR_8[*VAR_9], &VAR_13);

    bool VAR_15 = 0;
    for (uint32_t VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
      if (VAR_13 == VAR_12[VAR_16]) {
        VAR_15 = 1;
        break;
      }
    }

    if (!VAR_15) {
      break;
    }
  }

  if (VAR_13 == VAR_6) {
    VAR_13 = 0;
    return VAR_13;
  }

  uint32_t VAR_17 = 0;
  int32_t VAR_18;


  if ('.' == VAR_8[*VAR_9 + VAR_13]) {
    VAR_18 = FUNC_0(&VAR_8[*VAR_9 + VAR_13 + 1], &VAR_17);


    if ((VAR_7 != VAR_13) && (VAR_1 != VAR_13)) {
      VAR_13 = VAR_2;
      VAR_13 = 0;

      return VAR_13;
    }

    VAR_13 += VAR_18 + 1;

  } else {

    if ((VAR_10) && (VAR_13 == VAR_4 || VAR_13 == VAR_5)) {
      VAR_18 = FUNC_0(&VAR_8[*VAR_9 + VAR_13], &VAR_17);
      if (VAR_17 == VAR_3 || VAR_17 == VAR_0) {
        VAR_13 = VAR_17;
        VAR_13 += VAR_18;
      }
    }
  }

  VAR_13 = VAR_8 + (*VAR_9);
  *VAR_9 += VAR_13;

  return VAR_13;
}
