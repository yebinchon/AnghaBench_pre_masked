
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* label; scalar_t__ flash_chip; scalar_t__ address; scalar_t__ size; scalar_t__ encrypted; int subtype; int type; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int * esp_partition_iterator_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,char const*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*) ;

const esp_partition_t *FUNC_6(const esp_partition_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    const char *VAR_1 = (FUNC_5(VAR_0->label) > 0) ? VAR_0->label : ((void*)0);
    esp_partition_iterator_t VAR_2 = FUNC_1(VAR_0->type,
                                                     VAR_0->subtype,
                                                     VAR_1);
    while (VAR_2 != ((void*)0)) {
        const esp_partition_t *VAR_3 = FUNC_2(VAR_2);

        if (VAR_3->flash_chip == VAR_0->flash_chip
            && VAR_3->address == VAR_0->address
            && VAR_0->size == VAR_3->size
            && VAR_0->encrypted == VAR_3->encrypted) {
            FUNC_3(VAR_2);
            return VAR_3;
        }
        VAR_2 = FUNC_4(VAR_2);
    }
    FUNC_3(VAR_2);
    return ((void*)0);
}
