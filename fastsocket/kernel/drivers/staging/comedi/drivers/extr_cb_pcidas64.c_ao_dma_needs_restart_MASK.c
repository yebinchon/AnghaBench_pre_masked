
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_device*) ;

__attribute__((used)) static inline int FUNC_1(struct comedi_device *VAR_2,
           unsigned short VAR_3)
{
 if ((VAR_3 & VAR_0) == 0 ||
     (VAR_3 & VAR_1) == 0)
  return 0;
 if (FUNC_0(VAR_2))
  return 0;

 return 1;
}
