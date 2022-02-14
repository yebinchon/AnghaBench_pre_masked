
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_13__ {int cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef int SSqlCmd ;
typedef TYPE_2__ SSQLToken ;
typedef TYPE_3__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int ,int *,TYPE_2__*,TYPE_2__*,int *) ;
 TYPE_3__* FUNC_5 (int *,scalar_t__) ;

int32_t FUNC_6(SSqlObj* VAR_1, SSQLToken* VAR_2, int32_t VAR_3) {
  const char* VAR_4 = "name too long";

  SSqlCmd* VAR_5 = &VAR_1->cmd;
  SMeterMetaInfo* VAR_6 = FUNC_5(VAR_5, VAR_3);
  int32_t VAR_7 = VAR_0;

  if (FUNC_2(VAR_2)) {




    VAR_7 = FUNC_4(VAR_6->name, FUNC_0(VAR_1), ((void*)0), VAR_2, ((void*)0));
  } else {
    SSQLToken VAR_8 = {0};
    FUNC_1(VAR_1, &VAR_8);

    VAR_7 = FUNC_4(VAR_6->name, ((void*)0), &VAR_8, VAR_2, ((void*)0));
  }

  if (VAR_7 != VAR_0) {
    FUNC_3(VAR_5, VAR_4);
  }

  return VAR_7;
}
