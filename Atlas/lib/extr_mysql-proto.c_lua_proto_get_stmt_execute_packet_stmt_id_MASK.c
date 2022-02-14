
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; TYPE_2__* data; } ;
typedef TYPE_1__ network_packet ;
typedef int lua_State ;
typedef int guint32 ;
struct TYPE_5__ {char* str; size_t len; } ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1) {
 size_t VAR_2;
 const char *VAR_3 = FUNC_0(VAR_1, 1, &VAR_2);
 network_packet VAR_4;
 GString VAR_5;
 int VAR_6 = 0;
 guint32 VAR_7;

 VAR_5.str = (char *)VAR_3;
 VAR_5.len = VAR_2;

 VAR_4.data = &VAR_5;
 VAR_4.offset = 0;

 VAR_6 = VAR_6 || FUNC_3(&VAR_4, &VAR_7);
 if (VAR_6) {
  FUNC_1(VAR_1, "%s: network_mysqld_proto_get_stmt_execute_packet_stmt_id() failed", VAR_0);
  return 0;
 }

 FUNC_2(VAR_1, VAR_7);

 return 1;
}
