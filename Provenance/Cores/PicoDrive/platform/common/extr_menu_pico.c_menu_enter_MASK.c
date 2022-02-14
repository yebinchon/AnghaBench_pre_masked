
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int,int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(int VAR_4)
{
 if (VAR_4)
 {
  FUNC_0(0);
 }
 else
 {
  int VAR_5;
  char VAR_6[256];
  VAR_5 = FUNC_2(VAR_6, 256);
  FUNC_5(VAR_6 + VAR_5, "background.png");


  if (FUNC_4(VAR_1, VAR_6, VAR_0,
      VAR_3, VAR_2) < 0)
   FUNC_1(VAR_1, 0, VAR_3 * VAR_2 * 2);
 }

 FUNC_3(VAR_4);
}
