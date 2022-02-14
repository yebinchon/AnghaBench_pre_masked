
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int frm_flags; int frm_size; int * bufs; } ;
typedef TYPE_1__ SmackerContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    SmackerContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for(VAR_2 = 0; VAR_2 < 7; VAR_2++)
        FUNC_0(&VAR_1->bufs[VAR_2]);
    FUNC_0(&VAR_1->frm_size);
    FUNC_0(&VAR_1->frm_flags);

    return 0;
}
