
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_2, u64 VAR_3)
{



 VAR_3 |= (u64)FUNC_1((VAR_3 >> 20) & 0x000fffff) << 41;
 VAR_3 |= (u64)FUNC_1(VAR_3 & 0x000fffff) << 40;





 FUNC_0(VAR_2, VAR_0, (u32)VAR_3);
 FUNC_0(VAR_2, VAR_1, (u32)(VAR_3 >> 32));
}
