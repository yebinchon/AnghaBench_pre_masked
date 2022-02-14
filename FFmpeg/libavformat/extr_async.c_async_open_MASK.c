
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int is_streamed; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_15__ {int is_streamed; } ;
struct TYPE_14__ {TYPE_1__* opaque; int callback; } ;
struct TYPE_13__ {int ring; TYPE_5__* inner; int mutex; int cond_wakeup_main; int cond_wakeup_background; int async_buffer_thread; int logical_size; int interrupt_callback; } ;
typedef TYPE_2__ Context ;
typedef TYPE_3__ AVIOInterruptCB ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ,...) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__**,char const*,int,TYPE_3__*,int **,int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_13(URLContext *VAR_5, const char *VAR_6, int VAR_7, AVDictionary **VAR_8)
{
    Context *VAR_9 = VAR_5->priv_data;
    int VAR_10;
    AVIOInterruptCB VAR_11 = {.callback = VAR_4, .opaque = VAR_5};

    FUNC_2(VAR_6, "async:", &VAR_6);

    VAR_10 = FUNC_12(&VAR_9->ring, VAR_1, VAR_2);
    if (VAR_10 < 0)
        goto fifo_fail;


    VAR_9->interrupt_callback = VAR_5->interrupt_callback;
    VAR_10 = FUNC_4(&VAR_9->inner, VAR_6, VAR_7, &VAR_11, VAR_8, VAR_5->protocol_whitelist, VAR_5->protocol_blacklist, VAR_5);
    if (VAR_10 != 0) {
        FUNC_1(VAR_5, VAR_0, "ffurl_open failed : %s, %s\n", FUNC_0(VAR_10), VAR_6);
        goto url_fail;
    }

    VAR_9->logical_size = FUNC_5(VAR_9->inner);
    VAR_5->is_streamed = VAR_9->inner->is_streamed;

    VAR_10 = FUNC_10(&VAR_9->mutex, ((void*)0));
    if (VAR_10 != 0) {
        FUNC_1(VAR_5, VAR_0, "pthread_mutex_init failed : %s\n", FUNC_0(VAR_10));
        goto mutex_fail;
    }

    VAR_10 = FUNC_7(&VAR_9->cond_wakeup_main, ((void*)0));
    if (VAR_10 != 0) {
        FUNC_1(VAR_5, VAR_0, "pthread_cond_init failed : %s\n", FUNC_0(VAR_10));
        goto cond_wakeup_main_fail;
    }

    VAR_10 = FUNC_7(&VAR_9->cond_wakeup_background, ((void*)0));
    if (VAR_10 != 0) {
        FUNC_1(VAR_5, VAR_0, "pthread_cond_init failed : %s\n", FUNC_0(VAR_10));
        goto cond_wakeup_background_fail;
    }

    VAR_10 = FUNC_8(&VAR_9->async_buffer_thread, ((void*)0), VAR_3, VAR_5);
    if (VAR_10) {
        FUNC_1(VAR_5, VAR_0, "pthread_create failed : %s\n", FUNC_0(VAR_10));
        goto thread_fail;
    }

    return 0;

thread_fail:
    FUNC_6(&VAR_9->cond_wakeup_background);
cond_wakeup_background_fail:
    FUNC_6(&VAR_9->cond_wakeup_main);
cond_wakeup_main_fail:
    FUNC_9(&VAR_9->mutex);
mutex_fail:
    FUNC_3(VAR_9->inner);
url_fail:
    FUNC_11(&VAR_9->ring);
fifo_fail:
    return VAR_10;
}
