
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {size_t size; size_t length; int owner; int eof; void* arg; int * buf; } ;
typedef TYPE_2__ buf_desc_t ;
typedef int TickType_t ;
struct TYPE_5__ {int sending_mode; } ;
struct TYPE_7__ {int sendbuf; TYPE_1__ config; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_3 () ;
 int VAR_4 ;

esp_err_t FUNC_4(uint8_t* VAR_5, size_t VAR_6, void* VAR_7, TickType_t VAR_8)
{
    FUNC_0(VAR_6 > 0, "len <= 0", VAR_0);
    FUNC_0(FUNC_1(VAR_5) && (uint32_t)VAR_5%4==0, "buffer to send should be DMA capable and 32-bit aligned",
        VAR_0);

    buf_desc_t VAR_9 = {
        .size = VAR_6,
        .length = VAR_6,
        .buf = VAR_5,
        .owner = 1,

        .eof = (VAR_3.config.sending_mode == VAR_2?1:0),
        .arg = VAR_7,
    };

    esp_err_t VAR_10 = FUNC_2(&VAR_3.sendbuf, VAR_4, &VAR_9, VAR_8);
    if (VAR_10 != VAR_1) return VAR_10;

    FUNC_3();
    return VAR_1;
}
