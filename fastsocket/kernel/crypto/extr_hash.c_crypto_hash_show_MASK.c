
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int digestsize; } ;
struct crypto_alg {TYPE_1__ cra_hash; int cra_blocksize; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct crypto_alg *VAR_1)
{
 FUNC_0(VAR_0, "type         : hash\n");
 FUNC_0(VAR_0, "blocksize    : %u\n", VAR_1->cra_blocksize);
 FUNC_0(VAR_0, "digestsize   : %u\n", VAR_1->cra_hash.digestsize);
}
