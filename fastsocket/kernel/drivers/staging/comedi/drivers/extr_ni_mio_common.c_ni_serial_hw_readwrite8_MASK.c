
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int (* stc_readw ) (struct comedi_device*,int ) ;int serial_interval_ns; int dio_control; int (* stc_writew ) (struct comedi_device*,int ,int ) ;int dio_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 unsigned int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int ) ;
 unsigned int FUNC_5 (struct comedi_device*,int ) ;
 unsigned char FUNC_6 (struct comedi_device*,int ) ;
 int FUNC_7 (struct comedi_device*,int ,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_10,
       struct comedi_subdevice *VAR_11,
       unsigned char VAR_12,
       unsigned char *VAR_13)
{
 unsigned int VAR_14;
 int VAR_15 = 0, VAR_16 = 20;





 VAR_9->dio_output &= ~VAR_3;
 VAR_9->dio_output |= FUNC_0(VAR_12);
 VAR_9->stc_writew(VAR_10, VAR_9->dio_output, VAR_2);

 VAR_14 = VAR_9->stc_readw(VAR_10, VAR_8);
 if (VAR_14 & VAR_4) {
  VAR_15 = -VAR_6;
  goto Error;
 }

 VAR_9->dio_control |= VAR_1;
 VAR_9->stc_writew(VAR_10, VAR_9->dio_control, VAR_0);
 VAR_9->dio_control &= ~VAR_1;


 while ((VAR_14 =
  VAR_9->stc_readw(VAR_10,
       VAR_8)) &
        VAR_4) {

  FUNC_8((VAR_9->serial_interval_ns + 999) / 1000);
  if (--VAR_16 < 0) {
   FUNC_1
       ("ni_serial_hw_readwrite8: SPI serial I/O didn't finish in time!\n");
   VAR_15 = -VAR_7;
   goto Error;
  }
 }



 FUNC_8((VAR_9->serial_interval_ns + 999) / 1000);

 if (VAR_13 != ((void*)0)) {
  *VAR_13 = VAR_9->stc_readw(VAR_10, VAR_5);



 }

Error:
 VAR_9->stc_writew(VAR_10, VAR_9->dio_control, VAR_0);

 return VAR_15;
}
