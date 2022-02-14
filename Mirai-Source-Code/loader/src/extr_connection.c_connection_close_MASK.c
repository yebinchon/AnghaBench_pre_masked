
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int addr; char* user; char* pass; char* arch; int port; } ;
struct TYPE_4__ {scalar_t__ deadline; int data; } ;
struct connection {int fd; int state_telnet; int lock; TYPE_3__* srv; TYPE_2__ info; scalar_t__ success; scalar_t__ rdbuf_pos; int rdbuf; void* ctrlc_retry; void* retry_bin; void* open; scalar_t__ last_recv; TYPE_1__ output_buffer; } ;
struct TYPE_6__ {int curr_open; int total_failures; int total_successes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int,int,int,int,char*,char*,char*,...) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

void FUNC_9(struct connection *VAR_3)
{
    FUNC_7(&VAR_3->lock);

    if (VAR_3->open)
    {



        FUNC_4(VAR_3->output_buffer.data, 0, sizeof(VAR_3->output_buffer.data));
        VAR_3->output_buffer.deadline = 0;
        VAR_3->last_recv = 0;
        VAR_3->open = VAR_0;
        VAR_3->retry_bin = VAR_0;
        VAR_3->ctrlc_retry = VAR_0;
        FUNC_4(VAR_3->rdbuf, 0, sizeof(VAR_3->rdbuf));
        VAR_3->rdbuf_pos = 0;

        if (VAR_3->srv == ((void*)0))
        {
            FUNC_6("srv == NULL\n");
            return;
        }

        if (VAR_3->success)
        {
            FUNC_1(&VAR_3->srv->total_successes);
            FUNC_3(VAR_2, "OK|%d.%d.%d.%d:%d %s:%s %s\n",
                VAR_3->info.addr & 0xff, (VAR_3->info.addr >> 8) & 0xff, (VAR_3->info.addr >> 16) & 0xff, (VAR_3->info.addr >> 24) & 0xff,
                FUNC_5(VAR_3->info.port),
                VAR_3->info.user, VAR_3->info.pass, VAR_3->info.arch);
        }
        else
        {
            FUNC_1(&VAR_3->srv->total_failures);
            FUNC_3(VAR_2, "ERR|%d.%d.%d.%d:%d %s:%s %s|%d\n",
                VAR_3->info.addr & 0xff, (VAR_3->info.addr >> 8) & 0xff, (VAR_3->info.addr >> 16) & 0xff, (VAR_3->info.addr >> 24) & 0xff,
                FUNC_5(VAR_3->info.port),
                VAR_3->info.user, VAR_3->info.pass, VAR_3->info.arch,
                VAR_3->state_telnet);
        }
    }
    VAR_3->state_telnet = VAR_1;

    if (VAR_3->fd != -1)
    {
        FUNC_2(VAR_3->fd);
        VAR_3->fd = -1;
        FUNC_0(&VAR_3->srv->curr_open);
    }

    FUNC_8(&VAR_3->lock);
}
