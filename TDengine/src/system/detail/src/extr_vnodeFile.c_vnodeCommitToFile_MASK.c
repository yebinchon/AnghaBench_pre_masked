
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ maxSessions; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ SVnodeObj ;


 void* FUNC_0 (TYPE_2__*,int ,scalar_t__) ;

void *FUNC_1(void *VAR_0) {
  SVnodeObj *VAR_1 = (SVnodeObj *)VAR_0;

  return FUNC_0(VAR_1, 0, VAR_1->cfg.maxSessions - 1);
}
