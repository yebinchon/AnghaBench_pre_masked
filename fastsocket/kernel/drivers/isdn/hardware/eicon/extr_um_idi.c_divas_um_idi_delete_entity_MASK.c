
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* os_context; int link; int * adapter; } ;
typedef TYPE_1__ divas_um_idi_entity_t ;
typedef int diva_um_idi_adapter_t ;
typedef int diva_os_spin_lock_magic_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int,int) ;

int FUNC_8(int VAR_1, void *VAR_2)
{
 divas_um_idi_entity_t *VAR_3;
 diva_um_idi_adapter_t *VAR_4;
 diva_os_spin_lock_magic_t VAR_5;

 if (!(VAR_3 = (divas_um_idi_entity_t *) VAR_2))
  return (-1);

 FUNC_2(&VAR_0, &VAR_5, "delete_entity");
 if ((VAR_4 = VAR_3->adapter)) {
  FUNC_6(&VAR_3->link);
 }
 FUNC_4(&VAR_0, &VAR_5, "delete_entity");

 FUNC_5(VAR_2);
 FUNC_1(VAR_3);
 FUNC_3(0, VAR_3->os_context);
 FUNC_7(VAR_3, 0x00, sizeof(*VAR_3));
 FUNC_3(0, VAR_3);

 FUNC_0(("A(%d) remove E:%08x", VAR_1, VAR_3));

 return (0);
}
