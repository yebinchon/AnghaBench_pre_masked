
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UID ;
struct TYPE_8__ {int packages_count; int * packages_refs; } ;
struct TYPE_7__ {int package_uid; int package_ul; } ;
typedef TYPE_1__ MXFPackage ;
typedef TYPE_2__ MXFContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static MXFPackage* FUNC_2(MXFContext *VAR_1, UID VAR_2, UID VAR_3)
{
    MXFPackage *VAR_4 = ((void*)0);
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1->packages_count; VAR_5++) {
        VAR_4 = FUNC_1(VAR_1, &VAR_1->packages_refs[VAR_5], VAR_0);
        if (!VAR_4)
            continue;

        if (!FUNC_0(VAR_4->package_ul, VAR_2, 16) && !FUNC_0(VAR_4->package_uid, VAR_3, 16))
            return VAR_4;
    }
    return ((void*)0);
}
