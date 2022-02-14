
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int callback; int * cdb; } ;
typedef TYPE_1__ ips_scb_t ;
struct TYPE_9__ {int cmd_in_progress; int waitflag; } ;
typedef TYPE_2__ ips_ha_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(ips_ha_t * VAR_5, ips_scb_t * VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_0("ips_send_wait", 1);

 if (VAR_8 != VAR_1) {
  VAR_5->waitflag = VAR_3;
  VAR_5->cmd_in_progress = VAR_6->cdb[0];
 }
 VAR_6->callback = VAR_4;
 VAR_9 = FUNC_1(VAR_5, VAR_6);

 if ((VAR_9 == VAR_0) || (VAR_9 == VAR_2))
  return (VAR_9);

 if (VAR_8 != VAR_1)
  VAR_9 = FUNC_2(VAR_5, VAR_7, VAR_8);

 return (VAR_9);
}
