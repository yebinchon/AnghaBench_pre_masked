
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * read_ptr; int * write_ptr; int item_size; int * free_ptr; } ;
typedef TYPE_1__ sdio_ringbuf_t ;
typedef scalar_t__ ringbuf_get_all_t ;
typedef int esp_err_t ;
typedef scalar_t__ TickType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline esp_err_t FUNC_2(sdio_ringbuf_t* VAR_5, uint8_t **VAR_6, uint8_t **VAR_7, ringbuf_get_all_t VAR_8, TickType_t VAR_9)
{
    FUNC_0(VAR_5->free_ptr == VAR_5->read_ptr);
    FUNC_0(VAR_9 == 0);
    if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0)) return VAR_0;
    if (VAR_5->read_ptr == VAR_5->write_ptr) return VAR_1;

    uint8_t *VAR_10 = FUNC_1(VAR_5, VAR_4, VAR_5->item_size);

    if (VAR_8 != VAR_3) {
        VAR_5->read_ptr = VAR_5->write_ptr;
    } else {
        VAR_5->read_ptr = VAR_10;
    }

    if (VAR_6 != ((void*)0)) *VAR_6 = VAR_10;
    if (VAR_7 != ((void*)0)) *VAR_7 = VAR_5->read_ptr;
    return VAR_2;
}
