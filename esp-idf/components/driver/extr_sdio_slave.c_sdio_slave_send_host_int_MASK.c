
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int slc0_intvec; } ;
struct TYPE_4__ {TYPE_1__ intvec_tohost; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ) ;
 TYPE_2__ VAR_2 ;

esp_err_t FUNC_2(uint8_t VAR_3)
{
    FUNC_1(VAR_3 < 8, "interrupt num invalid", VAR_0);
    VAR_2.intvec_tohost.slc0_intvec = FUNC_0(VAR_3);
    return VAR_1;
}
