
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; TYPE_2__* data; } ;
typedef TYPE_1__ network_packet ;
typedef int network_mysqld_auth_response ;
typedef int lua_State ;
struct TYPE_5__ {char* str; size_t len; } ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_7) {
 size_t VAR_8;
 const char *VAR_9 = FUNC_2(VAR_7, 1, &VAR_8);
 network_mysqld_auth_response *VAR_10;
 network_packet VAR_11;
 GString VAR_12;
 int VAR_13 = 0;

 VAR_12.str = (char *)VAR_9;
 VAR_12.len = VAR_8;

 VAR_11.data = &VAR_12;
 VAR_11.offset = 0;

 VAR_10 = FUNC_6();

 VAR_13 = VAR_13 || FUNC_7(&VAR_11, VAR_10);
 if (VAR_13) {
  FUNC_5(VAR_10);

  FUNC_3(VAR_7, "%s: network_mysqld_proto_get_auth_response() failed", VAR_0);
  return 0;
 }

 FUNC_4(VAR_7);
 FUNC_0(VAR_10, VAR_1);
 FUNC_0(VAR_10, VAR_4);
 FUNC_0(VAR_10, VAR_2);

 FUNC_1(VAR_10, VAR_6);
 FUNC_1(VAR_10, VAR_5);
 FUNC_1(VAR_10, VAR_3);

 FUNC_5(VAR_10);

 return 1;
}
