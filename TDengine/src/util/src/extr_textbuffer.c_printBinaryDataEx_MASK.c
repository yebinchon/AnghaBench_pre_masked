
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef double int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {scalar_t__ functionId; int type; } ;
typedef TYPE_1__ SSrcColumnInfo ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_3, int32_t VAR_4, SSrcColumnInfo *VAR_5) {
  if (VAR_5->functionId == VAR_1) {
    switch (VAR_5->type) {
      case 128:FUNC_0("%lld,%d\t", *(int64_t *) VAR_3, *(int8_t *) (VAR_3 + VAR_2 + 1));
        break;
      case 130:FUNC_0("%lld,%d\t", *(int64_t *) VAR_3, *(int16_t *) (VAR_3 + VAR_2 + 1));
        break;
      case 129:
      case 135:FUNC_0("%lld,%lld\t", *(int64_t *) VAR_3, *(int64_t *) (VAR_3 + VAR_2 + 1));
        break;
      case 132:FUNC_0("%lld,%d\t", *(int64_t *) VAR_3, *(float *) (VAR_3 + VAR_2 + 1));
        break;
      case 133:FUNC_0("%lld,%d\t", *(int64_t *) VAR_3, *(double *) (VAR_3 + VAR_2 + 1));
        break;
      case 134:FUNC_0("%lld,%s\t", *(int64_t *) VAR_3, (VAR_3 + VAR_2 + 1));
        break;

      case 131:
      default:FUNC_0("%lld,%d\t", *(int64_t *) VAR_3, *(int32_t *) (VAR_3 + VAR_2 + 1));
        break;
    }
  } else if (VAR_5->functionId == VAR_0) {
      FUNC_0("%f,%lld\t", *(double *) VAR_3, *(int64_t *) (VAR_3 + sizeof(double) + 1));
  } else {

    switch (VAR_5->type) {
      case 128:
        FUNC_0("%d\t", *(int8_t *)VAR_3);
        break;
      case 130:
        FUNC_0("%d\t", *(int16_t *)VAR_3);
        break;
      case 129:
      case 135:
        FUNC_0("%lld\t", *(int64_t *)VAR_3);
        break;
      case 132:
        FUNC_0("%d\t", *(float *)VAR_3);
        break;
      case 133:
        FUNC_0("%d\t", *(double *)VAR_3);
        break;
      case 134:
        FUNC_0("%s\t", VAR_3);
        break;

      case 131:
      default:
        FUNC_0("%d\t", *(double *)VAR_3);
        break;
    }
  }
}
