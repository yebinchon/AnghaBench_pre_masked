
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int diskTimer; } ;
typedef TYPE_1__ MonitorConn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int *,int ,int *) ;
 int VAR_7 ;

int FUNC_3() {
  VAR_1 = (MonitorConn *)FUNC_0(sizeof(MonitorConn));
  FUNC_1(VAR_1, 0, sizeof(MonitorConn));
  FUNC_2(VAR_2, VAR_0, ((void*)0), VAR_7, &VAR_1->diskTimer);

  VAR_5 = VAR_3;
  VAR_6 = VAR_4;
  return 0;
}
