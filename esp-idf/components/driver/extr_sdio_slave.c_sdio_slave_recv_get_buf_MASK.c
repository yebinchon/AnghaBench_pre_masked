
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int * sdio_slave_buf_handle_t ;
struct TYPE_2__ {size_t length; int * buf; } ;
typedef TYPE_1__ buf_desc_t ;



uint8_t* FUNC_0(sdio_slave_buf_handle_t VAR_0, size_t *VAR_1)
{
    buf_desc_t *VAR_2 = (buf_desc_t*)VAR_0;
    if (VAR_0 == ((void*)0)) return ((void*)0);

    if (VAR_1!= ((void*)0)) *VAR_1= VAR_2->length;
    return VAR_2->buf;
}
