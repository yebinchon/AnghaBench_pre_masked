
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ start_pos; scalar_t__ size; int infofile; int file; } ;
struct TYPE_5__ {scalar_t__ cur_start_pos; int nb_fragments; scalar_t__ cur_pos; int * out2; int * out; TYPE_1__* ctx; int * tail_out; TYPE_3__** fragments; } ;
struct TYPE_4__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ Fragment ;
typedef int AVDictionary ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int ,int *,int **,int ,int ,int *) ;
 int FUNC_5 (int *,scalar_t__,int) ;

__attribute__((used)) static int64_t FUNC_6(void *VAR_4, int64_t VAR_5, int VAR_6)
{
    OutputStream *VAR_7 = VAR_4;
    int VAR_8;
    if (VAR_6 != VAR_3)
        return FUNC_0(VAR_2);
    if (VAR_7->tail_out) {
        if (VAR_7->out) {
            FUNC_3(VAR_7->out);
        }
        if (VAR_7->out2) {
            FUNC_3(VAR_7->out2);
        }
        VAR_7->out = VAR_7->tail_out;
        VAR_7->out2 = ((void*)0);
        VAR_7->tail_out = ((void*)0);
    }
    if (VAR_5 >= VAR_7->cur_start_pos) {
        if (VAR_7->out)
            FUNC_5(VAR_7->out, VAR_5 - VAR_7->cur_start_pos, VAR_3);
        VAR_7->cur_pos = VAR_5;
        return VAR_5;
    }
    for (VAR_8 = VAR_7->nb_fragments - 1; VAR_8 >= 0; VAR_8--) {
        Fragment *VAR_9 = VAR_7->fragments[VAR_8];
        if (VAR_5 >= VAR_9->start_pos && VAR_5 < VAR_9->start_pos + VAR_9->size) {
            int VAR_10;
            AVDictionary *VAR_11 = ((void*)0);
            VAR_7->tail_out = VAR_7->out;
            FUNC_2(&VAR_11, "truncate", "0", 0);
            VAR_10 = FUNC_4(&VAR_7->out, VAR_9->file, VAR_0,
                                       &VAR_7->ctx->interrupt_callback, &VAR_11, VAR_7->ctx->protocol_whitelist, VAR_7->ctx->protocol_blacklist, ((void*)0));
            FUNC_1(&VAR_11);
            if (VAR_10 < 0) {
                VAR_7->out = VAR_7->tail_out;
                VAR_7->tail_out = ((void*)0);
                return VAR_10;
            }
            FUNC_2(&VAR_11, "truncate", "0", 0);
            FUNC_4(&VAR_7->out2, VAR_9->infofile, VAR_0,
                                 &VAR_7->ctx->interrupt_callback, &VAR_11, VAR_7->ctx->protocol_whitelist, VAR_7->ctx->protocol_blacklist, ((void*)0));
            FUNC_1(&VAR_11);
            FUNC_5(VAR_7->out, VAR_5 - VAR_9->start_pos, VAR_3);
            if (VAR_7->out2)
                FUNC_5(VAR_7->out2, VAR_5 - VAR_9->start_pos, VAR_3);
            VAR_7->cur_pos = VAR_5;
            return VAR_5;
        }
    }
    return FUNC_0(VAR_1);
}
