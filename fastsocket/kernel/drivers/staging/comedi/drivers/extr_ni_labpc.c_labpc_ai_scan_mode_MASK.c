
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {int chanlist_len; int * chanlist; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static enum scan_mode FUNC_2(const struct comedi_cmd *VAR_4)
{
 if (VAR_4->chanlist_len == 1)
  return VAR_2;


 if (VAR_4->chanlist == ((void*)0))
  return VAR_1;

 if (FUNC_0(VAR_4->chanlist[0]) == FUNC_0(VAR_4->chanlist[1]))
  return VAR_3;

 if (FUNC_0(VAR_4->chanlist[0]) < FUNC_0(VAR_4->chanlist[1]))
  return VAR_1;

 if (FUNC_0(VAR_4->chanlist[0]) > FUNC_0(VAR_4->chanlist[1]))
  return VAR_0;

 FUNC_1("ni_labpc: bug! this should never happen\n");

 return 0;
}
