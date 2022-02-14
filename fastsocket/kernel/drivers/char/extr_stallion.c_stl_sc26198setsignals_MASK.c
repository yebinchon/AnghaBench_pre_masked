
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int brdnr; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,struct stlport*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned char FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_7(struct stlport *VAR_4, int VAR_5, int VAR_6)
{
 unsigned char VAR_7, VAR_8;
 unsigned long VAR_9;

 FUNC_2("stl_sc26198setsignals(portp=%p,dtr=%d,rts=%d)\n", VAR_4,
   VAR_5, VAR_6);

 VAR_7 = 0;
 VAR_8 = 0;
 if (VAR_5 == 0)
  VAR_8 |= VAR_1;
 else if (VAR_5 > 0)
  VAR_7 |= VAR_1;
 if (VAR_6 == 0)
  VAR_8 |= VAR_2;
 else if (VAR_6 > 0)
  VAR_7 |= VAR_2;

 FUNC_3(&VAR_3, VAR_9);
 FUNC_1(VAR_4->brdnr, VAR_4->pagenr);
 FUNC_6(VAR_4, VAR_0,
  ((FUNC_5(VAR_4, VAR_0) & ~VAR_8) | VAR_7));
 FUNC_0(VAR_4->brdnr);
 FUNC_4(&VAR_3, VAR_9);
}
