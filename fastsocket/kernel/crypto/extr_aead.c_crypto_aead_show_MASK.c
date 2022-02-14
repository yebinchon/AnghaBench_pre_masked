
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct aead_alg {char* ivsize; char* maxauthsize; scalar_t__ geniv; } ;
struct crypto_alg {int cra_flags; char* cra_blocksize; struct aead_alg cra_aead; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_1, struct crypto_alg *VAR_2)
{
 struct aead_alg *VAR_3 = &VAR_2->cra_aead;

 FUNC_0(VAR_1, "type         : aead\n");
 FUNC_0(VAR_1, "async        : %s\n", VAR_2->cra_flags & VAR_0 ?
          "yes" : "no");
 FUNC_0(VAR_1, "blocksize    : %u\n", VAR_2->cra_blocksize);
 FUNC_0(VAR_1, "ivsize       : %u\n", VAR_3->ivsize);
 FUNC_0(VAR_1, "maxauthsize  : %u\n", VAR_3->maxauthsize);
 FUNC_0(VAR_1, "geniv        : %s\n", VAR_3->geniv ?: "<built-in>");
}
