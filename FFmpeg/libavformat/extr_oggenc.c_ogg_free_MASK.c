
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int nb_streams; TYPE_5__** streams; TYPE_4__* priv_data; } ;
struct TYPE_14__ {TYPE_2__* priv_data; TYPE_1__* codecpar; } ;
struct TYPE_13__ {TYPE_3__* page_list; } ;
struct TYPE_12__ {struct TYPE_12__* next; } ;
struct TYPE_11__ {struct TYPE_11__** header; } ;
struct TYPE_10__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ OGGStreamContext ;
typedef TYPE_3__ OGGPageList ;
typedef TYPE_4__ OGGContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_4)
{
    OGGContext *VAR_5 = VAR_4->priv_data;
    OGGPageList *VAR_6 = VAR_5->page_list;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_streams; VAR_7++) {
        AVStream *VAR_8 = VAR_4->streams[VAR_7];
        OGGStreamContext *VAR_9 = VAR_8->priv_data;
        if (!VAR_9)
            continue;
        if (VAR_8->codecpar->codec_id == VAR_0 ||
            VAR_8->codecpar->codec_id == VAR_2 ||
            VAR_8->codecpar->codec_id == VAR_1 ||
            VAR_8->codecpar->codec_id == VAR_3) {
            FUNC_1(&VAR_9->header[0]);
        }
        FUNC_1(&VAR_9->header[1]);
        FUNC_1(&VAR_8->priv_data);
    }

    while (VAR_6) {
        OGGPageList *VAR_10 = VAR_6->next;
        FUNC_0(VAR_6);
        VAR_6 = VAR_10;
    }
    VAR_5->page_list = ((void*)0);
}
