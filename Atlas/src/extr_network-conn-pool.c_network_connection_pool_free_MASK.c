
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_connection_pool_entry ;
typedef int network_connection_pool ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(network_connection_pool *VAR_1) {
 if (VAR_1) {
  network_connection_pool_entry *VAR_2 = ((void*)0);
  while ((VAR_2 = FUNC_1(VAR_1))) FUNC_2(VAR_2, VAR_0);
  FUNC_0(VAR_1);
 }
}
