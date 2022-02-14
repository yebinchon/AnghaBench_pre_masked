
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* X; scalar_t__ ReqCh; int Req; int Id; } ;
struct TYPE_8__ {int status; TYPE_5__ e; TYPE_4__* adapter; scalar_t__ rc_count; } ;
typedef TYPE_3__ divas_um_idi_entity_t ;
struct TYPE_7__ {int (* request ) (TYPE_5__*) ;} ;
struct TYPE_9__ {int status; TYPE_2__ d; int adapter_nr; } ;
typedef TYPE_4__ diva_um_idi_adapter_t ;
typedef int diva_os_spin_lock_magic_t ;
struct TYPE_6__ {int PLength; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (TYPE_5__*) ;

int FUNC_4(void *VAR_4)
{
 divas_um_idi_entity_t *VAR_5;
 diva_um_idi_adapter_t *VAR_6;
 diva_os_spin_lock_magic_t VAR_7;

 FUNC_1(&VAR_3, &VAR_7, "start_remove");

 VAR_5 = (divas_um_idi_entity_t *) VAR_4;
 if (!VAR_5 || (!(VAR_6 = VAR_5->adapter)) ||
     (VAR_5->status & VAR_1) ||
     (VAR_6->status & VAR_0)) {
  FUNC_2(&VAR_3, &VAR_7, "start_remove");
  return (0);
 }

 if (VAR_5->rc_count) {



  FUNC_2(&VAR_3, &VAR_7, "start_remove");
  return (1);
 }

 if (!VAR_5->e.Id) {



  FUNC_2(&VAR_3, &VAR_7, "start_remove");
  return (0);
 }




 VAR_5->e.Req = VAR_2;
 VAR_5->e.ReqCh = 0;

 VAR_5->rc_count++;

 FUNC_0(("A(%d) E(%08x) request(%02x-%02x-%02x (%d))",
   VAR_5->adapter->adapter_nr, VAR_5, VAR_5->e.Id, VAR_5->e.Req,
   VAR_5->e.ReqCh, VAR_5->e.X->PLength));

 if (VAR_6->d.request)
  (*(VAR_6->d.request)) (&VAR_5->e);

 FUNC_2(&VAR_3, &VAR_7, "start_remove");

 return (0);
}
