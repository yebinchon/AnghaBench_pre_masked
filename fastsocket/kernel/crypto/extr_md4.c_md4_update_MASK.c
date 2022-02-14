
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct shash_desc {int dummy; } ;
struct md4_ctx {int byte_count; char* block; } ;


 int FUNC_0 (struct md4_ctx*) ;
 int FUNC_1 (char*,int const*,unsigned int const) ;
 struct md4_ctx* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 struct md4_ctx *VAR_3 = FUNC_2(VAR_0);
 const u32 VAR_4 = sizeof(VAR_3->block) - (VAR_3->byte_count & 0x3f);

 VAR_3->byte_count += VAR_2;

 if (VAR_4 > VAR_2) {
  FUNC_1((char *)VAR_3->block + (sizeof(VAR_3->block) - VAR_4),
         VAR_1, VAR_2);
  return 0;
 }

 FUNC_1((char *)VAR_3->block + (sizeof(VAR_3->block) - VAR_4),
        VAR_1, VAR_4);

 FUNC_0(VAR_3);
 VAR_1 += VAR_4;
 VAR_2 -= VAR_4;

 while (VAR_2 >= sizeof(VAR_3->block)) {
  FUNC_1(VAR_3->block, VAR_1, sizeof(VAR_3->block));
  FUNC_0(VAR_3);
  VAR_1 += sizeof(VAR_3->block);
  VAR_2 -= sizeof(VAR_3->block);
 }

 FUNC_1(VAR_3->block, VAR_1, VAR_2);

 return 0;
}
