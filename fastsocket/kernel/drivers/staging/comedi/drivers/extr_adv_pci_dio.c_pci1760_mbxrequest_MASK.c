
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
         unsigned char *VAR_5, unsigned char *VAR_6)
{
 if (VAR_5[2] == VAR_0) {
  FUNC_0(VAR_4,
        "bug! this function should not be used for CMD_ClearIMB2 command");
  return -VAR_1;
 }
 if (FUNC_1(VAR_4->iobase + VAR_2) == VAR_5[2]) {
  int VAR_7;
  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_3);
}
