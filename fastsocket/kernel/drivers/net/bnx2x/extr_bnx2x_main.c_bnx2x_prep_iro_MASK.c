
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iro {int m1; int m2; int m3; int size; void* base; } ;
typedef int __be32 ;


 void* FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 const __be32 *VAR_3 = (const __be32 *)VAR_0;
 struct iro *VAR_4 = (struct iro *)VAR_1;
 u32 VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_2/sizeof(struct iro); VAR_5++) {
  VAR_4[VAR_5].base = FUNC_0(VAR_3[VAR_6]);
  VAR_6++;
  VAR_7 = FUNC_0(VAR_3[VAR_6]);
  VAR_4[VAR_5].m1 = (VAR_7 >> 16) & 0xffff;
  VAR_4[VAR_5].m2 = VAR_7 & 0xffff;
  VAR_6++;
  VAR_7 = FUNC_0(VAR_3[VAR_6]);
  VAR_4[VAR_5].m3 = (VAR_7 >> 16) & 0xffff;
  VAR_4[VAR_5].size = VAR_7 & 0xffff;
  VAR_6++;
 }
}
