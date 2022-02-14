
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_4__ {int maxSessions; } ;
struct TYPE_5__ {scalar_t__ meterIndex; TYPE_1__ cfg; } ;
typedef int TSCKSUM ;
typedef int SMeterObjHeader ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__,int,int,int *) ;
 int FUNC_6 (char*,char*,char*,int,int) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (scalar_t__) ;
 char* VAR_3 ;
 int FUNC_9 (int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_10 (int *,TYPE_2__*) ;

int FUNC_11(int VAR_5) {
  FILE * VAR_6;
  char VAR_7[VAR_1];
  int32_t VAR_8;


  FUNC_6(VAR_7, "%s/vnode%d/meterObj.v%d", VAR_3, VAR_5, VAR_5);
  VAR_6 = FUNC_3(VAR_7, "w+");
  if (VAR_6 == ((void*)0)) {
    FUNC_1("failed to create vnode:%d file:%s", VAR_5, VAR_7);
    return -1;
  } else {
    FUNC_9(VAR_6);
    FUNC_10(VAR_6, VAR_4 + VAR_5);
    FUNC_4(VAR_6, VAR_2, VAR_0);

    VAR_8 = sizeof(SMeterObjHeader) * VAR_4[VAR_5].cfg.maxSessions + sizeof(TSCKSUM);
    FUNC_8(VAR_4[VAR_5].meterIndex);
    VAR_4[VAR_5].meterIndex = FUNC_0(1, VAR_8);
    FUNC_7(0, (uint8_t *)(VAR_4[VAR_5].meterIndex), VAR_8);
    FUNC_5(VAR_4[VAR_5].meterIndex, VAR_8, 1, VAR_6);

    FUNC_2(VAR_6);
  }

  return 0;
}
