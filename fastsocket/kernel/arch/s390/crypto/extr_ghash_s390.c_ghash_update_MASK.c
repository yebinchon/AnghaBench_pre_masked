
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct shash_desc {int tfm; } ;
struct ghash_desc_ctx {int bytes; int const* buffer; } ;
struct ghash_ctx {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ghash_ctx*,int const*,unsigned int) ;
 struct ghash_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,int) ;
 struct ghash_desc_ctx* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_2,
    const u8 *VAR_3, unsigned int VAR_4)
{
 struct ghash_desc_ctx *VAR_5 = FUNC_5(VAR_2);
 struct ghash_ctx *VAR_6 = FUNC_2(VAR_2->tfm);
 unsigned int VAR_7;
 u8 *VAR_8 = VAR_5->buffer;
 int VAR_9;

 if (VAR_5->bytes) {
  u8 *VAR_10 = VAR_8 + (VAR_0 - VAR_5->bytes);

  VAR_7 = FUNC_4(VAR_4, VAR_5->bytes);
  VAR_5->bytes -= VAR_7;
  VAR_4 -= VAR_7;

  FUNC_3(VAR_10, VAR_3, VAR_7);
  VAR_3 += VAR_7;

  if (!VAR_5->bytes) {
   VAR_9 = FUNC_1(VAR_1, VAR_6, VAR_8,
           VAR_0);
   FUNC_0(VAR_9 != VAR_0);
  }
 }

 VAR_7 = VAR_4 & ~(VAR_0 - 1);
 if (VAR_7) {
  VAR_9 = FUNC_1(VAR_1, VAR_6, VAR_3, VAR_7);
  FUNC_0(VAR_9 != VAR_7);
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }

 if (VAR_4) {
  VAR_5->bytes = VAR_0 - VAR_4;
  FUNC_3(VAR_8, VAR_3, VAR_4);
 }

 return 0;
}
