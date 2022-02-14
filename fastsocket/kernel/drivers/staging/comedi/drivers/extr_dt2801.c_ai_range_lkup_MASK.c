
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_lrange {int dummy; } ;


 struct comedi_lrange const VAR_0 ;
 struct comedi_lrange const VAR_1 ;
 struct comedi_lrange const VAR_2 ;
 struct comedi_lrange const VAR_3 ;
 struct comedi_lrange const VAR_4 ;
 struct comedi_lrange const VAR_5 ;

__attribute__((used)) static const struct comedi_lrange *FUNC_0(int VAR_6, int VAR_7)
{
 switch (VAR_6) {
 case 0:
  return (VAR_7) ?
      &VAR_2 :
      &VAR_1;
 case 1:
  return (VAR_7) ? &VAR_3 : &VAR_0;
 case 2:
  return &VAR_4;
 }
 return &VAR_5;
}
