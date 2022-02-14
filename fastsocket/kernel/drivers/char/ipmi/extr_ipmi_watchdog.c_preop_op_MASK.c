
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_6, char *VAR_7)
{
 if (VAR_7)
  FUNC_1(VAR_7, VAR_4);

 if (!VAR_6)
  return 0;

 if (FUNC_0(VAR_6, "preop_none") == 0)
  VAR_5 = VAR_2;
 else if (FUNC_0(VAR_6, "preop_panic") == 0)
  VAR_5 = VAR_3;
 else if (FUNC_0(VAR_6, "preop_give_data") == 0)
  VAR_5 = VAR_1;
 else
  return -VAR_0;
 FUNC_1(VAR_4, VAR_6);
 return 0;
}
