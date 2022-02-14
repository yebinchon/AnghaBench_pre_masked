
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct server_worker {int bind_addrs_len; int max_open; char* wget_host_ip; char* tftp_host_ip; int workers_len; int thread_id; int efd; int to_thrd; int thread; struct server_worker* workers; struct server_worker* srv; TYPE_1__** estab_conns; int wget_host_port; int * bind_addrs; } ;
struct server {int bind_addrs_len; int max_open; char* wget_host_ip; char* tftp_host_ip; int workers_len; int thread_id; int efd; int to_thrd; int thread; struct server* workers; struct server* srv; TYPE_1__** estab_conns; int wget_host_port; int * bind_addrs; } ;
struct connection {int dummy; } ;
typedef int port_t ;
typedef int ipv4_t ;
struct TYPE_2__ {int lock; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct server_worker*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *,int ,struct server_worker*) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

struct server *FUNC_7(uint8_t VAR_3, uint8_t VAR_4, ipv4_t *VAR_5, uint32_t VAR_6, char *VAR_7, port_t VAR_8, char *VAR_9)
{
    struct server *VAR_10 = FUNC_0(1, sizeof (struct server));
    struct server_worker *VAR_11 = FUNC_0(VAR_3, sizeof (struct server_worker));
    int VAR_12;


    VAR_10->bind_addrs_len = VAR_4;
    VAR_10->bind_addrs = VAR_5;
    VAR_10->max_open = VAR_6;
    VAR_10->wget_host_ip = VAR_7;
    VAR_10->wget_host_port = VAR_8;
    VAR_10->tftp_host_ip = VAR_9;
    VAR_10->estab_conns = FUNC_0(VAR_6 * 2, sizeof (struct connection *));
    VAR_10->workers = FUNC_0(VAR_3, sizeof (struct server_worker));
    VAR_10->workers_len = VAR_3;

    if (VAR_10->estab_conns == ((void*)0))
    {
        FUNC_4("Failed to allocate establisted_connections array\n");
        FUNC_2(0);
    }


    for (VAR_12 = 0; VAR_12 < VAR_6 * 2; VAR_12++)
    {
        VAR_10->estab_conns[VAR_12] = FUNC_0(1, sizeof (struct connection));
        if (VAR_10->estab_conns[VAR_12] == ((void*)0))
        {
            FUNC_4("Failed to allocate connection %d\n", VAR_12);
            FUNC_2(-1);
        }
        FUNC_6(&(VAR_10->estab_conns[VAR_12]->lock), ((void*)0));
    }


    for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
    {
        struct server_worker *VAR_13 = &VAR_10->workers[VAR_12];

        VAR_13->srv = VAR_10;
        VAR_13->thread_id = VAR_12;

        if ((VAR_13->efd = FUNC_1(0)) == -1)
        {
            FUNC_4("Failed to initialize epoll context. Error code %d\n", VAR_0);
            FUNC_3(VAR_10->workers);
            FUNC_3(VAR_10);
            return ((void*)0);
        }

        FUNC_5(&VAR_13->thread, ((void*)0), VAR_2, VAR_13);
    }

    FUNC_5(&VAR_10->to_thrd, ((void*)0), VAR_1, VAR_10);

    return VAR_10;
}
