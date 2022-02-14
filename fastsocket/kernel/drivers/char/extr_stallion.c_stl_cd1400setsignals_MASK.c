
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
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,struct stlport*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct stlport *VAR_6, int VAR_7, int VAR_8)
{
 unsigned char VAR_9, VAR_10;
 unsigned long VAR_11;

 FUNC_2("stl_cd1400setsignals(portp=%p,dtr=%d,rts=%d)\n",
   VAR_6, VAR_7, VAR_8);

 VAR_9 = 0;
 VAR_10 = 0;
 if (VAR_7 > 0)
  VAR_9 = VAR_2;
 if (VAR_8 > 0)
  VAR_10 = VAR_4;

 FUNC_3(&VAR_5, VAR_11);
 FUNC_1(VAR_6->brdnr, VAR_6->pagenr);
 FUNC_5(VAR_6, VAR_0, (VAR_6->portnr & 0x03));
 if (VAR_8 >= 0)
  FUNC_5(VAR_6, VAR_3, VAR_10);
 if (VAR_7 >= 0)
  FUNC_5(VAR_6, VAR_1, VAR_9);
 FUNC_0(VAR_6->brdnr);
 FUNC_4(&VAR_5, VAR_11);
}
