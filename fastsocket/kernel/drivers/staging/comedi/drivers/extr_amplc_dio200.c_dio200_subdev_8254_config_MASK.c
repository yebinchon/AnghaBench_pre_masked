
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8254 {int iobase; } ;
struct comedi_subdevice {struct dio200_subdev_8254* private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int FUNC_1 (struct dio200_subdev_8254*,int,unsigned int*) ;
 int FUNC_2 (struct dio200_subdev_8254*,int) ;
 int FUNC_3 (struct dio200_subdev_8254*,int,unsigned int) ;
 int FUNC_4 (struct dio200_subdev_8254*,int,unsigned int) ;
 int FUNC_5 (int ,int ,int,unsigned int) ;
 unsigned int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 struct dio200_subdev_8254 *VAR_5 = VAR_2->private;
 int VAR_6;
 int VAR_7 = FUNC_0(VAR_3->chanspec);

 switch (VAR_4[0]) {
 case 129:
  VAR_6 = FUNC_5(VAR_5->iobase, 0, VAR_7, VAR_4[1]);
  if (VAR_6 < 0)
   return -VAR_0;
  break;
 case 133:
  VAR_4[1] = FUNC_6(VAR_5->iobase, 0, VAR_7);
  break;
 case 128:
  VAR_6 = FUNC_4(VAR_5, VAR_7, VAR_4[2]);
  if (VAR_6 < 0)
   return -VAR_0;
  break;
 case 131:
  VAR_6 = FUNC_2(VAR_5, VAR_7);
  if (VAR_6 < 0)
   return -VAR_0;
  VAR_4[2] = VAR_6;
  break;
 case 130:
  VAR_6 = FUNC_3(VAR_5, VAR_7, VAR_4[1]);
  if (VAR_6 < 0)
   return -VAR_0;
  break;
 case 132:
  VAR_6 = FUNC_1(VAR_5, VAR_7, &VAR_4[2]);
  if (VAR_6 < 0)
   return -VAR_0;
  VAR_4[1] = VAR_6;
  break;
 default:
  return -VAR_0;
  break;
 }
 return VAR_3->n;
}
