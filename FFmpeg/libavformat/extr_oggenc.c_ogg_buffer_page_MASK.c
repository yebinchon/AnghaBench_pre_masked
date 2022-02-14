
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int granule; int start_granule; } ;
struct TYPE_16__ {TYPE_3__* priv_data; } ;
struct TYPE_15__ {TYPE_2__* page_list; } ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_8__ page; } ;
struct TYPE_13__ {int page_count; TYPE_8__ page; } ;
typedef TYPE_1__ OGGStreamContext ;
typedef TYPE_2__ OGGPageList ;
typedef TYPE_3__ OGGContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, OGGStreamContext *VAR_2)
{
    OGGContext *VAR_3 = VAR_1->priv_data;
    OGGPageList **VAR_4 = &VAR_3->page_list;
    OGGPageList *VAR_5 = FUNC_1(sizeof(*VAR_5));

    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_5->page = VAR_2->page;

    VAR_2->page.start_granule = FUNC_3(VAR_2, VAR_2->page.granule);
    VAR_2->page_count++;
    FUNC_4(VAR_2);

    while (*VAR_4) {
        if (FUNC_2(VAR_1, &(*VAR_4)->page, &VAR_5->page))
            break;
        VAR_4 = &(*VAR_4)->next;
    }
    VAR_5->next = *VAR_4;
    *VAR_4 = VAR_5;

    return 0;
}
