
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int r1; } ;
typedef TYPE_1__ sdspi_hw_cmd_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static esp_err_t FUNC_1(sdspi_hw_cmd_t* VAR_4, int VAR_5)
{
    uint8_t* VAR_6 = &VAR_4->r1;
    int VAR_7 = 1;
    while(1) {
        if ((*VAR_6 & VAR_3) == 0) break;
        VAR_6++;
        if (++VAR_7 > 8) return VAR_0;
    }

    int VAR_8 = VAR_5 - VAR_2 - VAR_7;
    if (VAR_8 > 0) {
        FUNC_0(&VAR_4->r1, VAR_6, VAR_8);
    }

    return VAR_1;
}
