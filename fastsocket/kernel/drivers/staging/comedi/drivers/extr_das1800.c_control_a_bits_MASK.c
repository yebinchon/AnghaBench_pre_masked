
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {scalar_t__ stop_src; int start_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



__attribute__((used)) static int FUNC_0(struct comedi_cmd VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_3;
 if (VAR_5.stop_src == 129) {
  VAR_6 |= VAR_0;
 }
 switch (VAR_5.start_src) {
 case 129:
  VAR_6 |= VAR_4 | VAR_2;
  break;
 case 128:
  VAR_6 |= VAR_1;
  break;
 default:
  break;
 }

 return VAR_6;
}
