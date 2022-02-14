
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct comedi_device*,int*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,unsigned int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8;
 int VAR_9;

 FUNC_0("dt2801: resetting board...\n");
 FUNC_0("fingerprint: 0x%02x 0x%02x\n", FUNC_2(VAR_6->iobase),
  FUNC_2(VAR_6->iobase + 1));


 FUNC_2(VAR_6->iobase + VAR_1);
 FUNC_2(VAR_6->iobase + VAR_1);
 FUNC_2(VAR_6->iobase + VAR_1);
 FUNC_2(VAR_6->iobase + VAR_1);

 FUNC_0("dt2801: stop\n");

 FUNC_3(VAR_4, VAR_6->iobase + VAR_0);


 FUNC_5(100);
 VAR_9 = 10000;
 do {
  VAR_8 = FUNC_2(VAR_6->iobase + VAR_2);
  if (VAR_8 & VAR_5)
   break;
 } while (VAR_9--);
 if (!VAR_9) {
  FUNC_4("dt2801: timeout 1 status=0x%02x\n", VAR_8);
 }




 FUNC_0("dt2801: reset\n");
 FUNC_3(VAR_3, VAR_6->iobase + VAR_0);


 FUNC_5(100);
 VAR_9 = 10000;
 do {
  VAR_8 = FUNC_2(VAR_6->iobase + VAR_2);
  if (VAR_8 & VAR_5)
   break;
 } while (VAR_9--);
 if (!VAR_9) {
  FUNC_4("dt2801: timeout 2 status=0x%02x\n", VAR_8);
 }

 FUNC_0("dt2801: reading code\n");
 FUNC_1(VAR_6, &VAR_7);

 FUNC_0("dt2801: ok.  code=0x%02x\n", VAR_7);

 return VAR_7;
}
