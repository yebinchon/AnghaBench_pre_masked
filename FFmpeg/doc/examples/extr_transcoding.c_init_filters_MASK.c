
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {unsigned int nb_streams; TYPE_2__** streams; } ;
struct TYPE_11__ {int * filter_graph; int * buffersink_ctx; int * buffersrc_ctx; } ;
struct TYPE_10__ {int enc_ctx; int dec_ctx; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {scalar_t__ codec_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (unsigned int,int) ;
 TYPE_4__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ,int ,char const*) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static int FUNC_3(void)
{
    const char *VAR_6;
    unsigned int VAR_7;
    int VAR_8;
    VAR_3 = FUNC_1(VAR_4->nb_streams, sizeof(*VAR_3));
    if (!VAR_3)
        return FUNC_0(VAR_2);

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_streams; VAR_7++) {
        VAR_3[VAR_7].buffersrc_ctx = ((void*)0);
        VAR_3[VAR_7].buffersink_ctx = ((void*)0);
        VAR_3[VAR_7].filter_graph = ((void*)0);
        if (!(VAR_4->streams[VAR_7]->codecpar->codec_type == VAR_0
                || VAR_4->streams[VAR_7]->codecpar->codec_type == VAR_1))
            continue;


        if (VAR_4->streams[VAR_7]->codecpar->codec_type == VAR_1)
            VAR_6 = "null";
        else
            VAR_6 = "anull";
        VAR_8 = FUNC_2(&VAR_3[VAR_7], VAR_5[VAR_7].dec_ctx,
                VAR_5[VAR_7].enc_ctx, VAR_6);
        if (VAR_8)
            return VAR_8;
    }
    return 0;
}
