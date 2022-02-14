
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

void FUNC_4( void )
{
 int VAR_2 = FUNC_0(VAR_0, &VAR_1);

 if (VAR_2 < 0) {
  FUNC_2("sdt_init: failed to allocate a major number!\n");
  return;
 }

 if (FUNC_1()) {
  return;
 }

 FUNC_3((dev_info_t*)(uintptr_t)VAR_2);
}
