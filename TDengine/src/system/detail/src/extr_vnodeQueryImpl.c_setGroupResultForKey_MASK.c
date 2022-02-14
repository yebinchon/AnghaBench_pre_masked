
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_5__ {int usedIndex; int hashList; int * pResult; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef int SOutputRes ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;




 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (int ,int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int32_t FUNC_9(SQueryRuntimeEnv *VAR_1, char *VAR_2, int16_t VAR_3, char *VAR_4) {
  SOutputRes *VAR_5 = ((void*)0);


  if (FUNC_5(VAR_2, VAR_3)) {
    return -1;
  }

  int64_t VAR_6 = 0;
  switch (VAR_3) {
    case 128:
      VAR_6 = FUNC_3(VAR_2);
      break;
    case 131:
      VAR_6 = FUNC_2(VAR_2);
      break;
    case 129:
      VAR_6 = FUNC_0(VAR_2);
      break;
    case 130:
    default:
      VAR_6 = FUNC_1(VAR_2);
      break;
  }

  SOutputRes **VAR_7 = (SOutputRes **)FUNC_8(VAR_1->hashList, VAR_6);
  if (VAR_7 != ((void*)0)) {
    VAR_5 = *VAR_7;
  } else {

    if (VAR_1->usedIndex >= 10000) {
      return -1;
    }


    char *VAR_8 = (char *)&VAR_1->pResult[VAR_1->usedIndex++];
    VAR_5 = *(SOutputRes **)FUNC_7(VAR_1->hashList, VAR_6, (char *)&VAR_8);
  }

  FUNC_6(VAR_1, VAR_5);
  FUNC_4(VAR_1);

  return VAR_0;
}
