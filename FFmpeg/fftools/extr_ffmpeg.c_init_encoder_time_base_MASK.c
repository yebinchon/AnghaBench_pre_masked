
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int * ctx; } ;
struct TYPE_14__ {scalar_t__ num; } ;
struct TYPE_15__ {TYPE_4__ time_base; } ;
struct TYPE_13__ {TYPE_1__* st; } ;
struct TYPE_12__ {size_t file_index; TYPE_4__ enc_timebase; TYPE_5__* enc_ctx; } ;
struct TYPE_11__ {TYPE_4__ time_base; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ InputStream ;
typedef TYPE_4__ AVRational ;
typedef int AVFormatContext ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 TYPE_6__** VAR_1 ;

__attribute__((used)) static void FUNC_2(OutputStream *VAR_2, AVRational VAR_3)
{
    InputStream *VAR_4 = FUNC_1(VAR_2);
    AVCodecContext *VAR_5 = VAR_2->enc_ctx;
    AVFormatContext *VAR_6;

    if (VAR_2->enc_timebase.num > 0) {
        VAR_5->time_base = VAR_2->enc_timebase;
        return;
    }

    if (VAR_2->enc_timebase.num < 0) {
        if (VAR_4) {
            VAR_5->time_base = VAR_4->st->time_base;
            return;
        }

        VAR_6 = VAR_1[VAR_2->file_index]->ctx;
        FUNC_0(VAR_6, VAR_0, "Input stream data not available, using default time base\n");
    }

    VAR_5->time_base = VAR_3;
}
