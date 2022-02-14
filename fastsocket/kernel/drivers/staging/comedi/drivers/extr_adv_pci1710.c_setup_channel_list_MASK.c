
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {unsigned int act_chanlist_len; int* act_chanlist; int ai_et_MuxVal; scalar_t__ act_chanlist_pos; } ;
struct TYPE_3__ {unsigned int* rangecode_ai; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 unsigned int* VAR_4 ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_6,
          struct comedi_subdevice *VAR_7,
          unsigned int *VAR_8, unsigned int VAR_9,
          unsigned int VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;

 FUNC_3("adv_pci1710 EDBG:  setup_channel_list(...,%d,%d)\n", VAR_9,
  VAR_10);
 VAR_3->act_chanlist_len = VAR_10;
 VAR_3->act_chanlist_pos = 0;

 FUNC_3("SegLen: %d\n", VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_13 = VAR_4[FUNC_1(VAR_8[VAR_11])];
  FUNC_4(VAR_13, VAR_6->iobase + VAR_1);
  VAR_12 = VAR_5->rangecode_ai[FUNC_2(VAR_8[VAR_11])];
  if (FUNC_0(VAR_8[VAR_11]) == VAR_0)
   VAR_12 |= 0x0020;
  FUNC_4(VAR_12, VAR_6->iobase + VAR_2);




  FUNC_3("GS: %2d. [%4x]=%4x %4x\n", VAR_11, VAR_13, VAR_12,
   VAR_3->act_chanlist[VAR_11]);
 }

 VAR_3->ai_et_MuxVal =
     FUNC_1(VAR_8[0]) | (FUNC_1(VAR_8[VAR_10 - 1]) << 8);
 FUNC_4(VAR_3->ai_et_MuxVal, VAR_6->iobase + VAR_1);
 FUNC_3("MUX: %4x L%4x.H%4x\n",
  FUNC_1(VAR_8[0]) | (FUNC_1(VAR_8[VAR_10 - 1]) << 8),
  FUNC_1(VAR_8[0]), FUNC_1(VAR_8[VAR_10 - 1]));
}
