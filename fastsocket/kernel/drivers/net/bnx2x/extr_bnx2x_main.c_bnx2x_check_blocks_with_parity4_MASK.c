
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_2, u32 VAR_3,
         int VAR_4, bool VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7 = 0;
 for (VAR_6 = 0; VAR_3; VAR_6++) {
  VAR_7 = ((u32)0x1 << VAR_6);
  if (VAR_3 & VAR_7) {
   switch (VAR_7) {
   case 128:
    if (VAR_5) {
     FUNC_0(VAR_4++, "PGLUE_B");
     FUNC_1(VAR_2,
      VAR_1);
    }
    break;
   case 129:
    if (VAR_5) {
     FUNC_0(VAR_4++, "ATC");
     FUNC_1(VAR_2,
            VAR_0);
    }
    break;
   }


   VAR_3 &= ~VAR_7;
  }
 }

 return VAR_4;
}
