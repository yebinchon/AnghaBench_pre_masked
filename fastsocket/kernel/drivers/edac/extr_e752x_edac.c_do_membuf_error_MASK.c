
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if (VAR_2 & (1 << VAR_3))
   FUNC_0(VAR_0, "Non-Fatal Error %s\n",
    VAR_1[VAR_3]);
 }
}
