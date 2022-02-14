
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {char* z; scalar_t__ n; scalar_t__ type; } ;
typedef TYPE_1__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char*,scalar_t__*) ;

int32_t FUNC_6(char* VAR_4) {
  bool VAR_5 = FUNC_0(VAR_4, FUNC_3(VAR_4));
  if (VAR_5) {
    return VAR_2;
  }

  SSQLToken VAR_6 = {.z = VAR_4};
  VAR_6.n = FUNC_5(VAR_4, &VAR_6.type);

  if (VAR_6.type != VAR_1 && VAR_6.type != VAR_0) {
    return VAR_2;
  }

  if (VAR_6.type == VAR_1) {
    FUNC_2(VAR_6.z);
    FUNC_4(VAR_6.z);
    VAR_6.n = (uint32_t)FUNC_3(VAR_6.z);

    int32_t VAR_7 = FUNC_5(VAR_6.z, &VAR_6.type);
    if (VAR_7 != VAR_6.n) {
      return VAR_2;
    }

    return FUNC_6(VAR_6.z);
  } else {
    if (FUNC_1(&VAR_6)) {
      return VAR_2;
    }
  }

  return VAR_3;
}
