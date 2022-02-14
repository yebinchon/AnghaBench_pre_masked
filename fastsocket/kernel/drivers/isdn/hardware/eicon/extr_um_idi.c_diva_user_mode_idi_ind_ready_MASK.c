
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_7__ {int status; TYPE_2__ rc; TYPE_1__ data; TYPE_4__* adapter; } ;
typedef TYPE_3__ divas_um_idi_entity_t ;
struct TYPE_8__ {int status; } ;
typedef TYPE_4__ diva_um_idi_adapter_t ;
typedef int diva_os_spin_lock_magic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;

int FUNC_2(void *VAR_4, void *VAR_5)
{
 divas_um_idi_entity_t *VAR_6;
 diva_um_idi_adapter_t *VAR_7;
 diva_os_spin_lock_magic_t VAR_8;
 int VAR_9;

 if (!VAR_4)
  return (-1);
 FUNC_0(&VAR_3, &VAR_8, "ind_ready");
 VAR_6 = (divas_um_idi_entity_t *) VAR_4;
 VAR_7 = VAR_6->adapter;

 if ((!VAR_7) || (VAR_7->status & VAR_0)) {



  FUNC_1(&VAR_3, &VAR_8, "ind_ready");
  return (-1);
 }
 if (VAR_6->status & VAR_2) {




  FUNC_1(&VAR_3, &VAR_8, "ind_ready");
  return (-1);
 }

 VAR_9 = VAR_6->rc.count + VAR_6->data.count;

 if ((VAR_6->status & VAR_1) && !VAR_6->rc.count) {
  VAR_9 = 0;
 }

 FUNC_1(&VAR_3, &VAR_8, "ind_ready");

 return (VAR_9);
}
