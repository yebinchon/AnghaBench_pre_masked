
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct crypto_cipher {int dummy; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; int * iv; } ;


 int * FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (struct crypto_cipher*) ;
 unsigned int FUNC_2 (struct crypto_cipher*) ;
 int FUNC_3 (struct crypto_cipher*,int *,int *) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct blkcipher_walk *VAR_0,
       struct crypto_cipher *VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3 = FUNC_1(VAR_1);
 u8 *VAR_4 = VAR_0->iv;
 u8 VAR_5[VAR_2 + VAR_3];
 u8 *VAR_6 = FUNC_0(VAR_5 + 0, VAR_3 + 1);
 u8 *VAR_7 = VAR_0->src.virt.addr;
 u8 *VAR_8 = VAR_0->dst.virt.addr;
 unsigned int VAR_9 = VAR_0->nbytes;

 FUNC_3(VAR_1, VAR_6, VAR_4);
 FUNC_5(VAR_6, VAR_7, VAR_9);
 FUNC_6(VAR_8, VAR_6, VAR_9);

 FUNC_4(VAR_4, VAR_2);
}
