
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_packet ;
typedef int network_mysqld_type_t ;
typedef int GString ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(network_packet *VAR_1, network_mysqld_type_t *VAR_2) {
 GString *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(((void*)0));

 VAR_4 = VAR_4 || FUNC_3(VAR_1, VAR_3);

 FUNC_4(VAR_2, FUNC_0(VAR_3));

 FUNC_1(VAR_3, VAR_0);

 return VAR_4 ? -1 : 0;
}
