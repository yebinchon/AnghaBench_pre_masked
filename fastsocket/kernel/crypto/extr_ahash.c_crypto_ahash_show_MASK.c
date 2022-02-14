
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct crypto_alg {int cra_flags; char* cra_blocksize; } ;
struct TYPE_2__ {char* digestsize; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, struct crypto_alg *VAR_2)
{
 FUNC_1(VAR_1, "type         : ahash\n");
 FUNC_1(VAR_1, "async        : %s\n", VAR_2->cra_flags & VAR_0 ?
          "yes" : "no");
 FUNC_1(VAR_1, "blocksize    : %u\n", VAR_2->cra_blocksize);
 FUNC_1(VAR_1, "digestsize   : %u\n",
     FUNC_0(VAR_2)->digestsize);
}
