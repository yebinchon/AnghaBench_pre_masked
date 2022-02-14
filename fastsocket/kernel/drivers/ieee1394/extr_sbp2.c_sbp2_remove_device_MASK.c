
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sbp2_reconnect_orb {int dummy; } ;
struct sbp2_query_logins_response {int dummy; } ;
struct sbp2_query_logins_orb {int dummy; } ;
struct sbp2_lu {scalar_t__ status_fifo_addr; TYPE_2__* ud; int query_logins_response_dma; scalar_t__ query_logins_response; int query_logins_orb_dma; scalar_t__ query_logins_orb; int logout_orb_dma; scalar_t__ logout_orb; int reconnect_orb_dma; scalar_t__ reconnect_orb; int login_orb_dma; scalar_t__ login_orb; int login_response_dma; scalar_t__ login_response; int lu_list; scalar_t__ shost; struct sbp2_fwhost_info* hi; } ;
struct sbp2_logout_orb {int dummy; } ;
struct sbp2_login_response {int dummy; } ;
struct sbp2_login_orb {int dummy; } ;
struct sbp2_fwhost_info {TYPE_4__* host; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_9__ {TYPE_3__* driver; TYPE_1__ device; } ;
struct TYPE_8__ {int owner; } ;
struct TYPE_7__ {int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int,scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_4__*,scalar_t__) ;
 int FUNC_4 (struct sbp2_lu*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct sbp2_lu*,TYPE_4__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct sbp2_lu *VAR_3)
{
 struct sbp2_fwhost_info *VAR_4;
 unsigned long VAR_5;

 if (!VAR_3)
  return;
 VAR_4 = VAR_3->hi;
 if (!VAR_4)
  goto no_hi;

 if (VAR_3->shost) {
  FUNC_9(VAR_3->shost);
  FUNC_8(VAR_3->shost);
 }
 FUNC_2();
 FUNC_7(VAR_3, VAR_4->host);

 FUNC_10(&VAR_1, VAR_5);
 FUNC_5(&VAR_3->lu_list);
 FUNC_11(&VAR_1, VAR_5);

 if (VAR_3->login_response)
  FUNC_1(VAR_4->host->device.parent,
        sizeof(struct sbp2_login_response),
        VAR_3->login_response,
        VAR_3->login_response_dma);
 if (VAR_3->login_orb)
  FUNC_1(VAR_4->host->device.parent,
        sizeof(struct sbp2_login_orb),
        VAR_3->login_orb,
        VAR_3->login_orb_dma);
 if (VAR_3->reconnect_orb)
  FUNC_1(VAR_4->host->device.parent,
        sizeof(struct sbp2_reconnect_orb),
        VAR_3->reconnect_orb,
        VAR_3->reconnect_orb_dma);
 if (VAR_3->logout_orb)
  FUNC_1(VAR_4->host->device.parent,
        sizeof(struct sbp2_logout_orb),
        VAR_3->logout_orb,
        VAR_3->logout_orb_dma);
 if (VAR_3->query_logins_orb)
  FUNC_1(VAR_4->host->device.parent,
        sizeof(struct sbp2_query_logins_orb),
        VAR_3->query_logins_orb,
        VAR_3->query_logins_orb_dma);
 if (VAR_3->query_logins_response)
  FUNC_1(VAR_4->host->device.parent,
        sizeof(struct sbp2_query_logins_response),
        VAR_3->query_logins_response,
        VAR_3->query_logins_response_dma);

 if (VAR_3->status_fifo_addr != VAR_0)
  FUNC_3(&VAR_2, VAR_4->host,
       VAR_3->status_fifo_addr);

 FUNC_0(&VAR_3->ud->device, ((void*)0));

 FUNC_6(VAR_4->host->driver->owner);
no_hi:
 FUNC_4(VAR_3);
}
