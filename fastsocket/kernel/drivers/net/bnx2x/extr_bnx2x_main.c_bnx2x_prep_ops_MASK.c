
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct raw_op {int op; int offset; void* raw_data; } ;
typedef int __be32 ;


 void* FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 const __be32 *VAR_3 = (const __be32 *)VAR_0;
 struct raw_op *VAR_4 = (struct raw_op *)VAR_1;
 u32 VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_2/8; VAR_5++, VAR_6 += 2) {
  VAR_7 = FUNC_0(VAR_3[VAR_6]);
  VAR_4[VAR_5].op = (VAR_7 >> 24) & 0xff;
  VAR_4[VAR_5].offset = VAR_7 & 0xffffff;
  VAR_4[VAR_5].raw_data = FUNC_0(VAR_3[VAR_6 + 1]);
 }
}
