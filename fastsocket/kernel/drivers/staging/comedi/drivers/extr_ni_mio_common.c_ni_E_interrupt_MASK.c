
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mite_struct {scalar_t__ mite_io_addr; } ;
struct comedi_device {scalar_t__ attached; int spinlock; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {unsigned short (* stc_readw ) (struct comedi_device*,int ) ;int mite_channel_lock; TYPE_1__* ao_mite_chan; TYPE_1__* ai_mite_chan; struct mite_struct* mite; } ;
struct TYPE_3__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,unsigned short) ;
 int FUNC_2 (struct comedi_device*,unsigned short) ;
 TYPE_2__* VAR_9 ;
 int FUNC_3 (struct comedi_device*,unsigned short,unsigned int) ;
 int FUNC_4 (struct comedi_device*,unsigned short,unsigned int) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*,int) ;
 unsigned int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 unsigned short FUNC_11 (struct comedi_device*,int ) ;
 unsigned short FUNC_12 (struct comedi_device*,int ) ;
 int FUNC_13 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_10, void *VAR_11)
{
 struct comedi_device *VAR_12 = VAR_11;
 unsigned short VAR_13;
 unsigned short VAR_14;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;
 unsigned long VAR_17;




 if (VAR_12->attached == 0)
  return VAR_6;
 FUNC_8();


 FUNC_9(&VAR_12->spinlock, VAR_17);
 VAR_13 = VAR_9->stc_readw(VAR_12, VAR_0);
 VAR_14 = VAR_9->stc_readw(VAR_12, VAR_1);
 FUNC_1(VAR_12, VAR_13);
 FUNC_2(VAR_12, VAR_14);
 if ((VAR_13 & VAR_7) || (VAR_15 & VAR_3))
  FUNC_3(VAR_12, VAR_13, VAR_15);
 if ((VAR_14 & VAR_8) || (VAR_16 & VAR_3))
  FUNC_4(VAR_12, VAR_14, VAR_16);
 FUNC_6(VAR_12, 0);
 FUNC_6(VAR_12, 1);
 FUNC_5(VAR_12);

 FUNC_10(&VAR_12->spinlock, VAR_17);
 return VAR_5;
}
