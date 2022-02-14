
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_0(VAR_0);

 if (VAR_1 & 0x10)
 {
  FUNC_1(VAR_2, "pflusha%s", (VAR_1 & 8) ? "" : "n");
 }
 else
 {
  FUNC_1(VAR_2, "pflush%s(A%d)", (VAR_1 & 8) ? "" : "n", VAR_1 & 7);
 }
}
