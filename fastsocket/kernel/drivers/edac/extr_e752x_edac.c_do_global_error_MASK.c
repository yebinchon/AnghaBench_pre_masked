
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(int VAR_5, u32 VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 11; VAR_7++) {
  if (VAR_6 & (1 << VAR_7)) {




   if ((VAR_7 == VAR_0) || VAR_4)
    FUNC_0(VAR_1, "%sError %s\n",
     VAR_2[VAR_5],
     VAR_3[VAR_7]);
  }
 }
}
