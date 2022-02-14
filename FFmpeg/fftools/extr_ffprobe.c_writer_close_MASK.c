
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* priv; TYPE_1__* writer; int * section_pbuf; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_7__ {scalar_t__ priv_class; int (* uninit ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(WriterContext **VAR_1)
{
    int VAR_2;

    if (!*VAR_1)
        return;

    if ((*VAR_1)->writer->uninit)
        (*VAR_1)->writer->uninit(*VAR_1);
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_0(&(*VAR_1)->section_pbuf[VAR_2], ((void*)0));
    if ((*VAR_1)->writer->priv_class)
        FUNC_2((*VAR_1)->priv);
    FUNC_1(&((*VAR_1)->priv));
    FUNC_2(*VAR_1);
    FUNC_1(VAR_1);
}
