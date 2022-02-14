
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ plx9080_iobase; scalar_t__ hpdi_iobase; void* rx_fifo_size; void* tx_fifo_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_15)
{
 uint32_t VAR_16;

 FUNC_6(VAR_1, FUNC_3(VAR_15)->hpdi_iobase + VAR_0);
 FUNC_5(10);

 FUNC_6(FUNC_0(32) | FUNC_1(32),
        FUNC_3(VAR_15)->hpdi_iobase + VAR_12);
 FUNC_6(FUNC_0(32) | FUNC_1(32),
        FUNC_3(VAR_15)->hpdi_iobase + VAR_14);

 FUNC_3(VAR_15)->tx_fifo_size = FUNC_2(FUNC_4(FUNC_3(VAR_15)->hpdi_iobase +
        VAR_13));
 FUNC_3(VAR_15)->rx_fifo_size = FUNC_2(FUNC_4(FUNC_3(VAR_15)->hpdi_iobase +
        VAR_11));

 FUNC_6(0, FUNC_3(VAR_15)->hpdi_iobase + VAR_9);


 VAR_16 =
     VAR_2 | VAR_6 | VAR_7 | VAR_8 | VAR_5 | VAR_4 |
     VAR_3;
 FUNC_6(VAR_16, FUNC_3(VAR_15)->plx9080_iobase + VAR_10);

 return 0;
}
