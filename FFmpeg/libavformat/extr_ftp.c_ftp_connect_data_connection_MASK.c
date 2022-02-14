
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int buf ;
struct TYPE_8__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {int rw_timeout; int state; scalar_t__ position; int conn_data; int server_data_port; int hostname; } ;
typedef TYPE_2__ FTPContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,int,int ) ;
 int FUNC_2 (char*,int,char*,int *,int ,int ,int *) ;
 int FUNC_3 (int *,char*,int ,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_2)
{
    int VAR_3;
    char VAR_4[VAR_0];
    AVDictionary *VAR_5 = ((void*)0);
    FTPContext *VAR_6 = VAR_2->priv_data;

    if (!VAR_6->conn_data) {

        if (FUNC_5(VAR_6) < 0) {

            if ((VAR_3 = FUNC_4(VAR_6)) < 0)
                return VAR_3;
        }

        FUNC_2(VAR_4, sizeof(VAR_4), "tcp", ((void*)0), VAR_6->hostname, VAR_6->server_data_port, ((void*)0));
        if (VAR_6->rw_timeout != -1) {
            FUNC_1(&VAR_5, "timeout", VAR_6->rw_timeout, 0);
        }
        VAR_3 = FUNC_3(&VAR_6->conn_data, VAR_4, VAR_2->flags,
                                   &VAR_2->interrupt_callback, &VAR_5,
                                   VAR_2->protocol_whitelist, VAR_2->protocol_blacklist, VAR_2);
        FUNC_0(&VAR_5);
        if (VAR_3 < 0)
            return VAR_3;

        if (VAR_6->position)
            if ((VAR_3 = FUNC_6(VAR_6, VAR_6->position)) < 0)
                return VAR_3;
    }
    VAR_6->state = VAR_1;
    return 0;
}
