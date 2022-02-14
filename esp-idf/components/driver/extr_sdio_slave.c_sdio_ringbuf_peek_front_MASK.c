
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ read_ptr; scalar_t__ write_ptr; int item_size; } ;
typedef TYPE_1__ sdio_ringbuf_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline uint8_t* FUNC_1(sdio_ringbuf_t* VAR_1)
{
    if (VAR_1->read_ptr != VAR_1->write_ptr) {
        return FUNC_0(VAR_1, VAR_0, VAR_1->item_size);
    } else {
        return ((void*)0);
    }
}
