
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef TYPE_1__* multi_heap_handle_t ;
struct TYPE_26__ {void* data; } ;
typedef TYPE_2__ heap_block_t ;
struct TYPE_25__ {size_t free_bytes; scalar_t__ minimum_free_bytes; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (void*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (void*,void*,size_t) ;
 int FUNC_10 (void*,void*,size_t) ;
 TYPE_2__* FUNC_11 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,void*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 void* FUNC_15 (TYPE_1__*,size_t) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*,size_t,int *) ;

void *FUNC_17(multi_heap_handle_t VAR_0, void *VAR_1, size_t VAR_2)
{
    heap_block_t *VAR_3 = FUNC_5(VAR_1);
    void *VAR_4;
    VAR_2 = FUNC_0(VAR_2);

    FUNC_2(VAR_0 != ((void*)0));

    if (VAR_1 == ((void*)0)) {
        return FUNC_15(VAR_0, VAR_2);
    }

    FUNC_3(VAR_0, VAR_3);

    FUNC_1(!FUNC_8(VAR_3), VAR_3);

    if (VAR_2 == 0) {


        FUNC_12(VAR_0, VAR_1);
        return ((void*)0);
    }

    if (VAR_0 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_13(VAR_0);
    VAR_4 = ((void*)0);

    if (VAR_2 <= FUNC_4(VAR_3)) {

        FUNC_16(VAR_0, VAR_3, VAR_2, ((void*)0));
        VAR_4 = VAR_3->data;
    }
    else if (VAR_0->free_bytes < VAR_2 - FUNC_4(VAR_3)) {

        FUNC_14(VAR_0);
        return ((void*)0);
    }


    if (VAR_4 == ((void*)0)) {

        heap_block_t *VAR_5 = VAR_3;
        size_t VAR_6 = FUNC_4(VAR_5);
        heap_block_t *VAR_7 = FUNC_6(VAR_3);
        heap_block_t *VAR_8 = FUNC_7(VAR_0, VAR_3);


        size_t VAR_9 = (FUNC_6(VAR_8) == VAR_3) ? FUNC_4(VAR_8) : 0;


        if (FUNC_8(VAR_7) && (FUNC_4(VAR_3) + FUNC_4(VAR_7) + VAR_9 >= VAR_2)) {
            VAR_3 = FUNC_11(VAR_0, VAR_3, VAR_7);
        }



        if (VAR_9 > 0 && (FUNC_4(VAR_3) + VAR_9 >= VAR_2)) {
            VAR_3 = FUNC_11(VAR_0, VAR_8, VAR_3);


        }

        if (FUNC_4(VAR_3) >= VAR_2) {
            FUNC_10(VAR_3->data, VAR_5->data, VAR_6);
            FUNC_16(VAR_0, VAR_3, VAR_2, ((void*)0));
            VAR_4 = VAR_3->data;
        }
    }

    if (VAR_4 == ((void*)0)) {




        VAR_4 = FUNC_15(VAR_0, VAR_2);
        if (VAR_4 != ((void*)0)) {
            FUNC_9(VAR_4, VAR_3->data, FUNC_4(VAR_3));
            FUNC_12(VAR_0, VAR_3->data);
        }
    }

    if (VAR_0->free_bytes < VAR_0->minimum_free_bytes) {
        VAR_0->minimum_free_bytes = VAR_0->free_bytes;
    }

    FUNC_14(VAR_0);
    return VAR_4;
}
