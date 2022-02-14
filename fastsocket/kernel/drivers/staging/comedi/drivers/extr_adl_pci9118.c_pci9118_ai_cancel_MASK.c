
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {int AdFunctionReg; int AdControlReg; scalar_t__ iobase_a; int IntControlReg; scalar_t__ dma_actbuf; scalar_t__ ai_neverending; scalar_t__ ai_buf_ptr; scalar_t__ ai_act_dmapos; scalar_t__ ai_act_scan; scalar_t__ usedma; scalar_t__ ai_do; } ;
struct TYPE_3__ {int * inttrig; scalar_t__ cur_chan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_12,
        struct comedi_subdevice *VAR_13)
{
 if (VAR_11->usedma)
  FUNC_1(FUNC_0(VAR_11->iobase_a + VAR_1) & (~VAR_4), VAR_11->iobase_a + VAR_1);
 FUNC_2(VAR_12, VAR_5);
 FUNC_3(VAR_12, 0, 0, 0);
 VAR_11->AdFunctionReg = VAR_2 | VAR_3;
 FUNC_1(VAR_11->AdFunctionReg, VAR_12->iobase + VAR_7);
 VAR_11->AdControlReg = 0x00;
 FUNC_1(VAR_11->AdControlReg, VAR_12->iobase + VAR_6);
 FUNC_1(0, VAR_12->iobase + VAR_8);
 FUNC_1(1, VAR_12->iobase + VAR_10);
 FUNC_1(2, VAR_12->iobase + VAR_10);
 FUNC_1(0, VAR_12->iobase + VAR_9);

 VAR_11->ai_do = 0;
 VAR_11->usedma = 0;

 VAR_11->ai_act_scan = 0;
 VAR_11->ai_act_dmapos = 0;
 VAR_13->async->cur_chan = 0;
 VAR_13->async->inttrig = ((void*)0);
 VAR_11->ai_buf_ptr = 0;
 VAR_11->ai_neverending = 0;
 VAR_11->dma_actbuf = 0;

 if (!VAR_11->IntControlReg)
  FUNC_1(FUNC_0(VAR_11->iobase_a + VAR_0) | 0x1f00, VAR_11->iobase_a + VAR_0);

 return 0;
}
