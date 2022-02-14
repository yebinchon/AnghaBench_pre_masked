
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int serial_interval_ns; int (* stc_readw ) (struct comedi_device*,int ) ;int dio_control; int (* stc_writew ) (struct comedi_device*,int ,int ) ;int dio_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7,
       struct comedi_subdevice *VAR_8,
       unsigned char VAR_9,
       unsigned char *VAR_10)
{
 unsigned char VAR_11, VAR_12 = 0;






 FUNC_5((VAR_6->serial_interval_ns + 999) / 1000);

 for (VAR_11 = 0x80; VAR_11; VAR_11 >>= 1) {



  VAR_6->dio_output &= ~VAR_4;
  if (VAR_9 & VAR_11) {
   VAR_6->dio_output |= VAR_4;
  }
  VAR_6->stc_writew(VAR_7, VAR_6->dio_output,
        VAR_1);



  VAR_6->dio_control |= VAR_5;
  VAR_6->stc_writew(VAR_7, VAR_6->dio_control,
        VAR_0);

  FUNC_5((VAR_6->serial_interval_ns + 999) / 2000);

  VAR_6->dio_control &= ~VAR_5;
  VAR_6->stc_writew(VAR_7, VAR_6->dio_control,
        VAR_0);

  FUNC_5((VAR_6->serial_interval_ns + 999) / 2000);


  if (VAR_6->stc_readw(VAR_7,
           VAR_2) & VAR_3)
  {

   VAR_12 |= VAR_11;
  }
 }



 if (VAR_10)
  *VAR_10 = VAR_12;

 return 0;
}
