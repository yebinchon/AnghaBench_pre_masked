
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int spi_size; } ;
typedef TYPE_1__ esp_image_header_t ;
struct TYPE_5__ {int device_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;





 int FUNC_5 (int ,int,int,int,int,int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_6(const esp_image_header_t *VAR_1)
{
    uint32_t VAR_2;
    switch (VAR_1->spi_size) {
    case 131:
        VAR_2 = 1;
        break;
    case 130:
        VAR_2 = 2;
        break;
    case 129:
        VAR_2 = 4;
        break;
    case 128:
        VAR_2 = 8;
        break;
    case 132:
        VAR_2 = 16;
        break;
    default:
        VAR_2 = 2;
    }






    FUNC_5(VAR_0.device_id, VAR_2 * 0x100000, 0x10000, 0x1000, 0x100, 0xffff);
}
