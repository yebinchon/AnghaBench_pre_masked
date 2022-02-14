
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Port {int portSem; int MagicFlags; int WflushFlag; } ;
struct CmdBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,struct CmdBlk*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(unsigned long VAR_1, struct CmdBlk *VAR_2)
{
 struct Port *VAR_3 = (struct Port *) VAR_1;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->portSem, VAR_4);
 VAR_3->WflushFlag++;
 VAR_3->MagicFlags |= VAR_0;
 FUNC_2(&VAR_3->portSem, VAR_4);
 return FUNC_0(VAR_1, VAR_2);
}
