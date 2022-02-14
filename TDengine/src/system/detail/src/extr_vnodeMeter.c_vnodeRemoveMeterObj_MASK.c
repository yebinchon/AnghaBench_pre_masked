
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int maxSessions; } ;
struct TYPE_10__ {int lastRemove; TYPE_2__** meterList; TYPE_1__ cfg; } ;
struct TYPE_9__ {int timeStamp; int state; } ;
typedef TYPE_1__ SVnodeCfg ;
typedef TYPE_2__ SMeterObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 TYPE_5__* VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(int VAR_5, int VAR_6) {
  SMeterObj *VAR_7;

  if (VAR_5 < 0 || VAR_5 >= VAR_2) {
    FUNC_0("vid:%d is out of range", VAR_5);
    return 0;
  }

  SVnodeCfg *VAR_8 = &VAR_4[VAR_5].cfg;
  if (VAR_6 < 0 || VAR_6 >= VAR_8->maxSessions) {
    FUNC_0("vid:%d, sid:%d is larger than max:%d or less than 0", VAR_5, VAR_6, VAR_8->maxSessions);
    return 0;
  }


  if (VAR_4[VAR_5].meterList == ((void*)0)) return 0;

  VAR_7 = VAR_4[VAR_5].meterList[VAR_6];
  if (VAR_7 == ((void*)0)) {
    return VAR_1;
  }

  if (!FUNC_3(&VAR_4[VAR_5], VAR_6)) {
    return VAR_0;
  }


  VAR_7->state = VAR_3;
  VAR_7->timeStamp = FUNC_1();
  VAR_4[VAR_5].lastRemove = VAR_7->timeStamp;

  FUNC_4(VAR_7);
  FUNC_5(VAR_7);
  FUNC_2(VAR_7);

  return 0;
}
