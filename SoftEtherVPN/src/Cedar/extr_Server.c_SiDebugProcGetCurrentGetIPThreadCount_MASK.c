
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SERVER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;

UINT FUNC_4(SERVER *VAR_2, char *VAR_3, char *VAR_4, UINT VAR_5)
{
 char VAR_6[64], VAR_7[64];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_3(VAR_6, 0, FUNC_1());
 FUNC_3(VAR_7, 0, FUNC_2());

 FUNC_0(VAR_4, 0,
  "Current threads = %s\n"
  "Quota           = %s\n",
  VAR_6, VAR_7);

 return VAR_1;
}
