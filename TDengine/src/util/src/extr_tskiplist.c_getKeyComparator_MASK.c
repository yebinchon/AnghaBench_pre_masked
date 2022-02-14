
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int * __compar_fn_t ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static __compar_fn_t FUNC_0(int32_t VAR_4) {
  __compar_fn_t VAR_5 = ((void*)0);

  switch (VAR_4) {
    case 128:
    case 129:
    case 131:
    case 136:
    case 134:
      VAR_5 = VAR_1;
      break;

    case 132:
    case 133:
      VAR_5 = VAR_0;
      break;

    case 135:
      VAR_5 = VAR_2;
      break;

    case 130:
      VAR_5 = VAR_3;
      break;

    default:
      VAR_5 = VAR_1;
      break;
  }

  return VAR_5;
}
