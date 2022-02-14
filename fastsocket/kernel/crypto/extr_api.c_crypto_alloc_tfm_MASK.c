
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_type {int dummy; } ;
typedef void crypto_alg ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,struct crypto_type const*) ;
 void* FUNC_4 (char const*,struct crypto_type const*,int ,int ) ;
 int FUNC_5 (void*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;

void *FUNC_7(const char *VAR_3,
         const struct crypto_type *VAR_4, u32 VAR_5, u32 VAR_6)
{
 void *VAR_7;
 int VAR_8;

 for (;;) {
  struct crypto_alg *VAR_9;

  VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
  if (FUNC_1(VAR_9)) {
   VAR_8 = FUNC_2(VAR_9);
   goto err;
  }

  VAR_7 = FUNC_3(VAR_9, VAR_4);
  if (!FUNC_1(VAR_7))
   return VAR_7;

  FUNC_5(VAR_9);
  VAR_8 = FUNC_2(VAR_7);

err:
  if (VAR_8 != -VAR_0)
   break;
  if (FUNC_6(VAR_2)) {
   VAR_8 = -VAR_1;
   break;
  }
 }

 return FUNC_0(VAR_8);
}
