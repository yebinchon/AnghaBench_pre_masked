
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int essence_container_data_count; int essence_container_data_refs; int packages_count; int packages_refs; int fc; } ;
typedef TYPE_1__ MXFContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, AVIOContext *VAR_2, int VAR_3, int VAR_4, UID VAR_5, int64_t VAR_6)
{
    MXFContext *VAR_7 = VAR_1;
    switch (VAR_3) {
    case 0x1901:
        if (VAR_7->packages_refs)
            FUNC_1(VAR_7->fc, VAR_0, "Multiple packages_refs\n");
        FUNC_0(VAR_7->packages_refs);
        return FUNC_2(VAR_2, &VAR_7->packages_refs, &VAR_7->packages_count);
    case 0x1902:
        FUNC_0(VAR_7->essence_container_data_refs);
        return FUNC_2(VAR_2, &VAR_7->essence_container_data_refs, &VAR_7->essence_container_data_count);
    }
    return 0;
}
