
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {scalar_t__ attached; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ plx9080_iobase; scalar_t__ main_iobase; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct comedi_device*,unsigned short,int) ;
 int FUNC_2 (struct comedi_device*,unsigned short,int) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (scalar_t__) ;
 unsigned short FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 unsigned short VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_4(FUNC_3(VAR_7)->plx9080_iobase + VAR_4);
 VAR_8 = FUNC_5(FUNC_3(VAR_7)->main_iobase + VAR_0);

 FUNC_0("cb_pcidas64: hw status 0x%x ", VAR_8);
 FUNC_0("plx status 0x%x\n", VAR_9);




 if (VAR_7->attached == 0) {
  FUNC_0("cb_pcidas64: premature interrupt, ignoring",
       VAR_8);
  return VAR_2;
 }
 FUNC_1(VAR_7, VAR_8, VAR_9);
 FUNC_2(VAR_7, VAR_8, VAR_9);


 if (VAR_9 & VAR_1) {
  VAR_10 = FUNC_4(FUNC_3(VAR_7)->plx9080_iobase + VAR_3);
  FUNC_6(VAR_10, FUNC_3(VAR_7)->plx9080_iobase + VAR_3);
  FUNC_0(" cleared local doorbell bits 0x%x\n", VAR_10);
 }

 FUNC_0("exiting handler\n");

 return VAR_2;
}
