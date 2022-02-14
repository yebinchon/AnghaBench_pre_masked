
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int chassis_options_t ;
struct TYPE_3__ {int max_conn_for_a_backend; int wait_timeout; int instance_name; int lua_cpath; int lua_path; int event_thread_count; int max_files_number; int auto_restart; int invoke_dbg_on_crash; int use_syslog; int log_path; int log_level; int plugin_names; int plugin_dir; int base_dir; int user; int daemon_mode; int verbose_shutdown; } ;
typedef TYPE_1__ chassis_frontend_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ,int ,int *,char*,char*) ;

int FUNC_1(chassis_frontend_t *VAR_4, chassis_options_t *VAR_5) {
 FUNC_0(VAR_5, "verbose-shutdown", 0, 0, VAR_1, &(VAR_4->verbose_shutdown), "Always log the exit code when shutting down", ((void*)0));
 FUNC_0(VAR_5, "daemon", 0, 0, VAR_1, &(VAR_4->daemon_mode), "Start in daemon-mode", ((void*)0));
 FUNC_0(VAR_5, "user", 0, 0, VAR_2, &(VAR_4->user), "Run mysql-proxy as user", "<user>");
 FUNC_0(VAR_5, "basedir", 0, 0, VAR_2, &(VAR_4->base_dir), "Base directory to prepend to relative paths in the config", "<absolute path>");
 FUNC_0(VAR_5, "plugin-dir", 0, 0, VAR_2, &(VAR_4->plugin_dir), "path to the plugins", "<path>");
 FUNC_0(VAR_5, "plugins", 0, 0, VAR_3, &(VAR_4->plugin_names), "plugins to load", "<name>");
 FUNC_0(VAR_5, "log-level", 0, 0, VAR_2, &(VAR_4->log_level), "log all messages of level ... or higher", "(error|warning|info|message|debug)");
 FUNC_0(VAR_5, "log-path", 0, 0, VAR_2, &(VAR_4->log_path), "log all messages in a path", "<path>");
 FUNC_0(VAR_5, "log-use-syslog", 0, 0, VAR_1, &(VAR_4->use_syslog), "log all messages to syslog", ((void*)0));
 FUNC_0(VAR_5, "log-backtrace-on-crash", 0, 0, VAR_1, &(VAR_4->invoke_dbg_on_crash), "try to invoke debugger on crash", ((void*)0));
 FUNC_0(VAR_5, "keepalive", 0, 0, VAR_1, &(VAR_4->auto_restart), "try to restart the proxy if it crashed", ((void*)0));
 FUNC_0(VAR_5, "max-open-files", 0, 0, VAR_0, &(VAR_4->max_files_number), "maximum number of open files (ulimit -n)", ((void*)0));
 FUNC_0(VAR_5, "event-threads", 0, 0, VAR_0, &(VAR_4->event_thread_count), "number of event-handling threads (default: 1)", ((void*)0));
 FUNC_0(VAR_5, "lua-path", 0, 0, VAR_2, &(VAR_4->lua_path), "set the LUA_PATH", "<...>");
 FUNC_0(VAR_5, "lua-cpath", 0, 0, VAR_2, &(VAR_4->lua_cpath), "set the LUA_CPATH", "<...>");
 FUNC_0(VAR_5, "instance", 0, 0, VAR_2, &(VAR_4->instance_name), "instance name", "<name>");
 FUNC_0(VAR_5, "wait-timeout", 0, 0, VAR_0, &(VAR_4->wait_timeout), "the number of seconds which Atlas waits for activity on a connection before closing it (default:0)", ((void*)0));
 FUNC_0(VAR_5, "max_conn_for_a_backend", 0, 0, VAR_0, &(VAR_4->max_conn_for_a_backend), "max conn for a backend(default: 0)", ((void*)0));

 return 0;
}
