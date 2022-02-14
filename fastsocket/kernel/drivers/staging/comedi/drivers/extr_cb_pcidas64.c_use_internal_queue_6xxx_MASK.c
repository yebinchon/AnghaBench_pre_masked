
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct comedi_cmd *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 + 1 < VAR_0->chanlist_len; VAR_1++) {
  if (FUNC_1(VAR_0->chanlist[VAR_1 + 1]) !=
      FUNC_1(VAR_0->chanlist[VAR_1]) + 1)
   return 0;
  if (FUNC_2(VAR_0->chanlist[VAR_1 + 1]) !=
      FUNC_2(VAR_0->chanlist[VAR_1]))
   return 0;
  if (FUNC_0(VAR_0->chanlist[VAR_1 + 1]) != FUNC_0(VAR_0->chanlist[VAR_1]))
   return 0;
 }
 return 1;
}
