
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hostport; int repeat; int interval; int last_cmd_type; int * eval; scalar_t__ intrinsic_latency_mode; scalar_t__ scan_mode; scalar_t__ stat_mode; scalar_t__ bigkeys; scalar_t__ pipe_mode; scalar_t__ getrdb_mode; scalar_t__ slave_mode; scalar_t__ latency_mode; void* mb_delim; int output; int * auth; scalar_t__ stdinarg; int pipe_timeout; int * rdb_filename; int * pattern; scalar_t__ cluster_mode; scalar_t__ latency_history; scalar_t__ pubsub_mode; scalar_t__ monitor_mode; scalar_t__ shutdown; scalar_t__ interactive; scalar_t__ dbnum; int * hostsocket; void* hostip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,char**) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 void* FUNC_17 (char*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int VAR_8 ;

int FUNC_21(int VAR_9, char **VAR_10) {
    int VAR_11;

    VAR_7.hostip = FUNC_17("127.0.0.1");
    VAR_7.hostport = 7711;
    VAR_7.hostsocket = ((void*)0);
    VAR_7.repeat = 1;
    VAR_7.interval = 0;
    VAR_7.dbnum = 0;
    VAR_7.interactive = 0;
    VAR_7.shutdown = 0;
    VAR_7.monitor_mode = 0;
    VAR_7.pubsub_mode = 0;
    VAR_7.latency_mode = 0;
    VAR_7.latency_history = 0;
    VAR_7.cluster_mode = 0;
    VAR_7.slave_mode = 0;
    VAR_7.getrdb_mode = 0;
    VAR_7.stat_mode = 0;
    VAR_7.scan_mode = 0;
    VAR_7.intrinsic_latency_mode = 0;
    VAR_7.pattern = ((void*)0);
    VAR_7.rdb_filename = ((void*)0);
    VAR_7.pipe_mode = 0;
    VAR_7.pipe_timeout = VAR_0;
    VAR_7.bigkeys = 0;
    VAR_7.stdinarg = 0;
    VAR_7.auth = ((void*)0);
    VAR_7.eval = ((void*)0);
    VAR_7.last_cmd_type = -1;

    if (!FUNC_10(FUNC_5(VAR_8)) && (FUNC_8("FAKETTY") == ((void*)0)))
        VAR_7.output = VAR_1;
    else
        VAR_7.output = VAR_2;
    VAR_7.mb_delim = FUNC_17("\n");
    FUNC_1();

    VAR_11 = FUNC_13(VAR_9,VAR_10);
    VAR_9 -= VAR_11;
    VAR_10 += VAR_11;

    FUNC_18(VAR_5, VAR_6);


    if (VAR_7.latency_mode) {
        if (FUNC_0(0) == VAR_3) FUNC_4(1);
        FUNC_11();
    }


    if (VAR_7.slave_mode) {
        if (FUNC_0(0) == VAR_3) FUNC_4(1);
        FUNC_19();
    }


    if (VAR_7.getrdb_mode) {
        if (FUNC_0(0) == VAR_3) FUNC_4(1);
        FUNC_7();
    }


    if (VAR_7.pipe_mode) {
        if (FUNC_0(0) == VAR_3) FUNC_4(1);
        FUNC_14();
    }


    if (VAR_7.bigkeys) {
        if (FUNC_0(0) == VAR_3) FUNC_4(1);
        FUNC_6();
    }


    if (VAR_7.stat_mode) {
        if (FUNC_0(0) == VAR_3) FUNC_4(1);
        if (VAR_7.interval == 0) VAR_7.interval = 1000000;
        FUNC_20();
    }


    if (VAR_7.scan_mode) {
        if (FUNC_0(0) == VAR_3) FUNC_4(1);
        FUNC_16();
    }


    if (VAR_7.intrinsic_latency_mode) FUNC_9();


    if (VAR_9 == 0 && !VAR_7.eval) {


        FUNC_0(0);
        FUNC_15();
    }


    if (FUNC_0(0) != VAR_4) FUNC_4(1);
    if (VAR_7.eval) {
        return FUNC_3(VAR_9,VAR_10);
    } else {
        return FUNC_12(VAR_9,FUNC_2(VAR_9,VAR_10));
    }
}
