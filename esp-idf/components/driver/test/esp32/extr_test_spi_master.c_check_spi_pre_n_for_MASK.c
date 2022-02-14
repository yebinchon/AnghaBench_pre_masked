
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int t ;
struct TYPE_10__ {int length; char* tx_buffer; } ;
typedef TYPE_2__ spi_transaction_t ;
struct TYPE_11__ {int clock_speed_hz; int duty_cycle_pos; int spics_io_num; int queue_size; int mode; int dummy_bits; int address_bits; int command_bits; } ;
typedef TYPE_3__ spi_device_interface_config_t ;
typedef int spi_device_handle_t ;
struct TYPE_9__ {int clkdiv_pre; int clkcnt_n; } ;
struct TYPE_12__ {TYPE_1__ clock; } ;
typedef TYPE_4__ spi_dev_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_13__ {TYPE_4__* hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (char*,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (size_t,TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 TYPE_5__* VAR_2 ;

__attribute__((used)) static void FUNC_6(int VAR_3, int VAR_4, int VAR_5)
{
    esp_err_t VAR_6;
    spi_device_handle_t VAR_7;

    spi_device_interface_config_t VAR_8={
        .command_bits=0,
        .address_bits=0,
        .dummy_bits=0,
        .clock_speed_hz=VAR_3,
        .duty_cycle_pos=128,
        .mode=0,
        .spics_io_num=21,
        .queue_size=3
    };
    char VAR_9[16]="";
    spi_transaction_t VAR_10;
    FUNC_1(&VAR_10, 0, sizeof(VAR_10));

    VAR_6=FUNC_3(VAR_1, &VAR_8, &VAR_7);
    FUNC_0(VAR_6==VAR_0);

    VAR_10.length=16*8;
    VAR_10.tx_buffer=VAR_9;
    VAR_6=FUNC_5(VAR_7, &VAR_10);

    spi_dev_t* VAR_11 = VAR_2[VAR_1].hw;

    FUNC_2("Checking clk rate %dHz. expect pre %d n %d, got pre %d n %d\n", VAR_3, VAR_4, VAR_5, VAR_11->clock.clkdiv_pre+1, VAR_11->clock.clkcnt_n+1);

    FUNC_0(VAR_11->clock.clkcnt_n+1==VAR_5);
    FUNC_0(VAR_11->clock.clkdiv_pre+1==VAR_4);

    VAR_6=FUNC_4(VAR_7);
    FUNC_0(VAR_6==VAR_0);
}
