
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int portnr; int brdnr; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,struct stlport*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*) ;
 int FUNC_6 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_7(struct stlport *VAR_7, int VAR_8, int VAR_9)
{
 unsigned char VAR_10;
 unsigned long VAR_11;

 FUNC_2("stl_cd1400enablerxtx(portp=%p,rx=%d,tx=%d)\n", VAR_7, VAR_8, VAR_9);

 VAR_10 = 0;

 if (VAR_9 == 0)
  VAR_10 |= VAR_4;
 else if (VAR_9 > 0)
  VAR_10 |= VAR_5;
 if (VAR_8 == 0)
  VAR_10 |= VAR_2;
 else if (VAR_8 > 0)
  VAR_10 |= VAR_3;

 FUNC_3(&VAR_6, VAR_11);
 FUNC_1(VAR_7->brdnr, VAR_7->pagenr);
 FUNC_6(VAR_7, VAR_0, (VAR_7->portnr & 0x03));
 FUNC_5(VAR_7);
 FUNC_6(VAR_7, VAR_1, VAR_10);
 FUNC_5(VAR_7);
 FUNC_0(VAR_7->brdnr);
 FUNC_4(&VAR_6, VAR_11);
}
