
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* trans_func ;
typedef void* poll_func ;
typedef int io_read_func ;
typedef int io_func ;
typedef TYPE_1__* esp_transport_handle_t ;
typedef int esp_err_t ;
typedef int connect_func ;
struct TYPE_3__ {int _parent_transfer; int * _connect_async; void* _destroy; void* _poll_write; void* _poll_read; void* _close; int _write; int _read; int _connect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

esp_err_t FUNC_0(esp_transport_handle_t VAR_3,
                             connect_func VAR_4,
                             io_read_func VAR_5,
                             io_func VAR_6,
                             trans_func VAR_7,
                             poll_func VAR_8,
                             poll_func VAR_9,
                             trans_func VAR_10)
{
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }
    VAR_3->_connect = VAR_4;
    VAR_3->_read = VAR_5;
    VAR_3->_write = VAR_6;
    VAR_3->_close = VAR_7;
    VAR_3->_poll_read = VAR_8;
    VAR_3->_poll_write = VAR_9;
    VAR_3->_destroy = VAR_10;
    VAR_3->_connect_async = ((void*)0);
    VAR_3->_parent_transfer = VAR_2;
    return VAR_1;
}
