
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct salsa20_ctx {int * input; } ;


 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static void FUNC_3(struct salsa20_ctx *VAR_0, u8 *VAR_1,
      const u8 *VAR_2, unsigned int VAR_3)
{
 u8 VAR_4[64];

 if (VAR_1 != VAR_2)
  FUNC_1(VAR_1, VAR_2, VAR_3);

 while (VAR_3) {
  FUNC_2(VAR_4, VAR_0->input);

  VAR_0->input[8]++;
  if (!VAR_0->input[8])
   VAR_0->input[9]++;

  if (VAR_3 <= 64) {
   FUNC_0(VAR_1, VAR_4, VAR_3);
   return;
  }

  FUNC_0(VAR_1, VAR_4, 64);
  VAR_3 -= 64;
  VAR_1 += 64;
 }
}
