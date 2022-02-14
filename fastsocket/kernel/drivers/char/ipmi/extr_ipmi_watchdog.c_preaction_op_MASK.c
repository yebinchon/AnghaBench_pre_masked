
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_7, char *VAR_8)
{
 if (VAR_8)
  FUNC_1(VAR_8, VAR_5);

 if (!VAR_7)
  return 0;

 if (FUNC_0(VAR_7, "pre_none") == 0)
  VAR_6 = VAR_3;
 else if (FUNC_0(VAR_7, "pre_smi") == 0)
  VAR_6 = VAR_4;




 else if (FUNC_0(VAR_7, "pre_int") == 0)
  VAR_6 = VAR_1;
 else
  return -VAR_0;
 FUNC_1(VAR_5, VAR_7);
 return 0;
}
