
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int int64_t ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* param; } ;
struct TYPE_4__ {char* pz; int nType; size_t nLen; } ;
typedef int TSKEY ;
typedef TYPE_2__ SQLFunctionCtx ;


 double FUNC_0 (char*) ;
 double FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int,size_t) ;
 char* FUNC_5 (size_t) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,size_t) ;
 size_t FUNC_8 (int const*) ;
 int FUNC_9 (int *,int const*,size_t) ;

__attribute__((used)) static void FUNC_10(SQLFunctionCtx *VAR_2, TSKEY VAR_3, int16_t VAR_4, int32_t VAR_5, char *VAR_6) {
  FUNC_3(VAR_2->param[VAR_5].pz == ((void*)0));

  int32_t VAR_7 = 0;
  size_t VAR_8 = 0;

  if (VAR_4 == 136) {
    VAR_8 = FUNC_6(VAR_6);

    VAR_7 = VAR_8 + 1 + VAR_0;
    VAR_2->param[VAR_5].pz = FUNC_4(1, VAR_7);
  } else if (VAR_4 == 131) {
    VAR_8 = FUNC_8((const wchar_t *)VAR_6);

    VAR_7 = (VAR_8 + 1) * VAR_1 + VAR_0;
    VAR_2->param[VAR_5].pz = FUNC_4(1, VAR_7);
  } else {
    VAR_7 = VAR_0 * 2;
    VAR_2->param[VAR_5].pz = FUNC_5(VAR_7);
  }

  VAR_2->param[VAR_5].nType = 136;

  char *VAR_9 = VAR_2->param[VAR_5].pz;
  *(TSKEY *)VAR_9 = VAR_3;
  VAR_9 += VAR_0;

  switch (VAR_4) {
    case 133:
      *(double *)VAR_9 = FUNC_1(VAR_6);
      break;
    case 134:
      *(double *)VAR_9 = FUNC_0(VAR_6);
      break;
    case 132:
    case 135:
    case 137:
    case 128:
    case 130:
    case 129:
      *(int64_t *)VAR_9 = FUNC_2(VAR_6);
      break;
    case 136:
      FUNC_7(VAR_9, VAR_6, VAR_8);
      break;
    case 131: {
      FUNC_9((wchar_t *)VAR_9, (const wchar_t *)VAR_6, VAR_8);
    } break;
    default:
      FUNC_3(0);
  }

  VAR_2->param[VAR_5].nLen = VAR_7;
}
