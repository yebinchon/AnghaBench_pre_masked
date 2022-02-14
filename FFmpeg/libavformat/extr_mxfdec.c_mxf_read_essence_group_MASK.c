
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int structural_components_count; int structural_components_refs; int duration; } ;
typedef TYPE_1__ MXFEssenceGroup ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFEssenceGroup *VAR_6 = VAR_0;
    switch (VAR_2) {
    case 0x0202:
        VAR_6->duration = FUNC_0(VAR_1);
        break;
    case 0x0501:
        return FUNC_1(VAR_1, &VAR_6->structural_components_refs,
                                             &VAR_6->structural_components_count);
    }
    return 0;
}
