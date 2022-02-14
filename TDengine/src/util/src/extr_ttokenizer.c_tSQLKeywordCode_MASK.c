
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {scalar_t__ name; int len; } ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ SKeyword ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*,void*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int VAR_5 ;
 int FUNC_6 (int,int ,int ) ;

int FUNC_7(const char* VAR_6, int VAR_7) {
  int VAR_8;
  static char VAR_9 = 1;
  if (VAR_9) {

    FUNC_0(&VAR_4);


    if (VAR_9) {
      int VAR_10 = FUNC_3(VAR_3);

      VAR_0 = FUNC_6(VAR_10, VAR_1, VAR_5);
      for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
        VAR_3[VAR_8].len = FUNC_2(VAR_3[VAR_8].name);
        void* VAR_11 = &VAR_3[VAR_8];
        FUNC_4(VAR_0, (char*)VAR_3[VAR_8].name, (void*)&VAR_11);
      }
      VAR_9 = 0;
    }
    FUNC_1(&VAR_4);
  }

  char VAR_12[128] = {0};
  for (int32_t VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13) {
    if (VAR_6[VAR_13] >= 'a' && VAR_6[VAR_13] <= 'z') {
      VAR_12[VAR_13] = (char)(VAR_6[VAR_13] & 0xDF);
    } else {
      VAR_12[VAR_13] = VAR_6[VAR_13];
    }
  }

  SKeyword** VAR_14 = (SKeyword**)FUNC_5(VAR_0, VAR_12);
  if (VAR_14 != ((void*)0)) {
    return (*VAR_14)->type;
  } else {
    return VAR_2;
  }
}
