
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x*,int,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_8, u32 VAR_9)
{
 u32 VAR_10;

 if (VAR_9 & VAR_0) {

  VAR_10 = FUNC_3(VAR_8, VAR_2);
  FUNC_0("CFC hw attention 0x%x\n", VAR_10);

  if (VAR_10 & 0x2)
   FUNC_0("FATAL error from CFC\n");
 }

 if (VAR_9 & VAR_1) {
  VAR_10 = FUNC_3(VAR_8, VAR_6);
  FUNC_0("PXP hw attention-0 0x%x\n", VAR_10);

  if (VAR_10 & 0x18000)
   FUNC_0("FATAL error from PXP\n");

  if (!FUNC_2(VAR_8)) {
   VAR_10 = FUNC_3(VAR_8, VAR_7);
   FUNC_0("PXP hw attention-1 0x%x\n", VAR_10);
  }
 }

 if (VAR_9 & VAR_3) {

  int VAR_11 = FUNC_1(VAR_8);
  int VAR_12;

  VAR_12 = (VAR_11 ? VAR_5 :
         VAR_4);

  VAR_10 = FUNC_3(VAR_8, VAR_12);
  VAR_10 &= ~(VAR_9 & VAR_3);
  FUNC_4(VAR_8, VAR_12, VAR_10);

  FUNC_0("FATAL HW block attention set2 0x%x\n",
     (u32)(VAR_9 & VAR_3));
  FUNC_5();
 }
}
