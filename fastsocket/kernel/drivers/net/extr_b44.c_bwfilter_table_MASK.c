
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct b44 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b44*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b44 *VAR_2, u8 *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 *VAR_7 = (u32 *) VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += sizeof(u32)) {
  FUNC_0(VAR_2, VAR_0, VAR_5 + VAR_6);
  FUNC_0(VAR_2, VAR_1, VAR_7[VAR_6 / sizeof(u32)]);
 }
}
