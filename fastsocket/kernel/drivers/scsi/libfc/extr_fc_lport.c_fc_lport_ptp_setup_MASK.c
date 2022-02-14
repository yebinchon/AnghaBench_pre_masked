
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct TYPE_9__ {int (* rport_login ) (TYPE_4__*) ;TYPE_4__* (* rport_create ) (struct fc_lport*,int ) ;int rport_destroy; int (* rport_logoff ) (TYPE_4__*) ;} ;
struct TYPE_8__ {int disc_mutex; } ;
struct fc_lport {TYPE_4__* ptp_rdata; TYPE_3__ tt; TYPE_2__ disc; } ;
struct TYPE_7__ {void* node_name; void* port_name; } ;
struct TYPE_10__ {TYPE_1__ ids; int kref; } ;


 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (struct fc_lport*,int ) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct fc_lport *VAR_0,
          u32 VAR_1, u64 VAR_2,
          u64 VAR_3)
{
 FUNC_3(&VAR_0->disc.disc_mutex);
 if (VAR_0->ptp_rdata) {
  VAR_0->tt.rport_logoff(VAR_0->ptp_rdata);
  FUNC_2(&VAR_0->ptp_rdata->kref, VAR_0->tt.rport_destroy);
 }
 VAR_0->ptp_rdata = VAR_0->tt.rport_create(VAR_0, VAR_1);
 FUNC_1(&VAR_0->ptp_rdata->kref);
 VAR_0->ptp_rdata->ids.port_name = VAR_2;
 VAR_0->ptp_rdata->ids.node_name = VAR_3;
 FUNC_4(&VAR_0->disc.disc_mutex);

 VAR_0->tt.rport_login(VAR_0->ptp_rdata);

 FUNC_0(VAR_0);
}
