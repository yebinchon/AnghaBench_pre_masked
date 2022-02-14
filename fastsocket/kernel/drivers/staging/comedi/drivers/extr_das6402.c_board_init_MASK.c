
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int das6402_ignoreirq; } ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* VAR_17 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_18)
{
 BYTE VAR_19;

 VAR_17->das6402_ignoreirq = 1;

 FUNC_1(0x07, VAR_18->iobase + 8);


 FUNC_2(VAR_12, VAR_18->iobase + 11);
 VAR_19 = VAR_0 | VAR_14 | VAR_12 | VAR_8 | VAR_7;
 FUNC_2(VAR_19, VAR_18->iobase + 11);


 FUNC_2(VAR_6, VAR_18->iobase + 8);
 VAR_19 = VAR_6 | VAR_11;
 FUNC_2(VAR_19, VAR_18->iobase + 8);
 VAR_19 = VAR_11 | VAR_2 | VAR_4 | VAR_3;
 FUNC_2(VAR_19, VAR_18->iobase + 8);


 VAR_19 = VAR_10 | VAR_5 | VAR_1 | VAR_9;
 FUNC_2(VAR_19, VAR_18->iobase + 9);


 VAR_19 = VAR_16 | VAR_15;
 FUNC_2(VAR_19, VAR_18->iobase + 10);

 VAR_19 = 0x07;
 FUNC_2(VAR_19, VAR_18->iobase + 8);

 FUNC_0(VAR_18);

 FUNC_3(VAR_13, VAR_18->iobase + 2);

 VAR_17->das6402_ignoreirq = 0;

 return 0;
}
