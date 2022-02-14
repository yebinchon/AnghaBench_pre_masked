
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char const*,char**,int) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, enum qeth_prot_versions VAR_3,
    u8 *VAR_4, int *VAR_5)
{
 const char *VAR_6, *VAR_7;
 char *VAR_8;
 char VAR_9[40] = {0, };

 VAR_6 = VAR_2;

 VAR_7 = FUNC_2(VAR_6, '/');
 if (!VAR_7 || (VAR_7 - VAR_6 >= 40)) {
  return -VAR_0;
 }
 FUNC_4(VAR_9, VAR_6, VAR_7 - VAR_6);
 if (FUNC_0(VAR_9, VAR_3, VAR_4)) {
  return -VAR_0;
 }
 VAR_6 = VAR_7 + 1;
 *VAR_5 = FUNC_1(VAR_6, &VAR_8, 10);
 if (!FUNC_3(VAR_6) ||
     (VAR_8 == VAR_6) ||
     (*VAR_5 > ((VAR_3 == VAR_1) ? 32 : 128))) {
  return -VAR_0;
 }
 return 0;
}
