
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t address; size_t size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int * esp_partition_iterator_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int ,int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 size_t FUNC_6 (TYPE_1__ const* (*) ()) ;

const esp_partition_t* FUNC_7(void)
{
    static const esp_partition_t *VAR_3 = ((void*)0);





    if (VAR_3 != ((void*)0)) {
        return VAR_3;
    }



    size_t VAR_4 = FUNC_6(FUNC_7);

    FUNC_1 (VAR_4 != VAR_2);

    esp_partition_iterator_t VAR_5 = FUNC_2(VAR_1,
                                                     VAR_0,
                                                     ((void*)0));
    FUNC_1(VAR_5 != ((void*)0));

    while (VAR_5 != ((void*)0)) {
        const esp_partition_t *VAR_6 = FUNC_3(VAR_5);
        if (VAR_6->address <= VAR_4 && VAR_6->address + VAR_6->size > VAR_4) {
            FUNC_4(VAR_5);
            VAR_3 = VAR_6;
            return VAR_6;
        }
        VAR_5 = FUNC_5(VAR_5);
    }

    FUNC_0();
}
