
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int (* stc_readw ) (struct comedi_device*,int ) ;int mite_channel_lock; scalar_t__ ai_mite_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct comedi_device*,int ) ;
 int FUNC_6 (struct comedi_device*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_3)
{
 int VAR_4;
 static const int VAR_5 = 10000;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_2->mite_channel_lock, VAR_6);
 if (VAR_2->ai_mite_chan) {
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   if ((VAR_2->stc_readw(VAR_3,
      VAR_1) &
        VAR_0)
       && FUNC_0(VAR_2->ai_mite_chan) ==
       0)
    break;
   FUNC_7(5);
  }
  if (VAR_4 == VAR_5) {
   FUNC_2("ni_mio_common: wait for dma drain timed out\n");
   FUNC_2
       ("mite_bytes_in_transit=%i, AI_Status1_Register=0x%x\n",
        FUNC_0(VAR_2->ai_mite_chan),
        VAR_2->stc_readw(VAR_3, VAR_1));
   VAR_7 = -1;
  }
 }
 FUNC_4(&VAR_2->mite_channel_lock, VAR_6);

 FUNC_1(VAR_3);

 return VAR_7;
}
