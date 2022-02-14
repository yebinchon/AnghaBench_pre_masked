
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fc; } ;
struct TYPE_8__ {scalar_t__ type; int sub_descriptors_count; int linked_track_id; int * sub_descriptors_refs; } ;
typedef TYPE_1__ MXFDescriptor ;
typedef TYPE_2__ MXFContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *,scalar_t__) ;

__attribute__((used)) static MXFDescriptor* FUNC_2(MXFContext *VAR_3, MXFDescriptor *VAR_4, int VAR_5)
{
    MXFDescriptor *VAR_6 = ((void*)0);
    int VAR_7;

    if (!VAR_4)
        return ((void*)0);

    if (VAR_4->type == VAR_2) {
        for (VAR_7 = 0; VAR_7 < VAR_4->sub_descriptors_count; VAR_7++) {
            VAR_6 = FUNC_1(VAR_3, &VAR_4->sub_descriptors_refs[VAR_7], VAR_1);

            if (!VAR_6) {
                FUNC_0(VAR_3->fc, VAR_0, "could not resolve sub descriptor strong ref\n");
                continue;
            }
            if (VAR_6->linked_track_id == VAR_5) {
                return VAR_6;
            }
        }
    } else if (VAR_4->type == VAR_1)
        return VAR_4;

    return ((void*)0);
}
