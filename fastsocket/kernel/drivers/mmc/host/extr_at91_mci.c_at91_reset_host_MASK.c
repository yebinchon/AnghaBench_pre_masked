
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct at91mci_host {int dummy; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct at91mci_host*,int ) ;
 int FUNC_1 (struct at91mci_host*,int ,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct at91mci_host *VAR_11)
{
 unsigned long VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 FUNC_3(VAR_12);
 VAR_16 = FUNC_0(VAR_11, VAR_4);

 FUNC_1(VAR_11, VAR_2, 0xffffffff);


 VAR_13 = FUNC_0(VAR_11, VAR_7) & 0x7fff;
 VAR_14 = FUNC_0(VAR_11, VAR_8);
 VAR_15 = FUNC_0(VAR_11, VAR_1);


 FUNC_1(VAR_11, VAR_0, VAR_5 | VAR_10);


 FUNC_1(VAR_11, VAR_0, VAR_6);
 FUNC_1(VAR_11, VAR_7, VAR_13);
 FUNC_1(VAR_11, VAR_8, VAR_14);
 FUNC_1(VAR_11, VAR_1, VAR_15);
 FUNC_1(VAR_11, VAR_3, VAR_16);


 FUNC_0(VAR_11, VAR_9);

 FUNC_2(VAR_12);
}
