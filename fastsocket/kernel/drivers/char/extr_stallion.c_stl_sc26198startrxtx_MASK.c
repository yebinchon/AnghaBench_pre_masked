
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {unsigned char imr; int istate; int brdnr; int pagenr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,struct stlport*,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_7(struct stlport *VAR_7, int VAR_8, int VAR_9)
{
 unsigned char VAR_10;
 unsigned long VAR_11;

 FUNC_2("stl_sc26198startrxtx(portp=%p,rx=%d,tx=%d)\n", VAR_7, VAR_8, VAR_9);

 VAR_10 = VAR_7->imr;
 if (VAR_9 == 0)
  VAR_10 &= ~VAR_5;
 else if (VAR_9 == 1)
  VAR_10 |= VAR_5;
 if (VAR_8 == 0)
  VAR_10 &= ~(VAR_3 | VAR_2 | VAR_4);
 else if (VAR_8 > 0)
  VAR_10 |= VAR_3 | VAR_2 | VAR_4;

 FUNC_4(&VAR_6, VAR_11);
 FUNC_1(VAR_7->brdnr, VAR_7->pagenr);
 FUNC_6(VAR_7, VAR_1, VAR_10);
 FUNC_0(VAR_7->brdnr);
 VAR_7->imr = VAR_10;
 if (VAR_9 > 0)
  FUNC_3(VAR_0, &VAR_7->istate);
 FUNC_5(&VAR_6, VAR_11);
}
