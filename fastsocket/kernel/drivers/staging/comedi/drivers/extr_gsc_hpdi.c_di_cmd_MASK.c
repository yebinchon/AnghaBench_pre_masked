
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; } ;
struct comedi_cmd {scalar_t__ stop_src; int stop_arg; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {int dma_desc_phys_addr; int dio_count; scalar_t__ hpdi_iobase; scalar_t__ plx9080_iobase; scalar_t__ dma_desc_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_20, struct comedi_subdevice *VAR_21)
{
 uint32_t VAR_22;
 unsigned long VAR_23;
 struct comedi_async *VAR_24 = VAR_21->async;
 struct comedi_cmd *VAR_25 = &VAR_24->cmd;

 FUNC_2(VAR_20, VAR_15, VAR_0);

 FUNC_0("hpdi: in di_cmd\n");

 FUNC_1(VAR_20, 0);

 FUNC_4(VAR_20)->dma_desc_index = 0;





 FUNC_8(0, FUNC_4(VAR_20)->plx9080_iobase + VAR_9);
 FUNC_8(0, FUNC_4(VAR_20)->plx9080_iobase + VAR_8);
 FUNC_8(0, FUNC_4(VAR_20)->plx9080_iobase + VAR_7);

 VAR_22 =
     FUNC_4(VAR_20)->dma_desc_phys_addr | VAR_4 |
     VAR_12 | VAR_13;
 FUNC_8(VAR_22, FUNC_4(VAR_20)->plx9080_iobase + VAR_6);


 FUNC_5(&VAR_20->spinlock, VAR_23);

 FUNC_7(VAR_10 | VAR_11 | VAR_3,
        FUNC_4(VAR_20)->plx9080_iobase + VAR_5);
 FUNC_6(&VAR_20->spinlock, VAR_23);

 if (VAR_25->stop_src == VAR_19)
  FUNC_4(VAR_20)->dio_count = VAR_25->stop_arg;
 else
  FUNC_4(VAR_20)->dio_count = 1;


 FUNC_8(VAR_18 | VAR_17,
        FUNC_4(VAR_20)->hpdi_iobase + VAR_1);

 FUNC_8(FUNC_3(VAR_16),
        FUNC_4(VAR_20)->hpdi_iobase + VAR_2);

 FUNC_0("hpdi: starting rx\n");
 FUNC_2(VAR_20, VAR_14, VAR_0);

 return 0;
}
