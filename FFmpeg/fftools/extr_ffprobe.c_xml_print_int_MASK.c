
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t level; scalar_t__* nb_item; } ;
typedef TYPE_1__ WriterContext ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(WriterContext *VAR_0, const char *VAR_1, long long int VAR_2)
{
    if (VAR_0->nb_item[VAR_0->level])
        FUNC_0(" ");
    FUNC_0("%s=\"%lld\"", VAR_1, VAR_2);
}
