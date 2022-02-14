
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_13__ {char* ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_14__ {TYPE_2__** argv; } ;
typedef TYPE_3__ client ;
typedef int buf ;
struct TYPE_15__ {scalar_t__ aof_state; int unixsocketperm; int bindaddr_count; int bindaddr; TYPE_1__* client_obuf_limits; int syslog_facility; int aof_fsync; int verbosity; int maxmemory_policy; int aof_enqueue_jobs_once; int aof_load_truncated; int aof_rewrite_incremental_fsync; int activerehashing; int daemonize; int aof_no_fsync_on_rewrite; int tcpkeepalive; int cluster_node_timeout; int hz; int watchdog_period; int maxclients; int dbnum; int tcp_backlog; int port; int slowlog_max_len; int latency_monitor_threshold; int slowlog_log_slower_than; int aof_rewrite_min_size; int aof_rewrite_perc; int maxidletime; int maxmemory_samples; int maxmemory; int pidfile; int logfile; int unixsocket; int requirepass; } ;
struct TYPE_12__ {scalar_t__ soft_limit_seconds; int soft_limit_bytes; int hard_limit_bytes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_2__*) ;
 char* FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*,char*,int ,int ,int ,long) ;
 char* FUNC_11 () ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int ,int ,char*) ;
 TYPE_7__ VAR_5 ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_3__*,void*,int) ;
 int FUNC_16 (char*,int,char*,int) ;
 scalar_t__ FUNC_17 (char*,char*,int ) ;
 int VAR_6 ;

void FUNC_18(client *VAR_7) {
    robj *VAR_8 = VAR_7->argv[2];
    void *VAR_9 = FUNC_0(VAR_7);
    char *VAR_10 = VAR_8->ptr;
    char VAR_11[128];
    int VAR_12 = 0;
    FUNC_14(VAR_7,VAR_8,FUNC_8(VAR_8));


    FUNC_5("requirepass",VAR_5.requirepass);
    FUNC_5("unixsocket",VAR_5.unixsocket);
    FUNC_5("logfile",VAR_5.logfile);
    FUNC_5("pidfile",VAR_5.pidfile);


    FUNC_4("maxmemory",VAR_5.maxmemory);
    FUNC_4("maxmemory-samples",VAR_5.maxmemory_samples);
    FUNC_4("timeout",VAR_5.maxidletime);
    FUNC_4("auto-aof-rewrite-percentage",
            VAR_5.aof_rewrite_perc);
    FUNC_4("auto-aof-rewrite-min-size",
            VAR_5.aof_rewrite_min_size);
    FUNC_4("slowlog-log-slower-than",
            VAR_5.slowlog_log_slower_than);
    FUNC_4("latency-monitor-threshold",
            VAR_5.latency_monitor_threshold);
    FUNC_4("slowlog-max-len",
            VAR_5.slowlog_max_len);
    FUNC_4("port",VAR_5.port);
    FUNC_4("tcp-backlog",VAR_5.tcp_backlog);
    FUNC_4("databases",VAR_5.dbnum);
    FUNC_4("maxclients",VAR_5.maxclients);
    FUNC_4("watchdog-period",VAR_5.watchdog_period);
    FUNC_4("hz",VAR_5.hz);
    FUNC_4("cluster-node-timeout",VAR_5.cluster_node_timeout);


    FUNC_2("tcp-keepalive",VAR_5.tcpkeepalive);
    FUNC_2("no-appendfsync-on-rewrite",
            VAR_5.aof_no_fsync_on_rewrite);
    FUNC_2("daemonize", VAR_5.daemonize);
    FUNC_2("activerehashing", VAR_5.activerehashing);
    FUNC_2("aof-rewrite-incremental-fsync",
            VAR_5.aof_rewrite_incremental_fsync);
    FUNC_2("aof-load-truncated",
            VAR_5.aof_load_truncated);
    FUNC_2("aof-enqueue-jobs-once",
            VAR_5.aof_enqueue_jobs_once);


    FUNC_3("maxmemory-policy",
            VAR_5.maxmemory_policy,VAR_4);
    FUNC_3("loglevel",
            VAR_5.verbosity,VAR_3);
    FUNC_3("appendfsync",
            VAR_5.aof_fsync,VAR_2);
    FUNC_3("syslog-facility",
            VAR_5.syslog_facility,VAR_6);



    if (FUNC_17(VAR_10,"appendonly",0)) {
        FUNC_1(VAR_7,"appendonly");
        FUNC_1(VAR_7,VAR_5.aof_state == VAR_0 ? "no" : "yes");
        VAR_12++;
    }
    if (FUNC_17(VAR_10,"dir",0)) {
        char VAR_13[1024];

        if (FUNC_7(VAR_13,sizeof(VAR_13)) == ((void*)0))
            VAR_13[0] = '\0';

        FUNC_1(VAR_7,"dir");
        FUNC_1(VAR_7,VAR_13);
        VAR_12++;
    }
    if (FUNC_17(VAR_10,"client-output-buffer-limit",0)) {
        sds VAR_14 = FUNC_11();
        int VAR_15;

        for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
            VAR_14 = FUNC_10(VAR_14,"%s %llu %llu %ld",
                    FUNC_6(VAR_15),
                    VAR_5.client_obuf_limits[VAR_15].hard_limit_bytes,
                    VAR_5.client_obuf_limits[VAR_15].soft_limit_bytes,
                    (long) VAR_5.client_obuf_limits[VAR_15].soft_limit_seconds);
            if (VAR_15 != VAR_1-1)
                VAR_14 = FUNC_9(VAR_14," ",1);
        }
        FUNC_1(VAR_7,"client-output-buffer-limit");
        FUNC_1(VAR_7,VAR_14);
        FUNC_12(VAR_14);
        VAR_12++;
    }
    if (FUNC_17(VAR_10,"unixsocketperm",0)) {
        char VAR_16[32];
        FUNC_16(VAR_16,sizeof(VAR_16),"%o",VAR_5.unixsocketperm);
        FUNC_1(VAR_7,"unixsocketperm");
        FUNC_1(VAR_7,VAR_16);
        VAR_12++;
    }
    if (FUNC_17(VAR_10,"bind",0)) {
        sds VAR_17 = FUNC_13(VAR_5.bindaddr,VAR_5.bindaddr_count," ");

        FUNC_1(VAR_7,"bind");
        FUNC_1(VAR_7,VAR_17);
        FUNC_12(VAR_17);
        VAR_12++;
    }
    FUNC_15(VAR_7,VAR_9,VAR_12*2);
}
