
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int) ;

void
FUNC_7(int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 u32 *VAR_5;
 int VAR_6;

 FUNC_4(VAR_1, VAR_2);





 VAR_5 = FUNC_5(VAR_1);
 VAR_6 = 1;
 VAR_4 = FUNC_6(VAR_1);

 for (VAR_3=0; VAR_3<VAR_4; VAR_3++, VAR_5++) {
  if (!FUNC_1(*VAR_5))
   continue;
  if (VAR_6)
   if (FUNC_0(*VAR_5) != VAR_0)
    FUNC_3(VAR_5, VAR_2);
  VAR_6 = !FUNC_2(*VAR_5);
 }
}
