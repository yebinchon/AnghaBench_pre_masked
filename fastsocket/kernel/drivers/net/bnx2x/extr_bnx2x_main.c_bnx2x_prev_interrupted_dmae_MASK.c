
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_4)
{
 if (!FUNC_1(VAR_4)) {
  u32 VAR_5 = FUNC_3(VAR_4, VAR_2);
  if (VAR_5 & VAR_1) {
   FUNC_2(VAR_0,
      "'was error' bit was found to be set in pglueb upon startup. Clearing\n");
   FUNC_4(VAR_4, VAR_3,
          1 << FUNC_0(VAR_4));
  }
 }
}
