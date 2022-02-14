
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct md5_ctx {int* hash; scalar_t__ byte_count; } ;


 struct md5_ctx* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_0)
{
 struct md5_ctx *VAR_1 = FUNC_0(VAR_0);

 VAR_1->hash[0] = 0x67452301;
 VAR_1->hash[1] = 0xefcdab89;
 VAR_1->hash[2] = 0x98badcfe;
 VAR_1->hash[3] = 0x10325476;
 VAR_1->byte_count = 0;

 return 0;
}
