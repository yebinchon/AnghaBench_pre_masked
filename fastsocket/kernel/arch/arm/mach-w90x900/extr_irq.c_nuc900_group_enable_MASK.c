
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_irq {unsigned int gpen; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct group_irq *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->gpen;
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_4 |= VAR_3;
 else
  VAR_4 &= ~VAR_3;

 FUNC_1(VAR_4, VAR_0);
}
