
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int state; } ;
struct TYPE_6__ {scalar_t__ maxSessions; } ;
struct TYPE_7__ {TYPE_3__** meterList; TYPE_1__ cfg; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SMeterObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static int32_t FUNC_2(SVnodeObj* VAR_3) {
  if (VAR_3->meterList == ((void*)0)) {
    FUNC_0(VAR_3->cfg.maxSessions == 0);
    return VAR_1;
  }

  bool VAR_4 = 1;
  for (int VAR_5 = 0; VAR_5 < VAR_3->cfg.maxSessions; ++VAR_5) {
    if (!FUNC_1(VAR_3, VAR_5)) {
      VAR_4 = 0;
    } else {
      SMeterObj* VAR_6 = VAR_3->meterList[VAR_5];
      if (VAR_6 != ((void*)0)) {
        VAR_6->state = VAR_2;
      }
    }
  }

  return VAR_4? VAR_1:VAR_0;
}
