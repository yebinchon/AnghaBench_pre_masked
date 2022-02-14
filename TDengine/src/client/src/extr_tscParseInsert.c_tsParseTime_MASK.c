
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_4__ {scalar_t__ type; char* z; int n; } ;
typedef TYPE_1__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char*,int,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 TYPE_1__ FUNC_4 (char*,scalar_t__*,int,int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,int*,int,scalar_t__) ;

int FUNC_7(SSQLToken *VAR_7, int64_t *VAR_8, char **VAR_9, char *VAR_10, int16_t VAR_11) {
  char * VAR_12;
  int VAR_13;
  int32_t VAR_14 = 0;
  SSQLToken VAR_15;
  int64_t VAR_16;
  int64_t VAR_17 = 0;
  char * VAR_18 = *VAR_9;

  VAR_14 = 0;

  if (VAR_7->type == VAR_2) {
    VAR_17 = FUNC_5(VAR_11);
  } else if (FUNC_3(VAR_7->z, "0", 1) == 0 && VAR_7->n == 1) {

  } else if (VAR_7->type == VAR_0) {
    VAR_17 = FUNC_1(VAR_7->z);
  } else {

    if (FUNC_6(VAR_7->z, VAR_8, VAR_7->n, VAR_11) != VAR_5) {
      return VAR_4;
    }

    return VAR_5;
  }

  for (int VAR_19 = VAR_7->n; VAR_7->z[VAR_19] != '\0'; VAR_19++) {
    if (VAR_7->z[VAR_19] == ' ' || VAR_7->z[VAR_19] == '\t') continue;
    if (VAR_7->z[VAR_19] == ',') {
      *VAR_9 = VAR_18;
      *VAR_8 = VAR_17;
      return 0;
    }

    break;
  }





  SSQLToken VAR_20;
  VAR_14 = 0;
  VAR_15 = FUNC_4(VAR_18, &VAR_14, 0, 0, ((void*)0));
  VAR_18 += VAR_14;
  if (VAR_15.type == VAR_1 || VAR_15.type == VAR_3) {
    VAR_14 = 0;
    VAR_20 = FUNC_4(VAR_18, &VAR_14, 0, 0, ((void*)0));
    VAR_18 += VAR_14;
    if (VAR_20.n < 2) {
      FUNC_2(VAR_10, "value is expected");
      return VAR_4;
    }

    if (FUNC_0(VAR_20.z, VAR_20.n, &VAR_16) != VAR_5) {
      return VAR_4;
    }
    if (VAR_11 == VAR_6) {
      VAR_16 /= 1000;
    }

    if (VAR_15.type == VAR_3) {
      VAR_17 += VAR_16;
    } else {
      VAR_17 = (VAR_17 >= VAR_16) ? VAR_17 - VAR_16 : 0;
    }

    *VAR_9 = VAR_18;
  }

  *VAR_8 = VAR_17;
  return VAR_5;
}
