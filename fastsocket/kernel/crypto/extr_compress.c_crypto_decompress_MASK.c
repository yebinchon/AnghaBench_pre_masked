
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {TYPE_2__* __crt_alg; } ;
struct TYPE_3__ {int (* coa_decompress ) (struct crypto_tfm*,int const*,unsigned int,int *,unsigned int*) ;} ;
struct TYPE_4__ {TYPE_1__ cra_compress; } ;


 int FUNC_0 (struct crypto_tfm*,int const*,unsigned int,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_0,
                             const u8 *VAR_1, unsigned int VAR_2,
                             u8 *VAR_3, unsigned int *VAR_4)
{
 return VAR_0->__crt_alg->cra_compress.coa_decompress(VAR_0, VAR_1, VAR_2, VAR_3,
                                                    VAR_4);
}
