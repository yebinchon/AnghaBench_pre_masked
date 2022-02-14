
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*,unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3)
{
 unsigned char VAR_4[4] = { 0x0, 0x0, VAR_0, 0x0 };
 unsigned char VAR_5[4];

 if (FUNC_0(VAR_3->iobase + VAR_1) == VAR_0)
  return 0;
 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2);
}
