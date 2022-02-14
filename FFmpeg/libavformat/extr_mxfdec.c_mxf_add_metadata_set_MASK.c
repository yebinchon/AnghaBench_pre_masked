
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metadata_sets_count; int ** metadata_sets; } ;
typedef int MXFMetadataSet ;
typedef TYPE_1__ MXFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int ** FUNC_1 (int **,int,int) ;

__attribute__((used)) static int FUNC_2(MXFContext *VAR_1, void *VAR_2)
{
    MXFMetadataSet **VAR_3;

    VAR_3 = FUNC_1(VAR_1->metadata_sets, VAR_1->metadata_sets_count + 1, sizeof(*VAR_1->metadata_sets));
    if (!VAR_3)
        return FUNC_0(VAR_0);
    VAR_1->metadata_sets = VAR_3;
    VAR_1->metadata_sets[VAR_1->metadata_sets_count] = VAR_2;
    VAR_1->metadata_sets_count++;
    return 0;
}
