
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct TYPE_4__ {unsigned int maxauthsize; } ;
struct TYPE_3__ {unsigned int authsize; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct crypto_aead*) ;
 TYPE_1__* FUNC_1 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_1,
      unsigned int VAR_2)
{
 if (VAR_2 > FUNC_0(VAR_1)->maxauthsize)
  return -VAR_0;

 FUNC_1(VAR_1)->authsize = VAR_2;

 return 0;
}
