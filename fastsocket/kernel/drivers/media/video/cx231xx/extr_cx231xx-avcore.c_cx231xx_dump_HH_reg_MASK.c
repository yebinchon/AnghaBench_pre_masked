
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct cx231xx*,int,int*) ;
 int FUNC_2 (struct cx231xx*,int,int) ;

void FUNC_3(struct cx231xx *VAR_1)
{
 u8 VAR_2 = 0;
 u32 VAR_3 = 0;
 u16 VAR_4 = 0;

 VAR_3 = 0x45005390;
 VAR_2 = FUNC_2(VAR_1, 0x104, VAR_3);

 for (VAR_4 = 0x100; VAR_4 < 0x140; VAR_4++) {
  VAR_2 = FUNC_1(VAR_1, VAR_4, &VAR_3);
  FUNC_0("reg0x%x=0x%x\n", VAR_4, VAR_3);
  VAR_4 = VAR_4+3;
 }

 for (VAR_4 = 0x300; VAR_4 < 0x400; VAR_4++) {
  VAR_2 = FUNC_1(VAR_1, VAR_4, &VAR_3);
  FUNC_0("reg0x%x=0x%x\n", VAR_4, VAR_3);
  VAR_4 = VAR_4+3;
 }

 for (VAR_4 = 0x400; VAR_4 < 0x440; VAR_4++) {
  VAR_2 = FUNC_1(VAR_1, VAR_4, &VAR_3);
  FUNC_0("reg0x%x=0x%x\n", VAR_4, VAR_3);
  VAR_4 = VAR_4+3;
 }

 VAR_2 = FUNC_1(VAR_1, VAR_0, &VAR_3);
 FUNC_0("AFE_CTRL_C2HH_SRC_CTRL=0x%x\n", VAR_3);
 FUNC_2(VAR_1, VAR_0, 0x4485D390);
 VAR_2 = FUNC_1(VAR_1, VAR_0, &VAR_3);
 FUNC_0("AFE_CTRL_C2HH_SRC_CTRL=0x%x\n", VAR_3);
}
