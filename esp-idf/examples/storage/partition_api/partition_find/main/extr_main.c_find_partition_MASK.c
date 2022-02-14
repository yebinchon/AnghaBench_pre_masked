
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_partition_type_t ;
struct TYPE_3__ {char* size; int address; int label; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_partition_subtype_t ;


 int FUNC_0 (int ,char*,int ,int ,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(esp_partition_type_t VAR_1, esp_partition_subtype_t VAR_2, const char* VAR_3)
{
    FUNC_0(VAR_0, "Find partition with type %s, subtype %s, label %s...", FUNC_3(VAR_1), FUNC_2(VAR_2),
                    VAR_3 == ((void*)0) ? "NULL (unspecified)" : VAR_3);
    const esp_partition_t * VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    FUNC_0(VAR_0, "\tfound partition '%s' at offset 0x%x with size 0x%x", VAR_4->label, VAR_4->address, VAR_4->size);
}
