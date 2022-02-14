
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {int z; } ;
typedef TYPE_1__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char**,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_2(SSQLToken *VAR_4, int64_t *VAR_5, char **VAR_6) {
  int32_t VAR_7 = FUNC_0(VAR_4);
  if (VAR_2 == VAR_7) {
    return VAR_7;
  }

  int32_t VAR_8 = 10;
  if (VAR_7 == VAR_1) {
    VAR_8 = 16;
  } else if (VAR_7 == VAR_3) {
    VAR_8 = 8;
  } else if (VAR_7 == VAR_0) {
    VAR_8 = 2;
  }

  *VAR_5 = FUNC_1(VAR_4->z, VAR_6, VAR_8);

  return VAR_7;
}
