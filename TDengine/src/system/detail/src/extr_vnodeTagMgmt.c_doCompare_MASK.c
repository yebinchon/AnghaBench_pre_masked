
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (int *,int *,int) ;

int32_t FUNC_9(char* VAR_1, char* VAR_2, int32_t VAR_3, int32_t VAR_4) {
  switch (VAR_3) {
    case 131: FUNC_0(FUNC_4(VAR_1), FUNC_4(VAR_2));
    case 133: FUNC_0(FUNC_1(VAR_1), FUNC_1(VAR_2));
    case 132: FUNC_0(FUNC_2(VAR_1), FUNC_2(VAR_2));
    case 135: FUNC_0(FUNC_5(VAR_1), FUNC_5(VAR_2));
    case 129: FUNC_0(FUNC_3(VAR_1), FUNC_3(VAR_2));
    case 128:
    case 134: FUNC_0(FUNC_6(VAR_1), FUNC_6(VAR_2));
    case 130: {
      int32_t VAR_5 = FUNC_8((wchar_t*) VAR_1, (wchar_t*) VAR_2, VAR_4/VAR_0);
      if (VAR_5 == 0) {
          return VAR_5;
      }
      return (VAR_5 < 0) ? -1 : 1;
    }
    default: {
      int32_t VAR_6 = FUNC_7(VAR_1, VAR_2, (size_t)VAR_4);
      if (VAR_6 == 0) {
        return VAR_6;
      }

      return (VAR_6 < 0) ? -1 : 1;
    }
  }
}
