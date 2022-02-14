
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int full_filename ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 int FUNC_1 (char*,char*,char*,int,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(void *VAR_7)
{
 char VAR_8[VAR_0];
 char VAR_9[256];
 int VAR_10;

 FUNC_0(VAR_8, sizeof(VAR_8), "%s/data/%s", VAR_5, VAR_1);


 VAR_10 = FUNC_1(VAR_9, "%s=%d\n" "%s=%d\n",

  VAR_3, (int)VAR_6,
  VAR_2, (int)VAR_4
 );

 return FUNC_2(VAR_8, VAR_9, VAR_10);
}
