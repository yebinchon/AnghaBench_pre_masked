
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const struct comedi_subdevice *VAR_1)
{
 if (VAR_1->subdev_flags & VAR_0)
  return sizeof(unsigned int);
 else
  return sizeof(short);
}
