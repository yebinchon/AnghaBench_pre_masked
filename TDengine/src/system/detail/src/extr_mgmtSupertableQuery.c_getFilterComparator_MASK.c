
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int * __compar_fn_t ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static __compar_fn_t FUNC_1(int32_t VAR_9, int32_t VAR_10, int32_t VAR_11) {
  __compar_fn_t VAR_12 = ((void*)0);

  switch (VAR_9) {
    case 128:
    case 129:
    case 131:
    case 136:
    case 134: {
      if (VAR_10 >= 134 && VAR_10 <= 136) {
        VAR_12 = VAR_4;
      } else if (VAR_10 >= 132 && VAR_10 <= 133) {
        VAR_12 = VAR_3;
      }
      break;
    }

    case 132:
    case 133: {
      if (VAR_10 >= 134 && VAR_10 <= 136) {
        VAR_12 = VAR_1;
      } else if (VAR_10 >= 132 && VAR_10 <= 133) {
        VAR_12 = VAR_2;
      }
      break;
    }

    case 135: {
      FUNC_0(VAR_10 == 135);

      if (VAR_11 == VAR_0) {
        VAR_12 = VAR_5;
      } else {
        VAR_12 = VAR_6;
      }

      break;
    }

    case 130: {
      FUNC_0(VAR_10 == 130);

      if (VAR_11 == VAR_0) {
        VAR_12 = VAR_7;
      } else {
        VAR_12 = VAR_8;
      }

      break;
    }
    default:
      VAR_12 = VAR_4;
      break;
  }

  return VAR_12;
}
