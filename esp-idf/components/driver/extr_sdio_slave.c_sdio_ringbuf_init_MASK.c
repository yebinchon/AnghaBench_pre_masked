
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int item_size; int size; int * data; int * free_ptr; int * read_ptr; int * write_ptr; int * remain_cnt; } ;
typedef TYPE_1__ sdio_ringbuf_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int,int) ;

__attribute__((used)) static esp_err_t FUNC_4(sdio_ringbuf_t* VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_3->data != ((void*)0)) {
        FUNC_0("sdio_ringbuf_init: already initialized");
        return VAR_0;
    }
    VAR_3->item_size = VAR_4;

    VAR_3->size = VAR_4 * (VAR_5+1);

    VAR_3->data = (uint8_t*)FUNC_1(VAR_3->size);
    if (VAR_3->data == ((void*)0)) goto no_mem;
    VAR_3->remain_cnt = FUNC_3(VAR_5, VAR_5);
    if (VAR_3->remain_cnt == ((void*)0)) goto no_mem;

    VAR_3->write_ptr = VAR_3->data;
    VAR_3->read_ptr = VAR_3->data;
    VAR_3->free_ptr = VAR_3->data;
    return VAR_2;
no_mem:
    FUNC_2(VAR_3);
    return VAR_1;
}
