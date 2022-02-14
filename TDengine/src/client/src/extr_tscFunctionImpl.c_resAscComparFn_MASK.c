
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ timestamp; } ;
typedef TYPE_1__ tValuePair ;
typedef int int32_t ;



__attribute__((used)) static int32_t FUNC_0(const void *VAR_0, const void *VAR_1) {
  tValuePair *VAR_2 = *(tValuePair **)VAR_0;
  tValuePair *VAR_3 = *(tValuePair **)VAR_1;

  if (VAR_2->timestamp == VAR_3->timestamp) {
    return 0;
  } else {
    return VAR_2->timestamp > VAR_3->timestamp ? 1 : -1;
  }
}
