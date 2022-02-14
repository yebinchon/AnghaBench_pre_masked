
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_6)
{
 BYTE VAR_7;
 unsigned short VAR_8;


 VAR_7 = VAR_3 | VAR_0 | VAR_5;
 FUNC_0(VAR_7, VAR_6->iobase + 15);
 VAR_8 = 2000;
 VAR_7 = (BYTE) (0xff & VAR_8);
 FUNC_0(VAR_7, VAR_6->iobase + 12);
 VAR_7 = (BYTE) (0xff & (VAR_8 >> 8));
 FUNC_0(VAR_7, VAR_6->iobase + 12);


 VAR_7 = VAR_4 | VAR_1 | VAR_5;
 FUNC_0(VAR_7, VAR_6->iobase + 15);
 VAR_8 = 10;
 VAR_7 = (BYTE) (0xff & VAR_8);
 FUNC_0(VAR_7, VAR_6->iobase + 13);
 VAR_7 = (BYTE) (0xff & (VAR_8 >> 8));
 FUNC_0(VAR_7, VAR_6->iobase + 13);


 VAR_7 = VAR_4 | VAR_2 | VAR_5;
 FUNC_0(VAR_7, VAR_6->iobase + 15);
 VAR_8 = 1000;
 VAR_7 = (BYTE) (0xff & VAR_8);
 FUNC_0(VAR_7, VAR_6->iobase + 14);
 VAR_7 = (BYTE) (0xff & (VAR_8 >> 8));
 FUNC_0(VAR_7, VAR_6->iobase + 14);
}
