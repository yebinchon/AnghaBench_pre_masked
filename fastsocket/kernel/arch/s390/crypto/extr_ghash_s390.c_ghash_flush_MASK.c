
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ghash_desc_ctx {scalar_t__ bytes; int * buffer; } ;
struct ghash_ctx {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ghash_ctx*,int *,int) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ghash_ctx *VAR_2, struct ghash_desc_ctx *VAR_3)
{
 u8 *VAR_4 = VAR_3->buffer;
 int VAR_5;

 if (VAR_3->bytes) {
  u8 *VAR_6 = VAR_4 + (VAR_0 - VAR_3->bytes);

  FUNC_2(VAR_6, 0, VAR_3->bytes);

  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_0);
  FUNC_0(VAR_5 != VAR_0);
 }

 VAR_3->bytes = 0;
}
