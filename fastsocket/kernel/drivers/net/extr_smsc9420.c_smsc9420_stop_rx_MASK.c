
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc9420_pdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct smsc9420_pdata*) ;
 int FUNC_1 (struct smsc9420_pdata*,int ) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct smsc9420_pdata *VAR_10)
{
 int VAR_11 = 1000;
 u32 VAR_12, VAR_13, VAR_14;


 VAR_14 = FUNC_1(VAR_10, VAR_2);
 VAR_14 &= (~VAR_3);
 FUNC_2(VAR_10, VAR_2, VAR_14);
 FUNC_0(VAR_10);


 VAR_12 = FUNC_1(VAR_10, VAR_8) & (~VAR_9);
 FUNC_2(VAR_10, VAR_8, VAR_12);
 FUNC_0(VAR_10);


 VAR_13 = FUNC_1(VAR_10, VAR_0);
 VAR_13 &= (~VAR_1);
 FUNC_2(VAR_10, VAR_0, VAR_13);
 FUNC_0(VAR_10);


 while (--VAR_11) {
  if (FUNC_1(VAR_10, VAR_4) & VAR_5)
   break;
  FUNC_4(10);
 }

 if (!VAR_11)
  FUNC_3(VAR_7, "RX DMAC did not stop! timeout.");


 FUNC_2(VAR_10, VAR_4, VAR_6);
}
