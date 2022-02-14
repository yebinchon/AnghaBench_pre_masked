
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
typedef int data ;
struct TYPE_4__ {scalar_t__ reg_type; } ;
struct TYPE_3__ {short (* stc_readw ) (struct comedi_device*,int ) ;short* ai_fifo_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (struct comedi_subdevice*,short*,int) ;
 int FUNC_1 (struct comedi_subdevice*,short) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (int ) ;
 short FUNC_3 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int,int ) ;
 short FUNC_5 (struct comedi_device*,int ) ;
 short FUNC_6 (struct comedi_device*,int ) ;
 short FUNC_7 (struct comedi_device*,int ) ;

__attribute__((used)) static void FUNC_8(struct comedi_device *VAR_12)
{
 struct comedi_subdevice *VAR_13 = VAR_12->subdevices + VAR_7;
 short VAR_14[2];
 u32 VAR_15;
 short VAR_16;
 int VAR_17;

 if (VAR_8.reg_type == VAR_10) {
  while ((VAR_9->stc_readw(VAR_12,
        VAR_6) &
   VAR_5) == 0) {
   VAR_15 = FUNC_2(VAR_0);


   VAR_14[0] = (VAR_15 >> 16);
   VAR_14[1] = (VAR_15 & 0xffff);
   FUNC_0(VAR_13, VAR_14, sizeof(VAR_14));
  }
 } else if (VAR_8.reg_type == VAR_11) {
  VAR_17 = 0;
  while (FUNC_2(VAR_4) & 0x04) {
   VAR_15 = FUNC_2(VAR_3);


   VAR_14[0] = (VAR_15 >> 16);
   VAR_14[1] = (VAR_15 & 0xffff);
   FUNC_0(VAR_13, VAR_14, sizeof(VAR_14));
   VAR_17 += 2;
  }

  if (FUNC_2(VAR_4) & 0x01) {
   FUNC_4(0x01, VAR_2);
   VAR_15 = FUNC_2(VAR_3);
   VAR_14[0] = (VAR_15 >> 16) & 0xffff;
   FUNC_1(VAR_13, VAR_14[0]);
  }

 } else {
  VAR_16 =
      VAR_9->stc_readw(VAR_12,
           VAR_6) & VAR_5;
  while (VAR_16 == 0) {
   for (VAR_17 = 0;
        VAR_17 <
        sizeof(VAR_9->ai_fifo_buffer) /
        sizeof(VAR_9->ai_fifo_buffer[0]); VAR_17++) {
    VAR_16 =
        VAR_9->stc_readw(VAR_12,
             VAR_6) &
        VAR_5;
    if (VAR_16)
     break;
    VAR_9->ai_fifo_buffer[VAR_17] =
        FUNC_3(VAR_1);
   }
   FUNC_0(VAR_13, VAR_9->ai_fifo_buffer,
        VAR_17 *
        sizeof(VAR_9->
        ai_fifo_buffer[0]));
  }
 }
}
