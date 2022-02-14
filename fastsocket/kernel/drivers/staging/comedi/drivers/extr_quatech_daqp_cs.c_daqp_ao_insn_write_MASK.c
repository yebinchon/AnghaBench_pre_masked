
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_info_t {scalar_t__ stop; } ;
struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4,
         struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 struct local_info_t *VAR_7 = (struct local_info_t *)VAR_4->private;
 int VAR_8;
 unsigned int VAR_9;

 if (VAR_7->stop) {
  return -VAR_2;
 }

 VAR_9 = FUNC_0(VAR_5->chanspec);
 VAR_8 = VAR_6[0];
 VAR_8 &= 0x0fff;
 VAR_8 ^= 0x0800;
 VAR_8 |= VAR_9 << 12;


 FUNC_1(0, VAR_3->iobase + VAR_0);

 FUNC_2(VAR_8, VAR_3->iobase + VAR_1);

 return 1;
}
