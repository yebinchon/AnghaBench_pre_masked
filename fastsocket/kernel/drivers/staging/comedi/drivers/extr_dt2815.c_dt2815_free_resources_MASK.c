
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_1)
{
 if (VAR_1->iobase)
  FUNC_0(VAR_1->iobase, VAR_0);
}
