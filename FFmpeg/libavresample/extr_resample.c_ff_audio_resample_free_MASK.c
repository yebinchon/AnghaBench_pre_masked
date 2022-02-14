
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filter_bank; int buffer; } ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int *) ;

void FUNC_3(ResampleContext **VAR_0)
{
    if (!*VAR_0)
        return;
    FUNC_2(&(*VAR_0)->buffer);
    FUNC_0((*VAR_0)->filter_bank);
    FUNC_1(VAR_0);
}
