
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int32_t FUNC_2(char *VAR_0, int32_t VAR_1, int32_t VAR_2) {
  char VAR_3[512] = {0};

  int32_t VAR_4 = 0;
  int32_t VAR_5 = 5;
  switch (VAR_2) {
    case 133:
      return VAR_1;
    case 129:
      return VAR_1;
    case 131: {





      VAR_4 = FUNC_0(VAR_3, "%lf", *(double *)VAR_0);

      if (FUNC_1("nan", VAR_3, 3) == 0) {
        VAR_4 = 4;
      }
    }
      break;
    case 130: {





      VAR_4 = FUNC_0(VAR_3, "%f", *(float *)VAR_0);

      if (FUNC_1("nan", VAR_3, 3) == 0) {
        VAR_4 = 4;
      }
    }
      break;
    case 128:
    case 134:
      VAR_4 = FUNC_0(VAR_3, "%lld", *(int64_t *)VAR_0);
      break;
    case 132:
      VAR_4 = VAR_5;
      break;
    default:
      VAR_4 = FUNC_0(VAR_3, "%d", *(int32_t *)VAR_0);
      break;
  };
  return VAR_4;
}
