
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct au1xmmc_host {scalar_t__ status; } ;


 int FUNC_0 (struct au1xmmc_host*) ;
 int FUNC_1 (struct au1xmmc_host*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static inline void FUNC_6(struct au1xmmc_host *VAR_4)
{
 u32 VAR_5;

 FUNC_2(VAR_4->status != VAR_0);
 VAR_4->status = VAR_1;

 VAR_5 = FUNC_3(FUNC_1(VAR_4));
 FUNC_5(VAR_5 | VAR_2, FUNC_1(VAR_4));
 FUNC_4();


 FUNC_5(VAR_3, FUNC_0(VAR_4));
}
