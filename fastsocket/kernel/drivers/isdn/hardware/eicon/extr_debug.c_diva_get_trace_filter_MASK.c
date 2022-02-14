
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int diva_os_spin_lock_magic_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (int *) ;

int FUNC_4 (int VAR_2, char* VAR_3) {
  diva_os_spin_lock_magic_t VAR_4;
  int VAR_5;

  FUNC_0 (&VAR_1, &VAR_4, "read_filter");
  VAR_5 = FUNC_3 (&VAR_0[0]) + 1;
  if (VAR_2 >= VAR_5) {
    FUNC_2 (VAR_3, &VAR_0[0], VAR_5);
  }
  FUNC_1 (&VAR_1, &VAR_4, "read_filter");

  return (VAR_5);
}
