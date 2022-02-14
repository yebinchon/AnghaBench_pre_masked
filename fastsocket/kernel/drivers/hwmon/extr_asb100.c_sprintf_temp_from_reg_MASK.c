
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(u16 VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
 case 1: case 2:
  VAR_3 = FUNC_2(VAR_1, "%d\n", FUNC_0(VAR_0));
  break;
 case 0: case 3: default:
  VAR_3 = FUNC_2(VAR_1, "%d\n", FUNC_1(VAR_0));
  break;
 }
 return VAR_3;
}
