
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
typedef int drv_name ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_tfm*,char*) ;
 char* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (char*,int,char*,char*) ;

int FUNC_3(struct crypto_tfm *VAR_1)
{
 char VAR_2[VAR_0];

 FUNC_2(VAR_2, sizeof(VAR_2), "__driver-%s",
     FUNC_1(VAR_1));

 return FUNC_0(VAR_1, VAR_2);
}
