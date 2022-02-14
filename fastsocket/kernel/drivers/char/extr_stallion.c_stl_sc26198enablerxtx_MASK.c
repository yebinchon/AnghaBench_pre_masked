
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {unsigned char crenable; int brdnr; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,struct stlport*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct stlport *VAR_4, int VAR_5, int VAR_6)
{
 unsigned char VAR_7;
 unsigned long VAR_8;

 FUNC_2("stl_sc26198enablerxtx(portp=%p,rx=%d,tx=%d)\n", VAR_4, VAR_5,VAR_6);

 VAR_7 = VAR_4->crenable;
 if (VAR_6 == 0)
  VAR_7 &= ~VAR_1;
 else if (VAR_6 > 0)
  VAR_7 |= VAR_1;
 if (VAR_5 == 0)
  VAR_7 &= ~VAR_0;
 else if (VAR_5 > 0)
  VAR_7 |= VAR_0;

 FUNC_3(&VAR_3, VAR_8);
 FUNC_1(VAR_4->brdnr, VAR_4->pagenr);
 FUNC_5(VAR_4, VAR_2, VAR_7);
 FUNC_0(VAR_4->brdnr);
 VAR_4->crenable = VAR_7;
 FUNC_4(&VAR_3, VAR_8);
}
