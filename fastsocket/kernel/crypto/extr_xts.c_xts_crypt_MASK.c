
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct xts_crypt_req {unsigned int const tbuflen; int crypt_ctx; int (* crypt_fn ) (int ,int *,unsigned int) ;int tweak_ctx; int (* tweak_fn ) (int ,int *,scalar_t__) ;int * tbuf; } ;
struct scatterlist {int dummy; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; scalar_t__ iv; } ;
struct blkcipher_desc {int dummy; } ;
typedef int be128 ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_3 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_4 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_5 (int *,int *) ;
 unsigned int FUNC_6 (unsigned int,unsigned int const) ;
 int FUNC_7 (int ,int *,scalar_t__) ;
 int FUNC_8 (int ,int *,unsigned int) ;

int FUNC_9(struct blkcipher_desc *VAR_1, struct scatterlist *VAR_2,
       struct scatterlist *VAR_3, unsigned int VAR_4,
       struct xts_crypt_req *VAR_5)
{
 const unsigned int VAR_6 = VAR_0;
 const unsigned int VAR_7 = VAR_5->tbuflen / VAR_6;
 struct blkcipher_walk VAR_8;
 unsigned int VAR_9;
 be128 *VAR_10, *VAR_11, *VAR_12;
 be128 *VAR_13 = VAR_5->tbuf;
 int VAR_14, VAR_15;

 FUNC_0(VAR_7 < 1);

 FUNC_3(&VAR_8, VAR_2, VAR_3, VAR_4);

 VAR_14 = FUNC_4(VAR_1, &VAR_8);
 VAR_4 = VAR_8.nbytes;
 if (!VAR_4)
  return VAR_14;

 VAR_9 = FUNC_6(VAR_4 / VAR_6, VAR_7);
 VAR_10 = (be128 *)VAR_8.src.virt.addr;
 VAR_11 = (be128 *)VAR_8.dst.virt.addr;


 VAR_5->tweak_fn(VAR_5->tweak_ctx, (u8 *)&VAR_13[0], VAR_8.iv);

 VAR_15 = 0;
 goto first;

 for (;;) {
  do {
   for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
    FUNC_5(&VAR_13[VAR_15], VAR_12);
first:
    VAR_12 = &VAR_13[VAR_15];


    FUNC_1(VAR_11 + VAR_15, VAR_12, VAR_10 + VAR_15);
   }


   VAR_5->crypt_fn(VAR_5->crypt_ctx, (u8 *)VAR_11,
          VAR_9 * VAR_6);


   for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
    FUNC_1(VAR_11 + VAR_15, VAR_11 + VAR_15, &VAR_13[VAR_15]);

   VAR_10 += VAR_9;
   VAR_11 += VAR_9;
   VAR_4 -= VAR_9 * VAR_6;
   VAR_9 = FUNC_6(VAR_4 / VAR_6, VAR_7);
  } while (VAR_9 > 0);

  *(be128 *)VAR_8.iv = *VAR_12;

  VAR_14 = FUNC_2(VAR_1, &VAR_8, VAR_4);
  VAR_4 = VAR_8.nbytes;
  if (!VAR_4)
   break;

  VAR_9 = FUNC_6(VAR_4 / VAR_6, VAR_7);
  VAR_10 = (be128 *)VAR_8.src.virt.addr;
  VAR_11 = (be128 *)VAR_8.dst.virt.addr;
 }

 return VAR_14;
}
