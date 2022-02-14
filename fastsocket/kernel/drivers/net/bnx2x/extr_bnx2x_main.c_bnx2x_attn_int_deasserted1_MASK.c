
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_5, u32 VAR_6)
{
 u32 VAR_7;

 if (VAR_6 & VAR_0) {

  VAR_7 = FUNC_2(VAR_5, VAR_1);
  FUNC_0("DB hw attention 0x%x\n", VAR_7);

  if (VAR_7 & 0x2)
   FUNC_0("FATAL error from DORQ\n");
 }

 if (VAR_6 & VAR_2) {

  int VAR_8 = FUNC_1(VAR_5);
  int VAR_9;

  VAR_9 = (VAR_8 ? VAR_4 :
         VAR_3);

  VAR_7 = FUNC_2(VAR_5, VAR_9);
  VAR_7 &= ~(VAR_6 & VAR_2);
  FUNC_3(VAR_5, VAR_9, VAR_7);

  FUNC_0("FATAL HW block attention set1 0x%x\n",
     (u32)(VAR_6 & VAR_2));
  FUNC_4();
 }
}
