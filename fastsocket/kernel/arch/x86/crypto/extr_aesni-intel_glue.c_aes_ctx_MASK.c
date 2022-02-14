
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aes_ctx {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static inline struct crypto_aes_ctx *FUNC_2(void *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;
 unsigned long VAR_3 = VAR_0;

 if (VAR_3 <= FUNC_1())
  VAR_3 = 1;
 return (struct crypto_aes_ctx *)FUNC_0(VAR_2, VAR_3);
}
