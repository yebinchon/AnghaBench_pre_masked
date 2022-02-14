
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_alg {int digestsize; } ;
struct seq_file {int dummy; } ;
struct crypto_alg {int cra_blocksize; } ;


 struct shash_alg* FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct crypto_alg *VAR_1)
{
 struct shash_alg *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, "type         : shash\n");
 FUNC_1(VAR_0, "blocksize    : %u\n", VAR_1->cra_blocksize);
 FUNC_1(VAR_0, "digestsize   : %u\n", VAR_2->digestsize);
}
