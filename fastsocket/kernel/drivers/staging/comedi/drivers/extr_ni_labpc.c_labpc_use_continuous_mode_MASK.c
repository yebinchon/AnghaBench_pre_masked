
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {scalar_t__ scan_begin_src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_cmd const*) ;

__attribute__((used)) static int FUNC_1(const struct comedi_cmd *VAR_2)
{
 if (FUNC_0(VAR_2) == VAR_0)
  return 1;

 if (VAR_2->scan_begin_src == VAR_1)
  return 1;

 return 0;
}
