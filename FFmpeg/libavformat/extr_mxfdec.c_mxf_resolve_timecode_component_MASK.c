
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UID ;
struct TYPE_7__ {int input_segment_ref; } ;
struct TYPE_6__ {int type; } ;
typedef TYPE_1__ MXFTimecodeComponent ;
typedef TYPE_1__ MXFStructuralComponent ;
typedef TYPE_3__ MXFPulldownComponent ;
typedef int MXFContext ;


 int const VAR_0 ;


 TYPE_1__* FUNC_0 (int *,int *,int const) ;

__attribute__((used)) static MXFTimecodeComponent* FUNC_1(MXFContext *VAR_1, UID *VAR_2)
{
    MXFStructuralComponent *VAR_3 = ((void*)0);
    MXFPulldownComponent *VAR_4 = ((void*)0);

    VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
    if (!VAR_3)
        return ((void*)0);

    switch (VAR_3->type) {
    case 128:
        return (MXFTimecodeComponent*)VAR_3;
    case 129:
        VAR_4 = (MXFPulldownComponent*)VAR_3;
        return FUNC_0(VAR_1, &VAR_4->input_segment_ref, 128);
    default:
        break;
    }
    return ((void*)0);
}
