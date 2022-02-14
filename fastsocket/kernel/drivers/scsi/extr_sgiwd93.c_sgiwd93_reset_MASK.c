
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpc3_scsiregs {scalar_t__ ctrl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(unsigned long VAR_1)
{
 struct hpc3_scsiregs *VAR_2 = (struct hpc3_scsiregs *) VAR_1;

 VAR_2->ctrl = VAR_0;
 FUNC_0(50);
 VAR_2->ctrl = 0;
}
