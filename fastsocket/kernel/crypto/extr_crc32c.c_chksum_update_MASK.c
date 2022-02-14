
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct chksum_desc_ctx {int crc; } ;


 int FUNC_0 (int ,int const*,unsigned int) ;
 struct chksum_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0, const u8 *VAR_1,
    unsigned int VAR_2)
{
 struct chksum_desc_ctx *VAR_3 = FUNC_1(VAR_0);

 VAR_3->crc = FUNC_0(VAR_3->crc, VAR_1, VAR_2);
 return 0;
}
