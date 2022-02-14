
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_mysqld_auth_response ;
typedef int lua_State ;
typedef int GString ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_8) {
 GString *VAR_9;
 network_mysqld_auth_response *VAR_10;

 FUNC_5(VAR_8, 1, VAR_0);

 VAR_9 = FUNC_4(((void*)0));
 VAR_10 = FUNC_9();

 FUNC_0(VAR_10, VAR_2);
 FUNC_0(VAR_10, VAR_5);
 FUNC_0(VAR_10, VAR_3);

 FUNC_1(VAR_10, VAR_7);
 FUNC_1(VAR_10, VAR_6);
 FUNC_1(VAR_10, VAR_4);

 if (FUNC_10(VAR_9, VAR_10)) {
  FUNC_8(VAR_10);
  FUNC_3(VAR_9, VAR_1);

  FUNC_6(VAR_8, "to_response_packet() failed");
        FUNC_3(VAR_9, VAR_1);
  return 0;
 }

 FUNC_8(VAR_10);

 FUNC_7(VAR_8, FUNC_2(VAR_9));

 FUNC_3(VAR_9, VAR_1);

 return 1;
}
