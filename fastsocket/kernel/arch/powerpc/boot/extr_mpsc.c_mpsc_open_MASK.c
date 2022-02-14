
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_12 = FUNC_0((u32 *)(VAR_14 + VAR_0)) & 0x00ff0000;
 VAR_13 = FUNC_0((u32 *)(VAR_14 + VAR_1)) & ~(VAR_5
   | VAR_6 | VAR_4 | VAR_2
   | VAR_3);
 FUNC_1((u32 *)(VAR_14 + VAR_7), VAR_8);
 FUNC_1((u32 *)(VAR_14 + VAR_9),
   VAR_10 | VAR_11);
 FUNC_1((u32 *)(VAR_14 + VAR_1), VAR_13 | VAR_3);
 return 0;
}
