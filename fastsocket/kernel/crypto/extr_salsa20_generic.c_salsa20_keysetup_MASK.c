
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct salsa20_ctx {void** input; } ;


 void* FUNC_0 (char const*) ;
 char* VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct salsa20_ctx *VAR_2, const u8 *VAR_3, u32 VAR_4)
{
 const char *VAR_5;

 VAR_2->input[1] = FUNC_0(VAR_3 + 0);
 VAR_2->input[2] = FUNC_0(VAR_3 + 4);
 VAR_2->input[3] = FUNC_0(VAR_3 + 8);
 VAR_2->input[4] = FUNC_0(VAR_3 + 12);
 if (VAR_4 == 32) {
  VAR_3 += 16;
  VAR_5 = VAR_0;
 } else {
  VAR_5 = VAR_1;
 }
 VAR_2->input[11] = FUNC_0(VAR_3 + 0);
 VAR_2->input[12] = FUNC_0(VAR_3 + 4);
 VAR_2->input[13] = FUNC_0(VAR_3 + 8);
 VAR_2->input[14] = FUNC_0(VAR_3 + 12);
 VAR_2->input[0] = FUNC_0(VAR_5 + 0);
 VAR_2->input[5] = FUNC_0(VAR_5 + 4);
 VAR_2->input[10] = FUNC_0(VAR_5 + 8);
 VAR_2->input[15] = FUNC_0(VAR_5 + 12);
}
