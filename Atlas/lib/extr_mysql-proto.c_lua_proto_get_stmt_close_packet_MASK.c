
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; TYPE_2__* data; } ;
typedef TYPE_1__ network_packet ;
typedef int network_mysqld_stmt_close_packet_t ;
typedef int lua_State ;
struct TYPE_5__ {char* str; size_t len; } ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_2) {
 size_t VAR_3;
 const char *VAR_4 = FUNC_1(VAR_2, 1, &VAR_3);
 network_mysqld_stmt_close_packet_t *VAR_5;
 network_packet VAR_6;
 GString VAR_7;
 int VAR_8 = 0;

 VAR_7.str = (char *)VAR_4;
 VAR_7.len = VAR_3;

 VAR_6.data = &VAR_7;
 VAR_6.offset = 0;

 VAR_5 = FUNC_6();

 VAR_8 = VAR_8 || FUNC_4(&VAR_6, VAR_5);
 if (VAR_8) {
  FUNC_5(VAR_5);

  FUNC_2(VAR_2, "%s: network_mysqld_proto_get_stmt_close_packet() failed", VAR_0);
  return 0;
 }

 FUNC_3(VAR_2);

 FUNC_0(VAR_5, VAR_1);

 FUNC_5(VAR_5);

 return 1;
}
