
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int nb_items; TYPE_1__* item; int complete; } ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {TYPE_4__ frag_index; int next_root_atom; } ;
struct TYPE_7__ {int moof_offset; int headers_read; } ;
typedef TYPE_2__ MOVContext ;
typedef int AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVStream *VAR_1, int64_t VAR_2)
{
    MOVContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;

    if (!VAR_3->frag_index.complete)
        return 0;

    VAR_4 = FUNC_1(&VAR_3->frag_index, VAR_1, VAR_2);
    if (VAR_4 < 0)
        VAR_4 = 0;
    if (!VAR_3->frag_index.item[VAR_4].headers_read)
        return FUNC_0(VAR_0, -1, VAR_4);
    if (VAR_4 + 1 < VAR_3->frag_index.nb_items)
        VAR_3->next_root_atom = VAR_3->frag_index.item[VAR_4 + 1].moof_offset;

    return 0;
}
