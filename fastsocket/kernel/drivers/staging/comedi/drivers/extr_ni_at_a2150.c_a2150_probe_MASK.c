
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->iobase + VAR_0);
 return FUNC_0(VAR_2);
}
