
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {double maxSessions; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;
typedef TYPE_1__ SVnodeCfg ;
typedef int SShellObj ;


 int FUNC_0 (double,int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,int,size_t) ;
 int VAR_1 ;
 int * VAR_2 ;
 int ** VAR_3 ;
 scalar_t__ FUNC_3 (int ,int,int,int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;

int FUNC_4(int VAR_6) {
  const int32_t VAR_7 = 300;

  SVnodeCfg *VAR_8 = &VAR_5[VAR_6].cfg;
  int32_t VAR_9 = (int32_t) FUNC_0(VAR_8->maxSessions * 1.1, VAR_7);

  size_t VAR_10 = VAR_9 * sizeof(SShellObj);
  VAR_3[VAR_6] = (SShellObj *)FUNC_1(1, VAR_10);
  if (VAR_3[VAR_6] == ((void*)0)) {
    FUNC_2("vid:%d failed to allocate shellObj, size:%d", VAR_6, VAR_10);
    return -1;
  }

  if(FUNC_3(VAR_1, VAR_6, VAR_9, VAR_2[(VAR_6+1)%VAR_4]) != VAR_0) {
    return -1;
  }

  return VAR_0;
}
