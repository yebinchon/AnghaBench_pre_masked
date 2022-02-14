
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fc_rport {int dummy; } ;
struct TYPE_6__ {TYPE_1__* vha; struct fc_rport* drport; struct fc_rport* rport; } ;
typedef TYPE_3__ fc_port_t ;
struct TYPE_5__ {int host_lock; } ;
struct TYPE_4__ {TYPE_2__* host; } ;


 int FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 fc_port_t *VAR_1 = VAR_0;
 struct fc_rport *VAR_2;
 unsigned long VAR_3;

 FUNC_1(VAR_1->vha->host->host_lock, VAR_3);
 VAR_2 = VAR_1->drport ? VAR_1->drport: VAR_1->rport;
 VAR_1->drport = ((void*)0);
 FUNC_2(VAR_1->vha->host->host_lock, VAR_3);
 if (VAR_2)
  FUNC_0(VAR_2);
}
