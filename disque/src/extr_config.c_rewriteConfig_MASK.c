
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_2__ {int daemonize; int syslog_enabled; scalar_t__ aof_state; int aof_no_fsync_on_rewrite; int activerehashing; int aof_rewrite_incremental_fsync; int aof_load_truncated; int aof_enqueue_jobs_once; int configfile; int hz; int slowlog_max_len; int latency_monitor_threshold; int slowlog_log_slower_than; int cluster_node_timeout; int cluster_configfile; int aof_rewrite_min_size; int aof_rewrite_perc; int aof_fsync; int aof_filename; int maxmemory_samples; int maxmemory_policy; int maxmemory; int maxclients; int requirepass; int syslog_ident; int logfile; int verbosity; int tcpkeepalive; int maxidletime; int unixsocketperm; int unixsocket; int tcp_backlog; int port; int pidfile; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct rewriteConfigState*) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int ) ;
 int FUNC_2 (struct rewriteConfigState*) ;
 int FUNC_3 (struct rewriteConfigState*) ;
 int FUNC_4 (struct rewriteConfigState*,char*,int ,int ,int ) ;
 int FUNC_5 (struct rewriteConfigState*) ;
 int FUNC_6 (struct rewriteConfigState*,char*,int ,int ) ;
 int FUNC_7 (struct rewriteConfigState*,char*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 struct rewriteConfigState* FUNC_9 (char*) ;
 int FUNC_10 (struct rewriteConfigState*) ;
 int FUNC_11 (struct rewriteConfigState*) ;
 int FUNC_12 (struct rewriteConfigState*,char*,int ,int *) ;
 int FUNC_13 (struct rewriteConfigState*) ;
 int FUNC_14 (struct rewriteConfigState*,char*,int,int ) ;
 int FUNC_15 (int ) ;
 TYPE_1__ VAR_33 ;

int FUNC_16(char *VAR_34) {
    struct rewriteConfigState *VAR_35;
    sds VAR_36;
    int VAR_37;


    if ((VAR_35 = FUNC_9(VAR_34)) == ((void*)0)) return -1;




    FUNC_14(VAR_35,"daemonize",VAR_33.daemonize,0);
    FUNC_12(VAR_35,"pidfile",VAR_33.pidfile,VAR_20);
    FUNC_6(VAR_35,"port",VAR_33.port,VAR_21);
    FUNC_6(VAR_35,"tcp-backlog",VAR_33.tcp_backlog,VAR_26);
    FUNC_0(VAR_35);
    FUNC_12(VAR_35,"unixsocket",VAR_33.unixsocket,((void*)0));
    FUNC_7(VAR_35,"unixsocketperm",VAR_33.unixsocketperm,VAR_28);
    FUNC_6(VAR_35,"timeout",VAR_33.maxidletime,VAR_11);
    FUNC_6(VAR_35,"tcp-keepalive",VAR_33.tcpkeepalive,VAR_27);
    FUNC_4(VAR_35,"loglevel",VAR_33.verbosity,VAR_31,VAR_29);
    FUNC_12(VAR_35,"logfile",VAR_33.logfile,VAR_15);
    FUNC_14(VAR_35,"syslog-enabled",VAR_33.syslog_enabled,VAR_24);
    FUNC_12(VAR_35,"syslog-ident",VAR_33.syslog_ident,VAR_25);
    FUNC_13(VAR_35);
    FUNC_3(VAR_35);
    FUNC_12(VAR_35,"requirepass",VAR_33.requirepass,((void*)0));
    FUNC_6(VAR_35,"maxclients",VAR_33.maxclients,VAR_19);
    FUNC_1(VAR_35,"maxmemory",VAR_33.maxmemory,VAR_16);
    FUNC_4(VAR_35,"maxmemory-policy",VAR_33.maxmemory_policy,VAR_32,VAR_17);
    FUNC_6(VAR_35,"maxmemory-samples",VAR_33.maxmemory_samples,VAR_18);
    FUNC_14(VAR_35,"appendonly",VAR_33.aof_state != VAR_0,0);
    FUNC_12(VAR_35,"appendfilename",VAR_33.aof_filename,VAR_6);
    FUNC_4(VAR_35,"appendfsync",VAR_33.aof_fsync,VAR_30,VAR_7);
    FUNC_14(VAR_35,"no-appendfsync-on-rewrite",VAR_33.aof_no_fsync_on_rewrite,VAR_9);
    FUNC_6(VAR_35,"auto-aof-rewrite-percentage",VAR_33.aof_rewrite_perc,VAR_2);
    FUNC_1(VAR_35,"auto-aof-rewrite-min-size",VAR_33.aof_rewrite_min_size,VAR_1);
    FUNC_12(VAR_35,"cluster-config-file",VAR_33.cluster_configfile,VAR_12);
    FUNC_6(VAR_35,"cluster-node-timeout",VAR_33.cluster_node_timeout,VAR_3);
    FUNC_6(VAR_35,"slowlog-log-slower-than",VAR_33.slowlog_log_slower_than,VAR_22);
    FUNC_6(VAR_35,"latency-monitor-threshold",VAR_33.latency_monitor_threshold,VAR_14);
    FUNC_6(VAR_35,"slowlog-max-len",VAR_33.slowlog_max_len,VAR_23);
    FUNC_14(VAR_35,"activerehashing",VAR_33.activerehashing,VAR_4);
    FUNC_2(VAR_35);
    FUNC_6(VAR_35,"hz",VAR_33.hz,VAR_13);
    FUNC_14(VAR_35,"aof-rewrite-incremental-fsync",VAR_33.aof_rewrite_incremental_fsync,VAR_10);
    FUNC_14(VAR_35,"aof-load-truncated",VAR_33.aof_load_truncated,VAR_8);
    FUNC_14(VAR_35,"aof-enqueue-jobs-once",VAR_33.aof_enqueue_jobs_once,VAR_5);




    FUNC_11(VAR_35);



    VAR_36 = FUNC_5(VAR_35);
    VAR_37 = FUNC_8(VAR_33.configfile,VAR_36);

    FUNC_15(VAR_36);
    FUNC_10(VAR_35);
    return VAR_37;
}
