
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(void)
{
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6;
 u64 VAR_7;

 if (!FUNC_3(&VAR_6))
  return;
 FUNC_5(&VAR_2, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (!FUNC_7(VAR_5, FUNC_2(VAR_3)))
   continue;

  FUNC_4(FUNC_0(VAR_5), VAR_7);
  VAR_7 &= ~(VAR_0|VAR_1);
  FUNC_8(FUNC_0(VAR_5), VAR_7);
  FUNC_1(VAR_5, FUNC_2(VAR_3));
 }
 FUNC_6(&VAR_2, VAR_4);
}
