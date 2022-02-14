
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {scalar_t__ convert_src; int convert_arg; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct comedi_cmd VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;

 if (VAR_3.convert_src == VAR_0)
  VAR_5 = 1000000000 / VAR_3.convert_arg;

 else
  VAR_5 = 0xffffffff;


 VAR_4 = (VAR_5 / 3) * VAR_2;


 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1 - VAR_1 % VAR_2;
 else if (VAR_4 < VAR_2)
  VAR_4 = VAR_2;

 return VAR_4;
}
