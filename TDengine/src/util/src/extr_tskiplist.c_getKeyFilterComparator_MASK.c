
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keyType; } ;
typedef TYPE_1__ tSkipList ;
typedef int const int32_t ;
typedef int * __compar_fn_t ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static __compar_fn_t FUNC_0(tSkipList *VAR_6, int32_t VAR_7) {
  __compar_fn_t VAR_8 = ((void*)0);

  switch (VAR_6->keyType) {
    case 128:
    case 129:
    case 131:
    case 136:
    case 134: {
      if (VAR_7 >= 134 && VAR_7 <= 136) {
        VAR_8 = VAR_3;
      } else if (VAR_7 >= 132 && VAR_7 <= 133) {
        VAR_8 = VAR_2;
      }
      break;
    }
    case 132:
    case 133: {
      if (VAR_7 >= 134 && VAR_7 <= 136) {
        VAR_8 = VAR_0;
      } else if (VAR_7 >= 132 && VAR_7 <= 133) {
        VAR_8 = VAR_1;
      }
      break;
    }
    case 135:
      VAR_8 = VAR_4;
      break;
    case 130:
      VAR_8 = VAR_5;
      break;
    default:
      VAR_8 = VAR_3;
      break;
  }

  return VAR_8;
}
