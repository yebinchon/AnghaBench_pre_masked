
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int brdnr; int pagenr; int istate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned char FUNC_5 (struct stlport*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct stlport *VAR_4)
{
 unsigned long VAR_5;
 unsigned char VAR_6;

 FUNC_2("stl_sc26198datastate(portp=%p)\n", VAR_4);

 if (VAR_4 == ((void*)0))
  return 0;
 if (FUNC_6(VAR_0, &VAR_4->istate))
  return 1;

 FUNC_3(&VAR_3, VAR_5);
 FUNC_1(VAR_4->brdnr, VAR_4->pagenr);
 VAR_6 = FUNC_5(VAR_4, VAR_1);
 FUNC_0(VAR_4->brdnr);
 FUNC_4(&VAR_3, VAR_5);

 return (VAR_6 & VAR_2) ? 0 : 1;
}
