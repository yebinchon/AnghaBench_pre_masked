
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; TYPE_2__* data; } ;
typedef TYPE_1__ network_packet ;
typedef int network_mysqld_err_packet_t ;
typedef int lua_State ;
struct TYPE_5__ {char* str; size_t len; } ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_4) {
 size_t VAR_5;
 const char *VAR_6 = FUNC_2(VAR_4, 1, &VAR_5);
 network_mysqld_err_packet_t *VAR_7;
 network_packet VAR_8;
 GString VAR_9;
 int VAR_10 = 0;

 VAR_9.str = (char *)VAR_6;
 VAR_9.len = VAR_5;

 VAR_8.data = &VAR_9;
 VAR_8.offset = 0;

 VAR_7 = FUNC_6();

 VAR_10 = VAR_10 || FUNC_7(&VAR_8, VAR_7);
 if (VAR_10) {
  FUNC_5(VAR_7);

  FUNC_3(VAR_4, "%s: network_mysqld_proto_get_err_packet() failed", VAR_0);
  return 0;
 }

 FUNC_4(VAR_4);

 FUNC_1(VAR_7, VAR_2);
 FUNC_1(VAR_7, VAR_3);
 FUNC_0(VAR_7, VAR_1);

 FUNC_5(VAR_7);

 return 1;
}
