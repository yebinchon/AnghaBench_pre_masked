
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_rng {int dummy; } ;
struct TYPE_2__ {int (* rng_reset ) (struct crypto_rng*,int *,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct crypto_rng*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct crypto_rng *VAR_2, u8 *VAR_3, unsigned int VAR_4)
{
 u8 *VAR_5 = ((void*)0);
 int VAR_6;

 if (!VAR_3 && VAR_4) {
  VAR_5 = FUNC_3(VAR_4, VAR_1);
  if (!VAR_5)
   return -VAR_0;

  FUNC_1(VAR_5, VAR_4);
  VAR_3 = VAR_5;
 }

 VAR_6 = FUNC_0(VAR_2)->rng_reset(VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_5);
 return VAR_6;
}
