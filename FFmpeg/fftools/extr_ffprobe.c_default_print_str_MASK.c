
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t level; TYPE_1__* section_pbuf; TYPE_3__* priv; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_7__ {int nokey; } ;
struct TYPE_5__ {char* str; } ;
typedef TYPE_3__ DefaultContext ;


 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(WriterContext *VAR_0, const char *VAR_1, const char *VAR_2)
{
    DefaultContext *VAR_3 = VAR_0->priv;

    if (!VAR_3->nokey)
        FUNC_0("%s%s=", VAR_0->section_pbuf[VAR_0->level].str, VAR_1);
    FUNC_0("%s\n", VAR_2);
}
