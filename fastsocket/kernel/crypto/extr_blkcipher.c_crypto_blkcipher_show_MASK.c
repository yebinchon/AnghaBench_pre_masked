
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {char* min_keysize; char* max_keysize; char* ivsize; scalar_t__ geniv; } ;
struct crypto_alg {char* cra_blocksize; TYPE_1__ cra_blkcipher; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct crypto_alg *VAR_1)
{
 FUNC_0(VAR_0, "type         : blkcipher\n");
 FUNC_0(VAR_0, "blocksize    : %u\n", VAR_1->cra_blocksize);
 FUNC_0(VAR_0, "min keysize  : %u\n", VAR_1->cra_blkcipher.min_keysize);
 FUNC_0(VAR_0, "max keysize  : %u\n", VAR_1->cra_blkcipher.max_keysize);
 FUNC_0(VAR_0, "ivsize       : %u\n", VAR_1->cra_blkcipher.ivsize);
 FUNC_0(VAR_0, "geniv        : %s\n", VAR_1->cra_blkcipher.geniv ?:
          "<default>");
}
