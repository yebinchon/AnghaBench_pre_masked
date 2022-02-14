
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int is_streamed; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int child_count; TYPE_5__* child; } ;
typedef TYPE_2__ TeeContext ;
struct TYPE_13__ {int is_streamed; } ;
struct TYPE_12__ {TYPE_6__* url_context; } ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const**,int ) ;
 void* FUNC_4 (TYPE_5__*,int,int) ;
 int FUNC_5 (char const*,char*,char const**) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,char*,int **,char**) ;
 int FUNC_7 (TYPE_6__**,char*,int,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_9 (char const*,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_4, const char *VAR_5, int VAR_6)
{
    TeeContext *VAR_7 = VAR_4->priv_data;
    int VAR_8, VAR_9;

    FUNC_5(VAR_5, "tee:", &VAR_5);

    if (VAR_6 & VAR_0)
        return FUNC_0(VAR_2);

    while (*VAR_5) {
        char *VAR_10 = FUNC_3(&VAR_5, VAR_3);
        char *VAR_11 = ((void*)0);
        void *VAR_12;
        AVDictionary *VAR_13 = ((void*)0);
        if (!VAR_10) {
            VAR_8 = FUNC_0(VAR_1);
            goto fail;
        }

        VAR_12 = FUNC_4(VAR_7->child, VAR_7->child_count + 1, sizeof(*VAR_7->child));
        if (!VAR_12) {
            VAR_8 = FUNC_0(VAR_1);
            goto loop_fail;
        }
        VAR_7->child = VAR_12;
        FUNC_8(&VAR_7->child[VAR_7->child_count], 0, sizeof(VAR_7->child[VAR_7->child_count]));

        VAR_8 = FUNC_6(VAR_4, VAR_10, &VAR_13, &VAR_11);
        if (VAR_8 < 0)
            goto loop_fail;

        VAR_8 = FUNC_7(&VAR_7->child[VAR_7->child_count].url_context, VAR_11, VAR_6,
                                   &VAR_4->interrupt_callback, &VAR_13,
                                   VAR_4->protocol_whitelist, VAR_4->protocol_blacklist,
                                   VAR_4);
loop_fail:
        FUNC_2(&VAR_10);
        FUNC_1(&VAR_13);
        if (VAR_8 < 0)
            goto fail;
        VAR_7->child_count++;

        if (FUNC_9(VAR_5, VAR_3))
            VAR_5++;
    }

    VAR_4->is_streamed = 0;
    for (VAR_9=0; VAR_9<VAR_7->child_count; VAR_9++) {
        VAR_4->is_streamed |= VAR_7->child[VAR_9].url_context->is_streamed;
    }

    return 0;
fail:
    FUNC_10(VAR_4);
    return VAR_8;
}
