
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suffix ;
struct crypto_alg {char* cra_driver_name; int cra_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct crypto_alg *VAR_2)
{
 static const char VAR_3[] = "-generic";
 char *VAR_4 = VAR_2->cra_driver_name;
 int VAR_5;

 if (*VAR_4)
  return 0;

 VAR_5 = FUNC_1(VAR_4, VAR_2->cra_name, VAR_0);
 if (VAR_5 + sizeof(VAR_3) > VAR_0)
  return -VAR_1;

 FUNC_0(VAR_4 + VAR_5, VAR_3, sizeof(VAR_3));
 return 0;
}
