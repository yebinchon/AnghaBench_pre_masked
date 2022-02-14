
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

int FUNC_2 (void)
{
 int VAR_4;

 if(!VAR_3) return(0);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  if (VAR_0[VAR_4] != 0)
      FUNC_0(VAR_0[VAR_4]);
  VAR_0[VAR_4]=0;
 }
 FUNC_1(VAR_2);
 return(1);
}
