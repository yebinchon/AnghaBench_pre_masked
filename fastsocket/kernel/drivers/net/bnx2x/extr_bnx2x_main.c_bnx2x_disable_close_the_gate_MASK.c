
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x*,int,int) ;

void FUNC_5(struct bnx2x *VAR_6)
{
 u32 VAR_7;

 FUNC_2(VAR_5, "Disabling \"close the gates\"\n");

 if (FUNC_1(VAR_6)) {
  int VAR_8 = FUNC_0(VAR_6);
  u32 VAR_9 = VAR_8 ? VAR_4 :
   VAR_3;

  VAR_7 = FUNC_3(VAR_6, VAR_9);
  VAR_7 &= ~(0x300);
  FUNC_4(VAR_6, VAR_9, VAR_7);
 } else {
  VAR_7 = FUNC_3(VAR_6, VAR_2);
  VAR_7 &= ~(VAR_1 |
    VAR_0);
  FUNC_4(VAR_6, VAR_2, VAR_7);
 }
}
