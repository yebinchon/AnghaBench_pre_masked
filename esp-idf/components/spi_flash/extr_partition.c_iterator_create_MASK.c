
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_partition_type_t ;
typedef int esp_partition_subtype_t ;
struct TYPE_3__ {char const* label; int * info; int next_item; int subtype; int type; } ;
typedef TYPE_1__ esp_partition_iterator_opaque_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static esp_partition_iterator_opaque_t* FUNC_2(esp_partition_type_t VAR_1,
        esp_partition_subtype_t VAR_2, const char* VAR_3)
{
    esp_partition_iterator_opaque_t* VAR_4 =
            (esp_partition_iterator_opaque_t*) FUNC_1(sizeof(esp_partition_iterator_opaque_t));
    VAR_4->type = VAR_1;
    VAR_4->subtype = VAR_2;
    VAR_4->label = VAR_3;
    VAR_4->next_item = FUNC_0(&VAR_0);
    VAR_4->info = ((void*)0);
    return VAR_4;
}
