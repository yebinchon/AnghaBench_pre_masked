
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sequence; int * next_frame; } ;
typedef TYPE_1__ VP9RawReorderContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(AVBSFContext *VAR_1)
{
    VP9RawReorderContext *VAR_2 = VAR_1->priv_data;

    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_0(VAR_2, VAR_3);
    VAR_2->next_frame = ((void*)0);
    VAR_2->sequence = 0;
}
