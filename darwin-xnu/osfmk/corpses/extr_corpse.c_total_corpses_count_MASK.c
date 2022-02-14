
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union corpse_creation_gate {unsigned long corpses; int value; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

unsigned long
FUNC_1(void)
{
 union corpse_creation_gate VAR_2;

 VAR_2.value = FUNC_0(&VAR_0, VAR_1);
 return VAR_2.corpses;
}
