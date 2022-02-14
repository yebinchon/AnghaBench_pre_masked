
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int layout_name ;
struct TYPE_7__ {int channel_layout; int channels; } ;
struct TYPE_6__ {TYPE_1__* st; int file_index; int guess_layout_max; TYPE_3__* dec_ctx; } ;
struct TYPE_5__ {int index; } ;
typedef TYPE_2__ InputStream ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int ,int ,char*) ;

int FUNC_3(InputStream *VAR_1)
{
    AVCodecContext *VAR_2 = VAR_1->dec_ctx;

    if (!VAR_2->channel_layout) {
        char VAR_3[256];

        if (VAR_2->channels > VAR_1->guess_layout_max)
            return 0;
        VAR_2->channel_layout = FUNC_1(VAR_2->channels);
        if (!VAR_2->channel_layout)
            return 0;
        FUNC_0(VAR_3, sizeof(VAR_3),
                                     VAR_2->channels, VAR_2->channel_layout);
        FUNC_2(((void*)0), VAR_0, "Guessed Channel Layout for Input Stream "
               "#%d.%d : %s\n", VAR_1->file_index, VAR_1->st->index, VAR_3);
    }
    return 1;
}
