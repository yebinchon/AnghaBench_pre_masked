
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{
 static int VAR_2 = -1;
 char VAR_3[128];

 if (VAR_1 == VAR_2)
  return 0;
 VAR_2 = VAR_1;

 FUNC_1(VAR_3, sizeof(VAR_3), "%s/op_lcdrate.sh %d",
   VAR_0, VAR_1 ? 50 : 60);
 return FUNC_0(VAR_3);
}
