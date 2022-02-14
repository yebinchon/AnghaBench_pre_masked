
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u64 ;
struct adapter {unsigned char mcastmask; } ;


 unsigned char FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, char *VAR_1)
{
 unsigned char VAR_2;


 VAR_2 = FUNC_0(VAR_1);




 VAR_2 &= 0x3F;


 VAR_0->mcastmask |= (u64) 1 << VAR_2;
}
