
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; int tail; } ;
struct stlport {int portnr; int brdnr; TYPE_1__ tx; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*) ;
 int FUNC_6 (struct stlport*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct stlport *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2("stl_cd1400flush(portp=%p)\n", VAR_4);

 if (VAR_4 == ((void*)0))
  return;

 FUNC_3(&VAR_3, VAR_5);
 FUNC_1(VAR_4->brdnr, VAR_4->pagenr);
 FUNC_6(VAR_4, VAR_0, (VAR_4->portnr & 0x03));
 FUNC_5(VAR_4);
 FUNC_6(VAR_4, VAR_1, VAR_2);
 FUNC_5(VAR_4);
 VAR_4->tx.tail = VAR_4->tx.head;
 FUNC_0(VAR_4->brdnr);
 FUNC_4(&VAR_3, VAR_5);
}
