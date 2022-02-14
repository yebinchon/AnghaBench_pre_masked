
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_regions; int * length; int * address; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_1__ HWMapDescriptor ;
typedef TYPE_2__ DRMMapping ;
typedef int AVHWFramesContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(AVHWFramesContext *VAR_0,
                            HWMapDescriptor *VAR_1)
{
    DRMMapping *VAR_2 = VAR_1->priv;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2->nb_regions; VAR_3++)
        FUNC_1(VAR_2->address[VAR_3], VAR_2->length[VAR_3]);

    FUNC_0(VAR_2);
}
