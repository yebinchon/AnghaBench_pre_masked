
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; } ;






 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct comedi_subdevice *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;


 return 0;

 VAR_6 = FUNC_0(VAR_5);
 switch (VAR_6) {
 case 130:
  if (VAR_4->subdev_flags & VAR_1)
   return 0;
  break;
 case 131:
  if (VAR_4->subdev_flags & VAR_0)
   return 0;
  break;
 case 129:
  if (VAR_4->subdev_flags & VAR_2)
   return 0;
  break;
 case 128:
  if (VAR_4->subdev_flags & VAR_3)
   return 0;
  break;
 default:
  break;
 }
 FUNC_1("subdevice does not support aref %i", VAR_6);
 return 1;
}
