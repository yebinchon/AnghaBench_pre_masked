
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int diva_os_spin_lock_magic_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int ) ;

void FUNC_2 (int VAR_3,
                             diva_os_spin_lock_magic_t* VAR_4) {
 if (!VAR_0) {
  return;
 }
 if (VAR_3) {
  FUNC_1 (VAR_2);
 }
 VAR_0 = 0;
  FUNC_0 (&VAR_1, VAR_4, "read_ack");
}
