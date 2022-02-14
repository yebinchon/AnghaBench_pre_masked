
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef int diva_os_spin_lock_magic_t ;
typedef int diva_dbg_entry_head_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

diva_dbg_entry_head_t* FUNC_3 (word* VAR_3,
                                               diva_os_spin_lock_magic_t* VAR_4) {
  diva_dbg_entry_head_t* VAR_5 = ((void*)0);

  FUNC_0 (&VAR_1, VAR_4, "read");
  if (VAR_0) {
    FUNC_1 (&VAR_1, VAR_4, "read_busy");
    return ((void*)0);
  }
  VAR_0 = 1;

  if (!(VAR_5 = (diva_dbg_entry_head_t*)FUNC_2 (VAR_2, VAR_3))) {
    VAR_0 = 0;
    FUNC_1 (&VAR_1, VAR_4, "read_empty");
  }

  return (VAR_5);
}
