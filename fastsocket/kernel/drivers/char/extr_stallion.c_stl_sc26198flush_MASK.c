
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; int tail; } ;
struct stlport {TYPE_1__ tx; int brdnr; int crenable; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct stlport *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2("stl_sc26198flush(portp=%p)\n", VAR_3);

 if (VAR_3 == ((void*)0))
  return;

 FUNC_3(&VAR_2, VAR_4);
 FUNC_1(VAR_3->brdnr, VAR_3->pagenr);
 FUNC_5(VAR_3, VAR_1, VAR_0);
 FUNC_5(VAR_3, VAR_1, VAR_3->crenable);
 FUNC_0(VAR_3->brdnr);
 VAR_3->tx.tail = VAR_3->tx.head;
 FUNC_4(&VAR_2, VAR_4);
}
