
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ,char*,char*,scalar_t__) ;
 int FUNC_2 (char*,int*,int ) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(char *VAR_3, char *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 *VAR_5 = 0;
 while(VAR_1[VAR_6])
 {
  FUNC_1 (VAR_4, VAR_0, "demos/%s.dm_%d", VAR_3, VAR_1[VAR_6]);
  FUNC_2( VAR_4, VAR_5, VAR_2 );
  if (*VAR_5)
  {
   FUNC_0("Demo file: %s\n", VAR_4);
   break;
  }
  else
   FUNC_0("Not found: %s\n", VAR_4);
  VAR_6++;
 }
}
