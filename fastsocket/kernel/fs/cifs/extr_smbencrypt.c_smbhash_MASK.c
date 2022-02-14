
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {struct crypto_blkcipher* tfm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_blkcipher*) ;
 int FUNC_1 (struct crypto_blkcipher*) ;
 int FUNC_2 (int,char*,...) ;
 struct crypto_blkcipher* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_5 (struct crypto_blkcipher*,unsigned char*,int) ;
 int FUNC_6 (struct crypto_blkcipher*) ;
 int FUNC_7 (struct scatterlist*,unsigned char const*,int) ;
 int FUNC_8 (unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_9(unsigned char *VAR_1, const unsigned char *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5[8];
 struct crypto_blkcipher *VAR_6;
 struct scatterlist VAR_7, VAR_8;
 struct blkcipher_desc VAR_9;

 FUNC_8(VAR_3, VAR_5);

 VAR_6 = FUNC_3("ecb(des)", 0, VAR_0);
 if (FUNC_0(VAR_6)) {
  VAR_4 = FUNC_1(VAR_6);
  FUNC_2(1, "could not allocate des crypto API\n");
  goto smbhash_err;
 }

 VAR_9.tfm = VAR_6;

 FUNC_5(VAR_6, VAR_5, 8);

 FUNC_7(&VAR_7, VAR_2, 8);
 FUNC_7(&VAR_8, VAR_1, 8);

 VAR_4 = FUNC_4(&VAR_9, &VAR_8, &VAR_7, 8);
 if (VAR_4)
  FUNC_2(1, "could not encrypt crypt key rc: %d\n", VAR_4);

 FUNC_6(VAR_6);
smbhash_err:
 return VAR_4;
}
