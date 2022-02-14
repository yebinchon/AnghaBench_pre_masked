
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int adc_unit_t ;
typedef scalar_t__ adc_bits_width_t ;
struct TYPE_15__ {scalar_t__ sar2_sample_bit; } ;
struct TYPE_14__ {scalar_t__ sar2_bit_width; } ;
struct TYPE_13__ {scalar_t__ sar1_sample_bit; } ;
struct TYPE_12__ {scalar_t__ sar1_bit_width; } ;
struct TYPE_11__ {scalar_t__ sar2_sample_bit; } ;
struct TYPE_10__ {scalar_t__ sar2_bit_width; scalar_t__ sar1_bit_width; } ;
struct TYPE_9__ {scalar_t__ sar1_sample_bit; } ;
struct TYPE_16__ {TYPE_7__ sar_reader2_ctrl; TYPE_6__ sar_meas2_ctrl1; TYPE_5__ sar_reader1_ctrl; TYPE_4__ sar_meas1_ctrl1; TYPE_3__ sar_read_ctrl2; TYPE_2__ sar_start_force; TYPE_1__ sar_read_ctrl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int ) ;
 TYPE_8__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;

esp_err_t FUNC_4(adc_unit_t VAR_7, adc_bits_width_t VAR_8)
{
    FUNC_0(VAR_7);
    FUNC_1(VAR_8 < VAR_2, "ADC bit width error", VAR_3);
    FUNC_2(&VAR_6);
    FUNC_3(&VAR_6);
    return VAR_4;
}
