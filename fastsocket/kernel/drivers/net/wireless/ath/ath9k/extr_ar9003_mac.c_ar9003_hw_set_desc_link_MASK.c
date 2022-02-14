
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar9003_txc {int ctl10; int link; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9003_txc*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u32 VAR_2)
{
 struct ar9003_txc *VAR_3 = VAR_1;

 VAR_3->link = VAR_2;
 VAR_3->ctl10 &= ~VAR_0;
 VAR_3->ctl10 |= FUNC_0(VAR_3);
}
