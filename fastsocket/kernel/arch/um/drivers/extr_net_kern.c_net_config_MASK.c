
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,char**,char**) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, char **VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_4, &VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;




 VAR_2 = FUNC_3(VAR_2, VAR_1);
 if (VAR_2 == ((void*)0)) {
         *VAR_3 = "net_config failed to strdup string";
  return -VAR_0;
 }
 VAR_5 = !FUNC_1(VAR_2, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_2);
 return VAR_5;
}
