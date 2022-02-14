
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlbrd {int state; scalar_t__ iosize1; scalar_t__ iosize2; int ioaddr2; int ioaddr1; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct stlbrd*) ;
 int FUNC_1 (struct stlbrd*) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct stlbrd** VAR_1 ;
 int FUNC_3 (struct stlbrd*) ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct stlbrd *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if ((VAR_3 = VAR_1[VAR_4]) == ((void*)0) || (VAR_3->state & VAR_0))
   continue;

  FUNC_0(VAR_3->irq, VAR_3);

  FUNC_3(VAR_3);

  FUNC_2(VAR_3->ioaddr1, VAR_3->iosize1);
  if (VAR_3->iosize2 > 0)
   FUNC_2(VAR_3->ioaddr2, VAR_3->iosize2);

  FUNC_1(VAR_3);
  VAR_1[VAR_4] = ((void*)0);
 }
}
