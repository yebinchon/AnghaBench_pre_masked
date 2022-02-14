
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; scalar_t__* ipfd; int ipfd_count; scalar_t__ sofd; int aof_child_pid; scalar_t__ aof_state; int aof_fd; int arch_bits; long long maxmemory; int maxmemory_policy; int aof_filename; int el; scalar_t__ aof_last_write_errno; int aof_last_write_status; scalar_t__ resident_set_size; scalar_t__ stat_peak_memory; int stat_starttime; int aof_buf; scalar_t__ cronloops; int awakeme; void* ready_queues; void* queues; void* jobs; int neterr; int tcp_backlog; int unixsocketperm; int * unixsocket; scalar_t__ maxclients; scalar_t__ clients_paused; void* ready_keys; void* unblocked_clients; void* clients_pending_write; void* monitors; void* clients_to_close; void* clients; int * current_client; int pid; int syslog_facility; int syslog_ident; scalar_t__ syslog_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int,int ,int *,int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 void* FUNC_10 (int *,int *) ;
 int VAR_20 ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int VAR_21 ;
 int FUNC_13 () ;
 void* FUNC_14 () ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__*,int*) ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 TYPE_1__ VAR_24 ;
 int VAR_25 ;
 int FUNC_20 (int ,char*,...) ;
 int FUNC_21 (char*) ;
 int VAR_26 ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int ) ;
 int VAR_27 ;
 int FUNC_24 (int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 () ;

void FUNC_30(void) {
    int VAR_28;

    FUNC_23(VAR_15, VAR_17);
    FUNC_23(VAR_16, VAR_17);
    FUNC_22();

    if (VAR_24.syslog_enabled) {
        FUNC_17(VAR_24.syslog_ident, VAR_10 | VAR_8 | VAR_9,
            VAR_24.syslog_facility);
    }

    VAR_24.pid = FUNC_12();
    VAR_24.current_client = ((void*)0);
    VAR_24.clients = FUNC_14();
    VAR_24.clients_to_close = FUNC_14();
    VAR_24.monitors = FUNC_14();
    VAR_24.clients_pending_write = FUNC_14();
    VAR_24.unblocked_clients = FUNC_14();
    VAR_24.ready_keys = FUNC_14();
    VAR_24.clients_paused = 0;

    FUNC_9();
    FUNC_0();
    VAR_24.el = FUNC_1(VAR_24.maxclients+VAR_4);

    if (VAR_24.port != 0 &&
        FUNC_15(VAR_24.port,VAR_24.ipfd,&VAR_24.ipfd_count) == VAR_5)
        FUNC_11(1);


    if (VAR_24.unixsocket != ((void*)0)) {
        FUNC_28(VAR_24.unixsocket);
        VAR_24.sofd = FUNC_5(VAR_24.neterr,VAR_24.unixsocket,
            VAR_24.unixsocketperm, VAR_24.tcp_backlog);
        if (VAR_24.sofd == VAR_2) {
            FUNC_20(VAR_7, "Opening Unix socket: %s", VAR_24.neterr);
            FUNC_11(1);
        }
        FUNC_4(((void*)0),VAR_24.sofd);
    }


    if (VAR_24.ipfd_count == 0 && VAR_24.sofd < 0) {
        FUNC_20(VAR_7, "Configured to not listen anywhere, exiting.");
        FUNC_11(1);
    }


    VAR_24.jobs = FUNC_10(&VAR_21,((void*)0));
    VAR_24.queues = FUNC_10(&VAR_23,((void*)0));
    VAR_24.ready_queues = FUNC_10(&VAR_26,((void*)0));
    VAR_24.awakeme = FUNC_24(VAR_27);
    VAR_24.cronloops = 0;
    VAR_24.aof_child_pid = -1;
    FUNC_6();
    VAR_24.aof_buf = FUNC_19();
    FUNC_18();


    VAR_24.stat_starttime = FUNC_27(((void*)0));
    VAR_24.stat_peak_memory = 0;
    VAR_24.resident_set_size = 0;
    VAR_24.aof_last_write_status = VAR_6;
    VAR_24.aof_last_write_errno = 0;
    FUNC_29();



    if(FUNC_3(VAR_24.el, 1, VAR_25, ((void*)0), ((void*)0)) == VAR_0 ||
       FUNC_3(VAR_24.el, 1, VAR_22, ((void*)0), ((void*)0)) == VAR_0)
    {
        FUNC_21("Can't create the serverCron or processJobs time event.");
        FUNC_11(1);
    }



    for (VAR_28 = 0; VAR_28 < VAR_24.ipfd_count; VAR_28++) {
        if (FUNC_2(VAR_24.el, VAR_24.ipfd[VAR_28], VAR_1,
            VAR_18,((void*)0)) == VAR_0)
            {
                FUNC_21(
                    "Unrecoverable error creating server.ipfd file event.");
            }
    }
    if (VAR_24.sofd > 0 && FUNC_2(VAR_24.el,VAR_24.sofd,VAR_1,
        VAR_19,((void*)0)) == VAR_0) FUNC_21("Unrecoverable error creating server.sofd file event.");


    if (VAR_24.aof_state == VAR_3) {
        VAR_24.aof_fd = FUNC_16(VAR_24.aof_filename,
                               VAR_14|VAR_12|VAR_13,0644);
        if (VAR_24.aof_fd == -1) {
            FUNC_20(VAR_7, "Can't open the append-only file: %s",
                FUNC_26(VAR_20));
            FUNC_11(1);
        }
    }





    if (VAR_24.arch_bits == 32 && VAR_24.maxmemory == 0) {
        FUNC_20(VAR_7,"Warning: 32 bit instance detected but no memory limit set. Setting 3 GB maxmemory limit with 'noeviction' policy now.");
        VAR_24.maxmemory = 3072LL*(1024*1024);
        VAR_24.maxmemory_policy = VAR_11;
    }

    FUNC_8();
    FUNC_25();
    FUNC_13();
    FUNC_7();
}
