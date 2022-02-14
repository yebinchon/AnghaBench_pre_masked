
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct comedi_device *VAR_7 = VAR_5;

 VAR_6 = FUNC_2(VAR_7->iobase + VAR_1);

 if ((VAR_6 & VAR_0) == 0) {
  FUNC_0("spurious interrupt\n");
  return VAR_3;
 }


 FUNC_3(0x00, VAR_7->iobase + VAR_1);
 FUNC_1(VAR_7);
 return VAR_2;
}
