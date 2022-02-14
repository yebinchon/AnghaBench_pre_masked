
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sinfo {struct crypto_tfm* tfm; void (* fn ) (struct crypto_tfm*,u8*,u8 const*) ;int * t; } ;
struct priv {int tweak; int child; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; u8* iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {int dummy; } ;
typedef int be128 ;


 int VAR_0 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 struct crypto_tfm* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sinfo*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_1,
   struct blkcipher_walk *VAR_2, struct priv *VAR_3,
   void (*VAR_4)(struct crypto_tfm *, u8 *, const u8 *),
   void (*VAR_5)(struct crypto_tfm *, u8 *, const u8 *))
{
 int VAR_6;
 unsigned int VAR_7;
 const int VAR_8 = VAR_0;
 struct sinfo VAR_9 = {
  .tfm = FUNC_2(VAR_3->child),
  .fn = VAR_5
 };
 u8 *VAR_10;
 u8 *VAR_11;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_2->nbytes)
  return VAR_6;

 VAR_9.t = (be128 *)VAR_2->iv;
 VAR_7 = VAR_2->nbytes;

 VAR_10 = VAR_2->src.virt.addr;
 VAR_11 = VAR_2->dst.virt.addr;


 VAR_4(FUNC_2(VAR_3->tweak), VAR_2->iv, VAR_2->iv);

 goto first;

 for (;;) {
  do {
   FUNC_3(VAR_9.t, VAR_9.t);

first:
   FUNC_4(&VAR_9, VAR_11, VAR_10);

   VAR_10 += VAR_8;
   VAR_11 += VAR_8;
  } while ((VAR_7 -= VAR_8) >= VAR_8);

  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_7);
  if (!VAR_2->nbytes)
   break;

  VAR_7 = VAR_2->nbytes;

  VAR_10 = VAR_2->src.virt.addr;
  VAR_11 = VAR_2->dst.virt.addr;
 }

 return VAR_6;
}
