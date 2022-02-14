
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int portnr; int brdnr; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct stlport *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2("stl_cd1400disableintrs(portp=%p)\n", VAR_3);

 FUNC_3(&VAR_2, VAR_4);
 FUNC_1(VAR_3->brdnr, VAR_3->pagenr);
 FUNC_5(VAR_3, VAR_0, (VAR_3->portnr & 0x03));
 FUNC_5(VAR_3, VAR_1, 0);
 FUNC_0(VAR_3->brdnr);
 FUNC_4(&VAR_2, VAR_4);
}
