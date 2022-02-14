
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct shash_desc {int dummy; } ;
struct crypto_alg {int dummy; } ;



 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct crypto_alg *VAR_1, u32 VAR_2,
      u32 VAR_3)
{
 switch (VAR_3 & VAR_0) {
 case 128:
  return sizeof(struct shash_desc *);
 }

 return 0;
}
