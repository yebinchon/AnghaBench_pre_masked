
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9,
     unsigned char *VAR_10, unsigned char *VAR_11,
     int VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_2(VAR_10[0], VAR_9->iobase + VAR_5);
  FUNC_2(VAR_10[1], VAR_9->iobase + VAR_6);
  FUNC_2(VAR_10[2], VAR_9->iobase + VAR_7);
  FUNC_2(VAR_10[3], VAR_9->iobase + VAR_8);
  for (VAR_14 = 0; VAR_14 < 251; VAR_14++) {
   VAR_11[2] = FUNC_1(VAR_9->iobase + VAR_3);
   if (VAR_11[2] == VAR_10[2]) {
    VAR_11[0] = FUNC_1(VAR_9->iobase + VAR_1);
    VAR_11[1] = FUNC_1(VAR_9->iobase + VAR_2);
    VAR_11[3] = FUNC_1(VAR_9->iobase + VAR_4);
    VAR_15 = 1;
    break;
   }
   FUNC_3(1);
  }
  if (VAR_15)
   return 0;
 }

 FUNC_0(VAR_9, "PCI-1760 mailbox request timeout!");
 return -VAR_0;
}
