
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {int scan_begin_src; int convert_src; unsigned int convert_arg; unsigned int scan_begin_arg; unsigned int chanlist_len; scalar_t__ stop_src; int const stop_arg; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;



__attribute__((used)) static unsigned int FUNC_0(struct comedi_cmd *VAR_2)
{
 unsigned int VAR_3 = VAR_0;
 static const int VAR_4 = 2;
 unsigned int VAR_5 = 300000000;
 unsigned int VAR_6;


 switch (VAR_2->scan_begin_src) {
 case 129:
  if (VAR_2->convert_src == 128)
   VAR_3 = (VAR_5 / VAR_2->convert_arg) * VAR_4;
  break;
 case 128:
  VAR_3 = (VAR_5 / (VAR_2->scan_begin_arg * VAR_2->chanlist_len)) *
      VAR_4;
  break;
 default:
  VAR_3 = VAR_0;
  break;
 }


 VAR_6 = VAR_0;

 if (VAR_2->stop_src == VAR_1 &&
     VAR_2->stop_arg * VAR_2->chanlist_len * VAR_4 < VAR_6)
  VAR_6 = VAR_2->stop_arg * VAR_2->chanlist_len * VAR_4;

 if (VAR_3 > VAR_6)
  VAR_3 = VAR_6;
 if (VAR_3 < VAR_4)
  VAR_3 = VAR_4;

 return VAR_3;
}
