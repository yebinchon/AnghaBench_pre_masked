
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txbreaks; } ;
struct stlport {int brdnr; TYPE_1__ stats; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,struct stlport*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct stlport *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 FUNC_2("stl_sc26198sendbreak(portp=%p,len=%d)\n", VAR_4, VAR_5);

 FUNC_3(&VAR_3, VAR_6);
 FUNC_1(VAR_4->brdnr, VAR_4->pagenr);
 if (VAR_5 == 1) {
  FUNC_5(VAR_4, VAR_2, VAR_0);
  VAR_4->stats.txbreaks++;
 } else
  FUNC_5(VAR_4, VAR_2, VAR_1);

 FUNC_0(VAR_4->brdnr);
 FUNC_4(&VAR_3, VAR_6);
}
