
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {int scan_begin_src; int convert_src; int * chanlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_2(struct comedi_cmd VAR_10)
{
 int VAR_11;
 int VAR_12;




 VAR_12 = FUNC_0(VAR_10.chanlist[0]);
 VAR_11 = VAR_8;
 if (VAR_12 != VAR_1)
  VAR_11 |= VAR_5;
 if (VAR_12 == VAR_0)
  VAR_11 |= VAR_3;

 if (FUNC_1(VAR_10.chanlist[0]) & VAR_7)
  VAR_11 |= VAR_6;
 switch (VAR_10.scan_begin_src) {
 case 129:
  switch (VAR_10.convert_src) {
  case 128:

   VAR_11 |= VAR_4;
   break;
  case 130:

   VAR_11 |= VAR_9;
   break;
  default:
   break;
  }
  break;
 case 128:

  VAR_11 |= VAR_2 | VAR_4;
  break;
 case 130:

  VAR_11 |= VAR_2 | VAR_9;
  break;
 default:
  break;
 }

 return VAR_11;
}
