
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct salsa20_ctx {void** input; } ;


 void* FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1(struct salsa20_ctx *VAR_0, const u8 *VAR_1)
{
 VAR_0->input[6] = FUNC_0(VAR_1 + 0);
 VAR_0->input[7] = FUNC_0(VAR_1 + 4);
 VAR_0->input[8] = 0;
 VAR_0->input[9] = 0;
}
