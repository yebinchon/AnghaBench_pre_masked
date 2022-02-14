
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uic {int lock; scalar_t__ dcrbase; } ;


 scalar_t__ VAR_0 ;
 struct uic* FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_1)
{
 struct uic *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = FUNC_4(VAR_1);
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 FUNC_1(VAR_2->dcrbase + VAR_0, 1 << (31-VAR_3));
 FUNC_3(&VAR_2->lock, VAR_4);
}
