
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int brdnr; scalar_t__ imr; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct stlport *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2("stl_sc26198disableintrs(portp=%p)\n", VAR_2);

 FUNC_3(&VAR_1, VAR_3);
 FUNC_1(VAR_2->brdnr, VAR_2->pagenr);
 VAR_2->imr = 0;
 FUNC_5(VAR_2, VAR_0, 0);
 FUNC_0(VAR_2->brdnr);
 FUNC_4(&VAR_1, VAR_3);
}
