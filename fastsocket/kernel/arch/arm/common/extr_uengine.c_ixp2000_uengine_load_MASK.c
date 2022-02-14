
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixp2000_uengine_code {int num_insns; int insns; int uengine_parameters; } ;


 int FUNC_0 (struct ixp2000_uengine_code*) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,struct ixp2000_uengine_code*) ;

int FUNC_6(int VAR_1, struct ixp2000_uengine_code *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_2))
  return 1;

 if (!(VAR_0 & (1 << VAR_1)))
  return 1;

 FUNC_3(1 << VAR_1);
 FUNC_4(VAR_1, VAR_2->uengine_parameters);
 if (FUNC_5(VAR_1, VAR_2))
  return 1;
 FUNC_2(VAR_1, VAR_2->insns, VAR_2->num_insns);

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_1(VAR_1, VAR_3, 0);

 return 0;
}
