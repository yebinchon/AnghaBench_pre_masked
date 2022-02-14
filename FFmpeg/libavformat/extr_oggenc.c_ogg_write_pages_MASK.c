
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {size_t stream_index; } ;
struct TYPE_14__ {TYPE_1__** streams; TYPE_4__* priv_data; } ;
struct TYPE_13__ {TYPE_3__* page_list; } ;
struct TYPE_12__ {struct TYPE_12__* next; TYPE_8__ page; } ;
struct TYPE_11__ {int page_count; } ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ OGGStreamContext ;
typedef TYPE_3__ OGGPageList ;
typedef TYPE_4__ OGGContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (TYPE_5__*,TYPE_8__*,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0, int VAR_1)
{
    OGGContext *VAR_2 = VAR_0->priv_data;
    OGGPageList *VAR_3, *VAR_4;

    if (!VAR_2->page_list)
        return;

    for (VAR_4 = VAR_2->page_list; VAR_4; ) {
        OGGStreamContext *VAR_5 =
            VAR_0->streams[VAR_4->page.stream_index]->priv_data;
        if (VAR_5->page_count < 2 && !VAR_1)
            break;
        FUNC_1(VAR_0, &VAR_4->page,
                       VAR_1 == 1 && VAR_5->page_count == 1 ? 4 : 0);
        VAR_3 = VAR_4->next;
        FUNC_0(&VAR_4);
        VAR_4 = VAR_3;
    }
    VAR_2->page_list = VAR_4;
}
