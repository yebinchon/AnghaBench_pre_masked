
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sdmmc_card_t ;
struct TYPE_3__ {int * ioctl; int * write; int * read; int * status; int * init; } ;
typedef TYPE_1__ ff_diskio_impl_t ;
typedef size_t BYTE ;


 int FUNC_0 (size_t,TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;

void FUNC_1(BYTE VAR_6, sdmmc_card_t* VAR_7)
{
    static const ff_diskio_impl_t VAR_8 = {
        .init = &VAR_0,
        .status = &VAR_3,
        .read = &VAR_2,
        .write = &VAR_4,
        .ioctl = &VAR_1
    };
    VAR_5[VAR_6] = VAR_7;
    FUNC_0(VAR_6, &VAR_8);
}
