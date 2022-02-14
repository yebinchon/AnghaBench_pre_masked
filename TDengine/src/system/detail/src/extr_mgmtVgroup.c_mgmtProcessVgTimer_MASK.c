
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vgStatus; int * vgTimer; int name; } ;
typedef TYPE_1__ SDbObj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;

void FUNC_1(void *VAR_2, void *VAR_3) {
  SDbObj *VAR_4 = (SDbObj *)VAR_2;
  if (VAR_4 == ((void*)0)) return;

  if (VAR_4->vgStatus > VAR_0) {
    FUNC_0("db:%s, set vgstatus from %d to %d", VAR_4->name, VAR_4->vgStatus, VAR_1);
    VAR_4->vgStatus = VAR_1;
  }

  VAR_4->vgTimer = ((void*)0);
}
