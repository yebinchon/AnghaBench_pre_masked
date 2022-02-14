
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sinfo {void (* fn ) (struct crypto_tfm*,u8*,u8 const*) ;int t; int tfm; } ;
struct TYPE_6__ {int * mulinc; int table; } ;
struct priv {TYPE_1__ table; int child; } ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_4__ virt; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_2__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_5__ dst; TYPE_3__ src; scalar_t__ iv; } ;
struct blkcipher_desc {int dummy; } ;
typedef int be128 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sinfo*,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct blkcipher_desc *VAR_1,
   struct blkcipher_walk *VAR_2, struct priv *VAR_3,
   void (*VAR_4)(struct crypto_tfm *, u8 *, const u8 *))
{
 int VAR_5;
 unsigned int VAR_6;
 const int VAR_7 = VAR_0;
 struct sinfo VAR_8 = {
  .tfm = FUNC_3(VAR_3->child),
  .fn = VAR_4
 };
 be128 *VAR_9;
 u8 *VAR_10;
 u8 *VAR_11;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (!(VAR_6 = VAR_2->nbytes))
  return VAR_5;

 VAR_10 = VAR_2->src.virt.addr;
 VAR_11 = VAR_2->dst.virt.addr;


 VAR_9 = (be128 *)VAR_2->iv;
 VAR_8.t = *VAR_9;


 FUNC_5(&VAR_8.t, VAR_3->table.table);

 goto first;

 for (;;) {
  do {


   FUNC_0(&VAR_8.t, &VAR_8.t,
      &VAR_3->table.mulinc[FUNC_4(VAR_9)]);
   FUNC_6(VAR_9);

first:
   FUNC_7(&VAR_8, VAR_11, VAR_10);

   VAR_10 += VAR_7;
   VAR_11 += VAR_7;
  } while ((VAR_6 -= VAR_7) >= VAR_7);

  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_6);
  if (!(VAR_6 = VAR_2->nbytes))
   break;

  VAR_10 = VAR_2->src.virt.addr;
  VAR_11 = VAR_2->dst.virt.addr;
 }

 return VAR_5;
}
