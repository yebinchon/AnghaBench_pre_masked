
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UID ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ MXFStructuralComponent ;
typedef int MXFEssenceGroup ;
typedef int MXFContext ;


 int VAR_0 ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static MXFStructuralComponent* FUNC_2(MXFContext *VAR_1, UID *VAR_2)
{
    MXFStructuralComponent *VAR_3 = ((void*)0);

    VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
    if (!VAR_3)
        return ((void*)0);
    switch (VAR_3->type) {
        case 128:
            return VAR_3;
        case 129:
            return FUNC_0(VAR_1, (MXFEssenceGroup*) VAR_3);
        default:
            break;
    }
    return ((void*)0);
}
