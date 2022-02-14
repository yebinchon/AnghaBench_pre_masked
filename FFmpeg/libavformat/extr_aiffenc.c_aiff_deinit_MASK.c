
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pict_list_end; int pict_list; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AIFFOutputContext ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0)
{
    AIFFOutputContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->pict_list, &VAR_1->pict_list_end);
}
