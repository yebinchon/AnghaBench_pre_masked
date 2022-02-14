
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_ops {int owner; } ;


 struct zcrypt_ops* FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ) ;

struct zcrypt_ops *FUNC_3(unsigned char *VAR_0, int VAR_1)
{
 struct zcrypt_ops *VAR_2 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2) {
  FUNC_1(VAR_0);
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 }

 if ((!VAR_2) || (!FUNC_2(VAR_2->owner)))
  return ((void*)0);
 return VAR_2;
}
