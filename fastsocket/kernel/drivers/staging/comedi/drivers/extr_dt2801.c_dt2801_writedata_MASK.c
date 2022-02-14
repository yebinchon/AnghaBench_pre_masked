
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_8, unsigned int VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = VAR_2;

 do {
  VAR_10 = FUNC_0(VAR_8->iobase + VAR_1);

  if (VAR_10 & VAR_3) {
   return VAR_10;
  }
  if (!(VAR_10 & VAR_4)) {
   FUNC_1(VAR_9 & 0xff, VAR_8->iobase + VAR_0);
   return 0;
  }







 } while (--VAR_11 > 0);

 return -VAR_7;
}
