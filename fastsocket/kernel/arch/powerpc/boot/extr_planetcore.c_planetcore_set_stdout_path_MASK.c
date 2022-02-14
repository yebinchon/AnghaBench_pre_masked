
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*,char const*) ;
 void* FUNC_2 (char*) ;
 char* FUNC_3 (void*,int ,int ) ;
 char* FUNC_4 (char const*,int ) ;
 int VAR_2 ;
 int FUNC_5 (void*,char*,char*) ;

void FUNC_6(const char *VAR_3)
{
 char *VAR_4;
 const char *VAR_5;
 void *VAR_6, *VAR_7;

 VAR_5 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_1(((void*)0), "linux,planetcore-label",
                                    VAR_5);
 if (!VAR_6)
  return;

 VAR_4 = FUNC_3(VAR_6, VAR_2, VAR_0);
 if (!VAR_4)
  return;

 VAR_7 = FUNC_2("/chosen");
 if (!VAR_7)
  VAR_7 = FUNC_0(((void*)0), "chosen");
 if (!VAR_7)
  return;

 FUNC_5(VAR_7, "linux,stdout-path", VAR_4);
}
