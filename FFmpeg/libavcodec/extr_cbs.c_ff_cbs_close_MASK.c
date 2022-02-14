
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* priv_data; TYPE_1__* codec; } ;
struct TYPE_6__ {int (* close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ CodedBitstreamContext ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(CodedBitstreamContext **VAR_0)
{
    CodedBitstreamContext *VAR_1 = *VAR_0;

    if (!VAR_1)
        return;

    if (VAR_1->codec && VAR_1->codec->close)
        VAR_1->codec->close(VAR_1);

    FUNC_0(&VAR_1->priv_data);
    FUNC_0(VAR_0);
}
