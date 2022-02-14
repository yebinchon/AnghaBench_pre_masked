
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8)
{
 int VAR_9;

 VAR_9 = VAR_3;

 if (!(VAR_8->io_bits & 0x0000ff))
  VAR_9 |= VAR_1;
 if (!(VAR_8->io_bits & 0x00ff00))
  VAR_9 |= VAR_2;
 if (!(VAR_8->io_bits & 0x0f0000))
  VAR_9 |= VAR_5;
 if (!(VAR_8->io_bits & 0xf00000))
  VAR_9 |= VAR_4;
 FUNC_0(1, VAR_6, VAR_9, VAR_0);
}
