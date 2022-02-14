
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int read_mode; TYPE_2__* host; } ;
typedef TYPE_1__ esp_flash_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int (* configure_host_io_mode ) (TYPE_2__*,int,int,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (TYPE_2__*,int,int,int,int ) ;

esp_err_t FUNC_1(esp_flash_t *VAR_7)
{
    uint32_t VAR_8;
    uint32_t VAR_9;
    uint32_t VAR_10;

    switch (VAR_7->read_mode) {
    case 130:

        VAR_9 = 32;
        VAR_8 = 4;
        VAR_10 = VAR_3;
        break;
    case 129:
        VAR_9 = 24;
        VAR_8 = 8;
        VAR_10 = VAR_4;
        break;
    case 133:

        VAR_9 = 28;
        VAR_8 = 2;
        VAR_10 = VAR_1;
        break;
    case 132:
        VAR_9 = 24;
        VAR_8 = 8;
        VAR_10 = VAR_2;
        break;
    case 131:
        VAR_9 = 24;
        VAR_8 = 8;
        VAR_10 = VAR_0;
        break;
    case 128:
        VAR_9 = 24;
        VAR_8 = 0;
        VAR_10 = VAR_5;
        break;
    default:
        return VAR_6;
    }

    return VAR_7->host->configure_host_io_mode(VAR_7->host, VAR_10, VAR_9, VAR_8,
                                                VAR_7->read_mode);
}
