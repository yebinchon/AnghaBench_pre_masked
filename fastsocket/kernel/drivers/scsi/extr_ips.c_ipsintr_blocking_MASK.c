
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* cdb; } ;
typedef TYPE_1__ ips_scb_t ;
struct TYPE_8__ {scalar_t__ waitflag; scalar_t__ cmd_in_progress; } ;
typedef TYPE_2__ ips_ha_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ips_ha_t * VAR_2, ips_scb_t * VAR_3)
{
 FUNC_0("ipsintr_blocking", 2);

 FUNC_1(VAR_2, VAR_3);
 if ((VAR_2->waitflag == VAR_1) && (VAR_2->cmd_in_progress == VAR_3->cdb[0])) {
  VAR_2->waitflag = VAR_0;

  return;
 }
}
