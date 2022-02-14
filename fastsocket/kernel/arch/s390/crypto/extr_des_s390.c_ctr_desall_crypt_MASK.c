
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct crypt_s390_des_ctx {int key; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; int * iv; TYPE_4__ src; TYPE_2__ dst; } ;
struct blkcipher_desc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,int) ;
 int FUNC_3 (long,int ,int *,int *,int,int *) ;
 int FUNC_4 (int *,int) ;
 int * VAR_2 ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(struct blkcipher_desc *VAR_3, long VAR_4,
       struct crypt_s390_des_ctx *VAR_5, struct blkcipher_walk *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_3, VAR_6, VAR_0);
 unsigned int VAR_8, VAR_9, VAR_10;
 u8 VAR_11[VAR_0];
 u8 *VAR_12, *VAR_13;

 FUNC_5(VAR_2, VAR_6->iv, VAR_0);
 while ((VAR_10 = VAR_6->nbytes) >= VAR_0) {
  VAR_12 = VAR_6->dst.virt.addr;
  VAR_13 = VAR_6->src.virt.addr;
  while (VAR_10 >= VAR_0) {

   VAR_9 = (VAR_10 > VAR_1) ? VAR_1 :
    VAR_10 & ~(VAR_0 - 1);
   for (VAR_8 = VAR_0; VAR_8 < VAR_9; VAR_8 += VAR_0) {
    FUNC_5(VAR_2 + VAR_8, VAR_2 + VAR_8 - VAR_0,
           VAR_0);
    FUNC_4(VAR_2 + VAR_8, VAR_0);
   }
   VAR_7 = FUNC_3(VAR_4, VAR_5->key, VAR_12, VAR_13, VAR_9, VAR_2);
   FUNC_0((VAR_7 < 0) || (VAR_7 != VAR_9));
   if (VAR_9 > VAR_0)
    FUNC_5(VAR_2, VAR_2 + VAR_9 - VAR_0,
           VAR_0);
   FUNC_4(VAR_2, VAR_0);
   VAR_12 += VAR_9;
   VAR_13 += VAR_9;
   VAR_10 -= VAR_9;
  }
  VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_10);
 }


 if (VAR_10) {
  VAR_12 = VAR_6->dst.virt.addr;
  VAR_13 = VAR_6->src.virt.addr;
  VAR_7 = FUNC_3(VAR_4, VAR_5->key, VAR_11, VAR_13,
           VAR_0, VAR_2);
  FUNC_0(VAR_7 < 0 || VAR_7 != VAR_0);
  FUNC_5(VAR_12, VAR_11, VAR_10);
  FUNC_4(VAR_2, VAR_0);
  VAR_7 = FUNC_1(VAR_3, VAR_6, 0);
 }
 FUNC_5(VAR_6->iv, VAR_2, VAR_0);
 return VAR_7;
}
