
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ subtype; int address; int type; } ;
typedef TYPE_1__ esp_partition_t ;


 int FUNC_0 (int ,char*,int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (int *,TYPE_1__ const*) ;
 TYPE_1__* FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static const esp_partition_t* FUNC_5(void)
{
    const esp_partition_t *VAR_2 = FUNC_3();
    const esp_partition_t *VAR_3 = FUNC_4();
    FUNC_0(VAR_1, "Running partition type %d subtype %d (offset 0x%08x)",
            VAR_3->type, VAR_3->subtype, VAR_3->address);
    FUNC_0(VAR_1, "Configured partition type %d subtype %d (offset 0x%08x)",
            VAR_2->type, VAR_2->subtype, VAR_2->address);
    FUNC_2(((void*)0), VAR_2);
    FUNC_2(((void*)0), VAR_3);
    if (VAR_3->subtype != VAR_0) {
        FUNC_1(VAR_3, VAR_2);
    }
    return VAR_3;
}
