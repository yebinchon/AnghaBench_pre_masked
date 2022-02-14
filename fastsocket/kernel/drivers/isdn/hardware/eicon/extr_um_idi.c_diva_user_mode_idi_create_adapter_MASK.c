
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int channels; int features; int type; } ;
struct TYPE_5__ {int adapter_nr; int link; TYPE_2__ d; int entity_q; } ;
typedef TYPE_1__ diva_um_idi_adapter_t ;
typedef int diva_os_spin_lock_magic_t ;
typedef TYPE_2__ DESCRIPTOR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

int FUNC_7(const DESCRIPTOR * VAR_2, int VAR_3)
{
 diva_os_spin_lock_magic_t VAR_4;
 diva_um_idi_adapter_t *VAR_5 =
     (diva_um_idi_adapter_t *) FUNC_4(0,
           sizeof
           (diva_um_idi_adapter_t));

 if (!VAR_5) {
  return (-1);
 }
 FUNC_6(VAR_5, 0x00, sizeof(*VAR_5));
 FUNC_1(&VAR_5->entity_q);

 VAR_5->d = *VAR_2;
 VAR_5->adapter_nr = VAR_3;

 FUNC_0(("DIDD_ADD A(%d), type:%02x, features:%04x, channels:%d",
   VAR_3, VAR_5->d.type, VAR_5->d.features, VAR_5->d.channels));

 FUNC_2(&VAR_0, &VAR_4, "create_adapter");
 FUNC_5(&VAR_5->link, &VAR_1);
 FUNC_3(&VAR_0, &VAR_4, "create_adapter");
 return (0);
}
