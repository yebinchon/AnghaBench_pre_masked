
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ maxSessions; } ;
struct TYPE_9__ {int meterIndex; int vmutex; TYPE_1__ cfg; } ;
typedef TYPE_2__ SVnodeObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_13 (TYPE_2__*) ;

int FUNC_14(int VAR_5) {
  if (VAR_4 == ((void*)0)) return VAR_1;

  SVnodeObj* VAR_6 = &VAR_4[VAR_5];

  FUNC_2(&VAR_2);
  if (VAR_6->cfg.maxSessions == 0) {
    FUNC_3(&VAR_2);
    return VAR_1;
  }


  if (FUNC_13(VAR_6) != VAR_1) {
    FUNC_3(&VAR_2);
    return VAR_0;
  }

  FUNC_12(VAR_4 + VAR_5);
  FUNC_6(VAR_4 + VAR_5);
  FUNC_10(VAR_5);
  FUNC_9(VAR_5);
  FUNC_11(VAR_5);
  FUNC_8(VAR_5);
  FUNC_7(VAR_5);

  FUNC_1(&(VAR_4[VAR_5].vmutex));

  if (VAR_3 == VAR_5) VAR_3 = VAR_5 - 1;

  FUNC_4(VAR_4[VAR_5].meterIndex);
  FUNC_0(VAR_4 + VAR_5, 0, sizeof(SVnodeObj));

  FUNC_5();

  FUNC_3(&VAR_2);
  return VAR_1;
}
