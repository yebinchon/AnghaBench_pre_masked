
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int address; int subtype; } ;
typedef TYPE_1__ esp_partition_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__ const*) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static const esp_partition_t * FUNC_3(void)
{
    const esp_partition_t *VAR_1 = FUNC_2(((void*)0));
    FUNC_1(((void*)0), VAR_1);
    FUNC_0(VAR_0, "Writing to partition subtype %d at offset 0x%x", VAR_1->subtype, VAR_1->address);
    return VAR_1;
}
