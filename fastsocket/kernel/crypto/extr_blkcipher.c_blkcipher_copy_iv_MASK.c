
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_walk {unsigned int blocksize; int iv; scalar_t__ buffer; } ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (struct crypto_blkcipher*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int *,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_7(struct blkcipher_walk *VAR_2,
        struct crypto_blkcipher *VAR_3,
        unsigned int VAR_4)
{
 unsigned VAR_5 = VAR_2->blocksize;
 unsigned int VAR_6 = FUNC_2(VAR_3);
 unsigned VAR_7 = FUNC_0(VAR_5, VAR_4 + 1);
 unsigned int VAR_8 = VAR_7 * 2 + VAR_6 + FUNC_5(VAR_7, VAR_6) -
       (VAR_4 + 1);
 u8 *VAR_9;

 VAR_8 += VAR_4 & ~(FUNC_3() - 1);
 VAR_2->buffer = FUNC_4(VAR_8, VAR_1);
 if (!VAR_2->buffer)
  return -VAR_0;

 VAR_9 = (u8 *)FUNC_0((unsigned long)VAR_2->buffer, VAR_4 + 1);
 VAR_9 = FUNC_1(VAR_9, VAR_5) + VAR_7;
 VAR_9 = FUNC_1(VAR_9, VAR_5) + VAR_7;
 VAR_9 = FUNC_1(VAR_9, VAR_6);

 VAR_2->iv = FUNC_6(VAR_9, VAR_2->iv, VAR_6);
 return 0;
}
