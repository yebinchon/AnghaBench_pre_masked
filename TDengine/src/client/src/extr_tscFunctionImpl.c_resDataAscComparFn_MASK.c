
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nType; scalar_t__ dKey; scalar_t__ i64Key; } ;
struct TYPE_4__ {TYPE_1__ v; } ;
typedef TYPE_2__ tValuePair ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int32_t FUNC_0(const void *VAR_2, const void *VAR_3) {
  tValuePair *VAR_4 = *(tValuePair **)VAR_2;
  tValuePair *VAR_5 = *(tValuePair **)VAR_3;

  int32_t VAR_6 = VAR_4->v.nType;
  if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
    if (VAR_4->v.dKey == VAR_5->v.dKey) {
      return 0;
    } else {
      return VAR_4->v.dKey > VAR_5->v.dKey ? 1 : -1;
    }
  } else {
    if (VAR_4->v.i64Key == VAR_5->v.i64Key) {
      return 0;
    } else {
      return VAR_4->v.i64Key > VAR_5->v.i64Key ? 1 : -1;
    }
  }
}
