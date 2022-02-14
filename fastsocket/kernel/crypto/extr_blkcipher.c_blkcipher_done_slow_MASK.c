
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_walk {int out; scalar_t__ buffer; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned int) ;
 int * FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (struct crypto_blkcipher*) ;
 int FUNC_3 (int *,int *,unsigned int,int) ;

__attribute__((used)) static inline unsigned int FUNC_4(struct crypto_blkcipher *VAR_0,
            struct blkcipher_walk *VAR_1,
            unsigned int VAR_2)
{
 u8 *VAR_3;
 unsigned int VAR_4 = FUNC_2(VAR_0);

 VAR_3 = (u8 *)FUNC_0((unsigned long)VAR_1->buffer, VAR_4 + 1);
 VAR_3 = FUNC_1(VAR_3, VAR_2);
 FUNC_3(VAR_3, &VAR_1->out, VAR_2, 1);
 return VAR_2;
}
