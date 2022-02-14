
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t level; TYPE_1__* section_pbuf; scalar_t__* nb_item; TYPE_3__* priv; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_7__ {long long item_sep; int nokey; } ;
struct TYPE_5__ {char* str; } ;
typedef TYPE_3__ CompactContext ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(WriterContext *VAR_0, const char *VAR_1, long long int VAR_2)
{
    CompactContext *VAR_3 = VAR_0->priv;

    if (VAR_0->nb_item[VAR_0->level]) FUNC_0("%c", VAR_3->item_sep);
    if (!VAR_3->nokey)
        FUNC_0("%s%s=", VAR_0->section_pbuf[VAR_0->level].str, VAR_1);
    FUNC_0("%lld", VAR_2);
}
