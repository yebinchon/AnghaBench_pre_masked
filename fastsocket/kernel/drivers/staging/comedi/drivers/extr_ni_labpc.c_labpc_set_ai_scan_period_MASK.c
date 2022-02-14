
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {scalar_t__ scan_begin_src; scalar_t__ convert_src; unsigned int scan_begin_arg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_cmd*) ;

__attribute__((used)) static void FUNC_1(struct comedi_cmd *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->scan_begin_src != VAR_1)
  return;

 if (FUNC_0(VAR_2) == VAR_0 &&
     VAR_2->convert_src == VAR_1)
  return;

 VAR_2->scan_begin_arg = VAR_3;
}
