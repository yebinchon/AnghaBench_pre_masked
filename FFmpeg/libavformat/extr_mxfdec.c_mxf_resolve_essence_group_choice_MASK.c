
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int structural_components_count; int * structural_components_refs; } ;
struct TYPE_8__ {int descriptor_ref; } ;
struct TYPE_7__ {int source_package_uid; int source_package_ul; } ;
typedef TYPE_1__ MXFStructuralComponent ;
typedef TYPE_2__ MXFPackage ;
typedef TYPE_3__ MXFEssenceGroup ;
typedef int MXFDescriptor ;
typedef int MXFContext ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ,int ) ;
 void* FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static MXFStructuralComponent* FUNC_2(MXFContext *VAR_2, MXFEssenceGroup *VAR_3)
{
    MXFStructuralComponent *VAR_4 = ((void*)0);
    MXFPackage *VAR_5 = ((void*)0);
    MXFDescriptor *VAR_6 = ((void*)0);
    int VAR_7;

    if (!VAR_3 || !VAR_3->structural_components_count)
        return ((void*)0);



    for (VAR_7 =0; VAR_7 < VAR_3->structural_components_count; VAR_7++){
        VAR_4 = FUNC_1(VAR_2, &VAR_3->structural_components_refs[VAR_7], VAR_1);
        if (!VAR_4)
            continue;

        if (!(VAR_5 = FUNC_0(VAR_2, VAR_4->source_package_ul, VAR_4->source_package_uid)))
            continue;

        VAR_6 = FUNC_1(VAR_2, &VAR_5->descriptor_ref, VAR_0);
        if (VAR_6)
            return VAR_4;
    }
    return ((void*)0);
}
