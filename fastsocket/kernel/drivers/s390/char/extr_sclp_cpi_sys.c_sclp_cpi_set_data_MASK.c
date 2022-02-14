
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_5(const char *VAR_5, const char *VAR_6, const char *VAR_7,
        const u64 VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0("system_name", VAR_5);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_0("sysplex_name", VAR_6);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_0("system_type", VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_2(&VAR_0);
 FUNC_4(VAR_3, VAR_5);
 FUNC_4(VAR_1, VAR_6);
 FUNC_4(VAR_4, VAR_7);
 VAR_2 = VAR_8;

 VAR_9 = FUNC_1();
 FUNC_3(&VAR_0);

 return VAR_9;
}
