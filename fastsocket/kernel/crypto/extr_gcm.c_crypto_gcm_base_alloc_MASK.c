
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int dummy; } ;
struct crypto_instance {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_instance* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (struct rtattr*) ;
 struct crypto_instance* FUNC_4 (struct rtattr**,char*,char const*,char const*) ;
 int FUNC_5 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static struct crypto_instance *FUNC_6(struct rtattr **VAR_2)
{
 int VAR_3;
 const char *VAR_4;
 const char *VAR_5;
 char VAR_6[VAR_0];

 VAR_4 = FUNC_3(VAR_2[1]);
 VAR_3 = FUNC_2(VAR_4);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_3);

 VAR_5 = FUNC_3(VAR_2[2]);
 VAR_3 = FUNC_2(VAR_5);
 if (FUNC_1(VAR_5))
  return FUNC_0(VAR_3);

 if (FUNC_5(VAR_6, VAR_0, "gcm_base(%s,%s)",
       VAR_4, VAR_5) >= VAR_0)
  return FUNC_0(-VAR_1);

 return FUNC_4(VAR_2, VAR_6, VAR_4, VAR_5);
}
