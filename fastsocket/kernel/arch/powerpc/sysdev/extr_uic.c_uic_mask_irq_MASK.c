
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uic {int lock; scalar_t__ dcrbase; } ;


 scalar_t__ VAR_0 ;
 struct uic* FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_1)
{
 struct uic *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = FUNC_5(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_2->lock, VAR_4);
 VAR_5 = FUNC_1(VAR_2->dcrbase + VAR_0);
 VAR_5 &= ~(1 << (31 - VAR_3));
 FUNC_2(VAR_2->dcrbase + VAR_0, VAR_5);
 FUNC_4(&VAR_2->lock, VAR_4);
}
