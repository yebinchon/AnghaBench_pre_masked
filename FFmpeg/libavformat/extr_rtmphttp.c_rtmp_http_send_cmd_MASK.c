
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uri ;
typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int priv_data; } ;
struct TYPE_7__ {scalar_t__ nb_bytes_read; TYPE_4__* stream; scalar_t__ out_size; int out_data; int seq; int client_id; int port; int host; } ;
typedef TYPE_2__ RTMP_HTTPContext ;


 int FUNC_0 (int ,char*,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (char*,int,char*,int *,int ,int ,char*,char const*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_0, const char *VAR_1)
{
    RTMP_HTTPContext *VAR_2 = VAR_0->priv_data;
    char VAR_3[2048];
    uint8_t VAR_4;
    int VAR_5;

    FUNC_2(VAR_3, sizeof(VAR_3), "http", ((void*)0), VAR_2->host, VAR_2->port,
                "/%s/%s/%d", VAR_1, VAR_2->client_id, VAR_2->seq++);

    FUNC_0(VAR_2->stream->priv_data, "post_data", VAR_2->out_data,
                   VAR_2->out_size, 0);


    if ((VAR_5 = FUNC_1(VAR_2->stream, VAR_3)) < 0)
        return VAR_5;


    VAR_2->out_size = 0;


    if ((VAR_5 = FUNC_3(VAR_2->stream, &VAR_4, 1)) < 0)
        return VAR_5;


    VAR_2->nb_bytes_read = 0;

    return VAR_5;
}
