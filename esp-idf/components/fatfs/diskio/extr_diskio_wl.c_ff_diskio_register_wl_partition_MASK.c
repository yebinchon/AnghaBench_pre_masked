
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wl_handle_t ;
struct TYPE_3__ {int * ioctl; int * write; int * read; int * status; int * init; } ;
typedef TYPE_1__ ff_diskio_impl_t ;
typedef int esp_err_t ;
typedef size_t BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,TYPE_1__ const*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

esp_err_t FUNC_1(BYTE VAR_9, wl_handle_t VAR_10)
{
    if (VAR_9 >= VAR_2) {
        return VAR_0;
    }
    static const ff_diskio_impl_t VAR_11 = {
        .init = &VAR_4,
        .status = &VAR_7,
        .read = &VAR_6,
        .write = &VAR_8,
        .ioctl = &VAR_5
    };
    VAR_3[VAR_9] = VAR_10;
    FUNC_0(VAR_9, &VAR_11);
    return VAR_1;
}
