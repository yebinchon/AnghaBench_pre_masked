
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (scalar_t__,char*,int,int) ;
 int FUNC_5 (scalar_t__,char*,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_3)
{
 if (VAR_3)
 {

  if (VAR_2 == ((void*)0))
   VAR_2 = FUNC_0(1);
  FUNC_3(VAR_1, 0, 321*8*2);
  FUNC_4(VAR_1 + 321*8*2, (char *)VAR_2 + 321*8*2, 321*224, 1);
  FUNC_3(VAR_1 + 321*232*2, 0, 321*8*2);
  FUNC_1();
  VAR_2 = ((void*)0);
 }
 else
 {
  int VAR_4;

  FUNC_5(VAR_1, "skin/background.png", VAR_0);

  for (VAR_4 = 239; VAR_4 > 0; VAR_4--)
   FUNC_2(VAR_1 + 321*2*VAR_4, VAR_1 + 320*2*VAR_4, 320*2);
 }
}
