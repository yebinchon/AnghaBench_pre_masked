
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct s390_sha_ctx {int func; scalar_t__ count; int * state; } ;
typedef int __u64 ;


 int VAR_0 ;
 struct s390_sha_ctx* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_1)
{
 struct s390_sha_ctx *VAR_2 = FUNC_0(VAR_1);

 *(__u64 *)&VAR_2->state[0] = 0x6a09e667f3bcc908ULL;
 *(__u64 *)&VAR_2->state[2] = 0xbb67ae8584caa73bULL;
 *(__u64 *)&VAR_2->state[4] = 0x3c6ef372fe94f82bULL;
 *(__u64 *)&VAR_2->state[6] = 0xa54ff53a5f1d36f1ULL;
 *(__u64 *)&VAR_2->state[8] = 0x510e527fade682d1ULL;
 *(__u64 *)&VAR_2->state[10] = 0x9b05688c2b3e6c1fULL;
 *(__u64 *)&VAR_2->state[12] = 0x1f83d9abfb41bd6bULL;
 *(__u64 *)&VAR_2->state[14] = 0x5be0cd19137e2179ULL;
 VAR_2->count = 0;
 VAR_2->func = VAR_0;

 return 0;
}
