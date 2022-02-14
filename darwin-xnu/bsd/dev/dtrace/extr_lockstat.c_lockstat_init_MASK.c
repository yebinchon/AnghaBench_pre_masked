
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

void FUNC_3( void )
{
 int VAR_2 = FUNC_0(VAR_0, &VAR_1);

 if (VAR_2 < 0) {
  FUNC_2("lockstat_init: failed to allocate a major number!\n");
  return;
 }

 FUNC_1((dev_info_t*)(uintptr_t)VAR_2);
}
