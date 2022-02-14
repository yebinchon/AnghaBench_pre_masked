
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int url ;
typedef int headers ;
struct TYPE_8__ {scalar_t__ protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {scalar_t__ protocol_whitelist; int priv_data; } ;
struct TYPE_9__ {scalar_t__ port; char* client_id; int initialized; TYPE_5__* stream; int host; scalar_t__ tls; } ;
typedef TYPE_2__ RTMP_HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (int ,char*,char*,int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,int *,int ,int ,int,scalar_t__*,int *,int ,char const*) ;
 int FUNC_6 (char*,int,char*,int *,int ,scalar_t__,char*) ;
 int FUNC_7 (TYPE_5__**,char*,int ,int *) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*,char*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,int,char*) ;

__attribute__((used)) static int FUNC_12(URLContext *VAR_6, const char *VAR_7, int VAR_8)
{
    RTMP_HTTPContext *VAR_9 = VAR_6->priv_data;
    char VAR_10[1024], VAR_11[1024];
    int VAR_12, VAR_13 = 0;

    FUNC_5(((void*)0), 0, ((void*)0), 0, VAR_9->host, sizeof(VAR_9->host), &VAR_9->port,
                 ((void*)0), 0, VAR_7);
    if (VAR_9->tls) {
        if (VAR_9->port < 0)
            VAR_9->port = VAR_4;
        FUNC_6(VAR_11, sizeof(VAR_11), "https", ((void*)0), VAR_9->host, VAR_9->port, "/open/1");
    } else {
        if (VAR_9->port < 0)
            VAR_9->port = VAR_5;
        FUNC_6(VAR_11, sizeof(VAR_11), "http", ((void*)0), VAR_9->host, VAR_9->port, "/open/1");
    }


    if ((VAR_12 = FUNC_7(&VAR_9->stream, VAR_11, VAR_1, &VAR_6->interrupt_callback)) < 0)
        goto fail;


    FUNC_11(VAR_10, sizeof(VAR_10),
             "Cache-Control: no-cache\r\n"
             "Content-type: application/x-fcs\r\n"
             "User-Agent: Shockwave Flash\r\n");
    FUNC_2(VAR_9->stream->priv_data, "headers", VAR_10, 0);
    FUNC_2(VAR_9->stream->priv_data, "multiple_requests", "1", 0);
    FUNC_3(VAR_9->stream->priv_data, "post_data", "", 1, 0);

    if (!VAR_9->stream->protocol_whitelist && VAR_6->protocol_whitelist) {
        VAR_9->stream->protocol_whitelist = FUNC_4(VAR_6->protocol_whitelist);
        if (!VAR_9->stream->protocol_whitelist) {
            VAR_12 = FUNC_0(VAR_3);
            goto fail;
        }
    }


    if ((VAR_12 = FUNC_8(VAR_9->stream, ((void*)0))) < 0)
        goto fail;


    for (;;) {
        VAR_12 = FUNC_9(VAR_9->stream, VAR_9->client_id + VAR_13, sizeof(VAR_9->client_id) - VAR_13);
        if (!VAR_12 || VAR_12 == VAR_0)
            break;
        if (VAR_12 < 0)
            goto fail;
        VAR_13 += VAR_12;
        if (VAR_13 == sizeof(VAR_9->client_id)) {
            VAR_12 = FUNC_0(VAR_2);
            goto fail;
        }
    }
    while (VAR_13 > 0 && FUNC_1(VAR_9->client_id[VAR_13 - 1]))
        VAR_13--;
    VAR_9->client_id[VAR_13] = '\0';


    VAR_9->initialized = 1;
    return 0;

fail:
    FUNC_10(VAR_6);
    return VAR_12;
}
