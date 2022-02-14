
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int event; int fd; int dst; } ;
typedef TYPE_1__ network_socket ;
struct TYPE_15__ {TYPE_1__* server; TYPE_3__* config; } ;
typedef TYPE_2__ network_mysqld_con ;
struct TYPE_16__ {int address; TYPE_2__* listen_con; scalar_t__ lua_script; int admin_password; int admin_username; } ;
typedef TYPE_3__ chassis_plugin_config ;
struct TYPE_17__ {int event_base; int base_dir; } ;
typedef TYPE_4__ chassis ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,int,int ,TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 () ;

__attribute__((used)) static int FUNC_11(chassis *VAR_4, chassis_plugin_config *VAR_5) {
 network_mysqld_con *VAR_6;
 network_socket *VAR_7;


 if (!VAR_5->address) {
  FUNC_3("%s: Failed to get bind address, please set by --admin-address=<host:port>",
    VAR_2);
  return -1;
 }
 if (!VAR_5->admin_username) {
  FUNC_3("%s: --admin-username needs to be set",
    VAR_2);
  return -1;
 }
 if (!VAR_5->admin_password) {
  FUNC_3("%s: --admin-password needs to be set",
    VAR_2);
  return -1;
 }
 if (!VAR_5->lua_script) {
  VAR_5->lua_script = FUNC_4("%s/lib/mysql-proxy/lua/admin.lua", VAR_4->base_dir);
 }




 VAR_6 = FUNC_7();
 FUNC_6(VAR_4, VAR_6);
 VAR_6->config = VAR_5;

 VAR_5->listen_con = VAR_6;

 VAR_7 = FUNC_10();
 VAR_6->server = VAR_7;


 FUNC_8(VAR_6);


 if (0 != FUNC_5(VAR_7->dst, VAR_5->address)) {
  return -1;
 }


 if (0 != FUNC_9(VAR_7)) {
  return -1;
 }




 FUNC_2(&(VAR_7->event), VAR_7->fd, VAR_1|VAR_0, VAR_3, VAR_6);
 FUNC_1(VAR_4->event_base, &(VAR_7->event));
 FUNC_0(&(VAR_7->event), ((void*)0));

 return 0;
}
