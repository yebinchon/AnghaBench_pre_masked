
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct au1xmmc_host {int dummy; } ;


 int FUNC_0 (struct au1xmmc_host*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int ) ;
 unsigned int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct au1xmmc_host *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = FUNC_4();
 unsigned int VAR_6;
 u32 VAR_7;




 VAR_5 /= ((FUNC_1(VAR_2) & 0x3) + 2);
 VAR_5 /= 2;
 VAR_6 = ((VAR_5 / VAR_4) / 2) - 1;

 VAR_7 = FUNC_1(FUNC_0(VAR_3));

 VAR_7 &= ~(VAR_1);
 VAR_7 |= (VAR_6 & VAR_1) | VAR_0;

 FUNC_3(VAR_7, FUNC_0(VAR_3));
 FUNC_2();
}
