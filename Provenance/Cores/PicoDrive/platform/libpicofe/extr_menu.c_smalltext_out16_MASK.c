
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_2, int VAR_3, const char *VAR_4, int VAR_5)
{
 char VAR_6[128];
 int VAR_7 = (VAR_0 - VAR_2) / VAR_1;

 if (VAR_7 < 0)
  return;

 FUNC_1(VAR_6, VAR_4, sizeof(VAR_6));
 if (VAR_7 > sizeof(VAR_6) - 1)
  VAR_7 = sizeof(VAR_6) - 1;
 VAR_6[VAR_7] = 0;

 FUNC_0(VAR_2, VAR_3, VAR_6, VAR_5);
}
