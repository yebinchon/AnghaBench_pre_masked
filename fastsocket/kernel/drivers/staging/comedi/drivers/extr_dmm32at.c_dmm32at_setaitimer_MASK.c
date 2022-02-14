
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct comedi_device*,int ,unsigned char) ;

void FUNC_1(struct comedi_device *VAR_11, unsigned int VAR_12)
{
 unsigned char VAR_13, VAR_14, VAR_15;
 unsigned short VAR_16;


 VAR_13 = 200;
 VAR_16 = VAR_12 / 20000;
 VAR_15 = (VAR_16 & 0xff00) >> 8;
 VAR_14 = VAR_16 & 0x00ff;


 FUNC_0(VAR_11, VAR_8, 0);


 FUNC_0(VAR_11, VAR_9, VAR_3);


 FUNC_0(VAR_11, VAR_4, VAR_5);
 FUNC_0(VAR_11, VAR_1, VAR_13);


 FUNC_0(VAR_11, VAR_4, VAR_6);
 FUNC_0(VAR_11, VAR_2, VAR_14);
 FUNC_0(VAR_11, VAR_2, VAR_15);


 FUNC_0(VAR_11, VAR_10, VAR_0 | VAR_7);

}
