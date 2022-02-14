
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;

void FUNC_2( void *VAR_1 ) {
 if ( !VAR_1 ) {
  return;
 }
 if ( !FUNC_1( VAR_1 ) ) {
  FUNC_0 (VAR_0, "Sys_UnloadDll FreeLibrary failed");
 }
}
