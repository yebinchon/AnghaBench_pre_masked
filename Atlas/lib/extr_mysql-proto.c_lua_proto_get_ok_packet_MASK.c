
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; TYPE_2__* data; } ;
typedef TYPE_1__ network_packet ;
typedef int network_mysqld_ok_packet_t ;
typedef int lua_State ;
struct TYPE_5__ {char* str; size_t len; } ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_5) {
 size_t VAR_6;
 const char *VAR_7 = FUNC_1(VAR_5, 1, &VAR_6);
 network_mysqld_ok_packet_t *VAR_8;
 network_packet VAR_9;
 GString VAR_10;
 int VAR_11 = 0;

 VAR_10.str = (char *)VAR_7;
 VAR_10.len = VAR_6;

 VAR_9.data = &VAR_10;
 VAR_9.offset = 0;

 VAR_8 = FUNC_5();

 VAR_11 = VAR_11 || FUNC_6(&VAR_9, VAR_8);
 if (VAR_11) {
  FUNC_4(VAR_8);

  FUNC_2(VAR_5, "%s: network_mysqld_proto_get_ok_packet() failed", VAR_0);
  return 0;
 }

 FUNC_3(VAR_5);
 FUNC_0(VAR_8, VAR_3);
 FUNC_0(VAR_8, VAR_2);
 FUNC_0(VAR_8, VAR_4);
 FUNC_0(VAR_8, VAR_1);

 FUNC_4(VAR_8);

 return 1;
}
