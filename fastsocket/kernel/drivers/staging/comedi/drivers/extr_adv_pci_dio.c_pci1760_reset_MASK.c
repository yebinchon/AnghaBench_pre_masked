
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int* CntMatchValue; int* CntResValue; int IDICntEdge; int IDIFiltersEn; int IDIPatMatchEn; int IDIPatMatchValue; scalar_t__ IDICntMatchEnable; scalar_t__ IDICntOverEnable; scalar_t__ IDICntEnable; scalar_t__ GlobalIrqEnabled; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_16)
{
 int VAR_17;
 unsigned char VAR_18[4] = { 0x00, 0x00, 0x00, 0x00 };
 unsigned char VAR_19[4];

 FUNC_0(0, VAR_16->iobase + VAR_11);
 FUNC_0(0, VAR_16->iobase + VAR_12);
 FUNC_0(0, VAR_16->iobase + VAR_13);
 FUNC_0(0, VAR_16->iobase + VAR_14);
 VAR_15->GlobalIrqEnabled = 0;

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_10;
 FUNC_1(VAR_16, VAR_18, VAR_19);

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_1;
 FUNC_1(VAR_16, VAR_18, VAR_19);
 VAR_15->IDICntEnable = 0;

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_5;
 FUNC_1(VAR_16, VAR_18, VAR_19);
 VAR_15->IDICntOverEnable = 0;

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_4;
 FUNC_1(VAR_16, VAR_18, VAR_19);
 VAR_15->IDICntMatchEnable = 0;

 VAR_18[0] = 0x00;
 VAR_18[1] = 0x80;
 for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
  VAR_18[2] = VAR_7 + VAR_17;
  FUNC_1(VAR_16, VAR_18, VAR_19);
  VAR_15->CntMatchValue[VAR_17] = 0x8000;
 }

 VAR_18[0] = 0x00;
 VAR_18[1] = 0x00;
 for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
  VAR_18[2] = VAR_8 + VAR_17;
  FUNC_1(VAR_16, VAR_18, VAR_19);
  VAR_15->CntResValue[VAR_17] = 0x0000;
 }

 VAR_18[0] = 0xff;
 VAR_18[2] = VAR_6;
 FUNC_1(VAR_16, VAR_18, VAR_19);

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_0;
 FUNC_1(VAR_16, VAR_18, VAR_19);
 VAR_15->IDICntEdge = 0x00;

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_2;
 FUNC_1(VAR_16, VAR_18, VAR_19);
 VAR_15->IDIFiltersEn = 0x00;

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_3;
 FUNC_1(VAR_16, VAR_18, VAR_19);
 VAR_15->IDIPatMatchEn = 0x00;

 VAR_18[0] = 0x00;
 VAR_18[2] = VAR_9;
 FUNC_1(VAR_16, VAR_18, VAR_19);
 VAR_15->IDIPatMatchValue = 0x00;

 return 0;
}
