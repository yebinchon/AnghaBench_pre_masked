
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_task {scalar_t__ state; int itt; TYPE_3__* sc; } ;
struct iscsi_conn {TYPE_2__* session; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int cmds_max; struct iscsi_task** cmds; } ;
struct TYPE_4__ {unsigned int lun; } ;


 int FUNC_0 (TYPE_2__*,char*,TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iscsi_task*,int) ;

__attribute__((used)) static void FUNC_2(struct iscsi_conn *VAR_1, unsigned VAR_2,
       int VAR_3)
{
 struct iscsi_task *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->session->cmds_max; VAR_5++) {
  VAR_4 = VAR_1->session->cmds[VAR_5];
  if (!VAR_4->sc || VAR_4->state == VAR_0)
   continue;

  if (VAR_2 != -1 && VAR_2 != VAR_4->sc->device->lun)
   continue;

  FUNC_0(VAR_1->session,
      "failing sc %p itt 0x%x state %d\n",
      VAR_4->sc, VAR_4->itt, VAR_4->state);
  FUNC_1(VAR_4, VAR_3);
 }
}
