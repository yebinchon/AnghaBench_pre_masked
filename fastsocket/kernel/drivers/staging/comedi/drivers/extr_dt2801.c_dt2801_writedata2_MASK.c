
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1 & 0xff);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, (VAR_1 >> 8));
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
