
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reg_addr {int size; int addr; int presets; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct bnx2x*,int) ;
 int FUNC_2 (struct bnx2x*,int const,int const) ;
 int* FUNC_3 (struct bnx2x*) ;
 struct reg_addr* FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int* FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_0, u32 *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;


 const u32 *VAR_7 = FUNC_3(VAR_0);

 int VAR_8 = FUNC_6(VAR_0);

 const u32 *VAR_9 = FUNC_7(VAR_0);

 int VAR_10 = FUNC_8(VAR_0);

 const struct reg_addr *VAR_11 = FUNC_4(VAR_0);

 int VAR_12 = FUNC_5(VAR_0);
 u32 VAR_13, VAR_14;

 for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_10; VAR_4++) {
   FUNC_2(VAR_0, VAR_9[VAR_4], VAR_7[VAR_3]);

   for (VAR_5 = 0; VAR_5 < VAR_12; VAR_5++) {
    if (FUNC_0(VAR_11[VAR_5].presets,
           VAR_2)) {
     VAR_14 = VAR_11[VAR_5].size;
     for (VAR_6 = 0; VAR_6 < VAR_14; VAR_6++) {
      VAR_13 = VAR_11[VAR_5].addr + VAR_6*4;
      *VAR_1++ = FUNC_1(VAR_0, VAR_13);
     }
    }
   }
  }
 }
}
