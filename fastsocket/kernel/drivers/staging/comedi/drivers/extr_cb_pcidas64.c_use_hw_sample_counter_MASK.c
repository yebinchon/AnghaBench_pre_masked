
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct comedi_cmd *VAR_2)
{

 return 0;

 if (VAR_2->stop_src == VAR_0 && VAR_2->stop_arg <= VAR_1)
  return 1;
 else
  return 0;
}
