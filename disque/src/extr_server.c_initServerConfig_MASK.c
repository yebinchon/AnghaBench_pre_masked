
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* runid; char* jobid_seed; int arch_bits; int sofd; int active_expire_enabled; int aof_rewrite_time_last; int aof_rewrite_time_start; int aof_fd; int aof_selected_db; int next_client_id; int loading_process_events_interval_bytes; char* assert_failed; char* assert_file; scalar_t__ watchdog_period; scalar_t__ bug_report_start; scalar_t__ assert_line; int latency_monitor_threshold; int slowlog_max_len; int slowlog_log_slower_than; void* rpopCommand; void* lpopCommand; void* lpushCommand; void* multiCommand; void* delCommand; void* orig_commands; void* commands; int * client_obuf_limits; void* cluster_configfile; int cluster_node_timeout; scalar_t__ shutdown_asap; int maxmemory_samples; int maxmemory_policy; int maxmemory; scalar_t__ bpop_blocked_clients; int maxclients; int activerehashing; int * requirepass; void* aof_filename; void* pidfile; int aof_enqueue_jobs_once; int aof_load_truncated; int aof_rewrite_incremental_fsync; scalar_t__ aof_flush_postponed_start; scalar_t__ aof_delayed_fsync; int aof_lastbgrewrite_status; int aof_last_fsync; scalar_t__ aof_rewrite_scheduled; scalar_t__ aof_rewrite_base_size; int aof_rewrite_min_size; int aof_rewrite_perc; int aof_no_fsync_on_rewrite; int aof_fsync; int aof_state; int daemonize; int syslog_facility; void* syslog_ident; int syslog_enabled; void* logfile; scalar_t__ loading; int client_max_querybuf_len; int tcpkeepalive; int maxidletime; int verbosity; int dbnum; scalar_t__ ipfd_count; int unixsocketperm; int * unixsocket; scalar_t__ bindaddr_count; int tcp_backlog; int port; int hz; int * executable; int * configfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 size_t VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 double VAR_37 ;
 double VAR_38 ;
 double VAR_39 ;
 double VAR_40 ;
 int * VAR_41 ;
 int VAR_42 ;
 void* FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,size_t) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_43 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ) ;

void FUNC_6(void) {
    int VAR_44;

    FUNC_1(VAR_43.runid,VAR_33);
    FUNC_1(VAR_43.jobid_seed,VAR_33);
    VAR_43.configfile = ((void*)0);
    VAR_43.executable = ((void*)0);
    VAR_43.hz = VAR_16;
    VAR_43.runid[VAR_33] = '\0';
    VAR_43.arch_bits = (sizeof(long) == 8) ? 64 : 32;
    VAR_43.port = VAR_24;
    VAR_43.tcp_backlog = VAR_29;
    VAR_43.bindaddr_count = 0;
    VAR_43.unixsocket = ((void*)0);
    VAR_43.unixsocketperm = VAR_31;
    VAR_43.ipfd_count = 0;
    VAR_43.sofd = -1;
    VAR_43.dbnum = VAR_15;
    VAR_43.verbosity = VAR_32;
    VAR_43.maxidletime = VAR_12;
    VAR_43.tcpkeepalive = VAR_30;
    VAR_43.active_expire_enabled = 1;
    VAR_43.client_max_querybuf_len = VAR_36;
    VAR_43.loading = 0;
    VAR_43.logfile = FUNC_5(VAR_18);
    VAR_43.syslog_enabled = VAR_27;
    VAR_43.syslog_ident = FUNC_5(VAR_28);
    VAR_43.syslog_facility = VAR_35;
    VAR_43.daemonize = VAR_14;
    VAR_43.aof_state = VAR_0;
    VAR_43.aof_fsync = VAR_8;
    VAR_43.aof_no_fsync_on_rewrite = VAR_10;
    VAR_43.aof_rewrite_perc = VAR_2;
    VAR_43.aof_rewrite_min_size = VAR_1;
    VAR_43.aof_rewrite_base_size = 0;
    VAR_43.aof_rewrite_scheduled = 0;
    VAR_43.aof_last_fsync = FUNC_4(((void*)0));
    VAR_43.aof_rewrite_time_last = -1;
    VAR_43.aof_rewrite_time_start = -1;
    VAR_43.aof_lastbgrewrite_status = VAR_34;
    VAR_43.aof_delayed_fsync = 0;
    VAR_43.aof_fd = -1;
    VAR_43.aof_selected_db = -1;
    VAR_43.aof_flush_postponed_start = 0;
    VAR_43.aof_rewrite_incremental_fsync = VAR_11;
    VAR_43.aof_load_truncated = VAR_9;
    VAR_43.aof_enqueue_jobs_once = VAR_6;
    VAR_43.pidfile = FUNC_5(VAR_23);
    VAR_43.aof_filename = FUNC_5(VAR_7);
    VAR_43.requirepass = ((void*)0);
    VAR_43.activerehashing = VAR_5;
    VAR_43.maxclients = VAR_22;
    VAR_43.bpop_blocked_clients = 0;
    VAR_43.maxmemory = VAR_19;
    VAR_43.maxmemory_policy = VAR_20;
    VAR_43.maxmemory_samples = VAR_21;
    VAR_43.shutdown_asap = 0;
    VAR_43.cluster_node_timeout = VAR_4;
    VAR_43.cluster_configfile = FUNC_5(VAR_13);
    VAR_43.next_client_id = 1;
    VAR_43.loading_process_events_interval_bytes = (1024*1024*2);


    for (VAR_44 = 0; VAR_44 < VAR_3; VAR_44++)
        VAR_43.client_obuf_limits[VAR_44] = VAR_41[VAR_44];


    VAR_40 = 0.0;
    VAR_39 = 1.0/VAR_40;
    VAR_38 = -1.0/VAR_40;
    VAR_37 = VAR_40/VAR_40;




    VAR_43.commands = FUNC_0(&VAR_42,((void*)0));
    VAR_43.orig_commands = FUNC_0(&VAR_42,((void*)0));
    FUNC_3();
    VAR_43.delCommand = FUNC_2("del");
    VAR_43.multiCommand = FUNC_2("multi");
    VAR_43.lpushCommand = FUNC_2("lpush");
    VAR_43.lpopCommand = FUNC_2("lpop");
    VAR_43.rpopCommand = FUNC_2("rpop");


    VAR_43.slowlog_log_slower_than = VAR_25;
    VAR_43.slowlog_max_len = VAR_26;


    VAR_43.latency_monitor_threshold = VAR_17;


    VAR_43.assert_failed = "<no assertion failed>";
    VAR_43.assert_file = "<no file>";
    VAR_43.assert_line = 0;
    VAR_43.bug_report_start = 0;
    VAR_43.watchdog_period = 0;
}
