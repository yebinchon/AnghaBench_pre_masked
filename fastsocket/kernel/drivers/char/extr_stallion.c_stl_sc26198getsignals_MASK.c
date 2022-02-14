
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
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned char FUNC_5 (struct stlport*,int ) ;

__attribute__((used)) static int FUNC_6(struct stlport *VAR_11)
{
 unsigned char VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_2("stl_sc26198getsignals(portp=%p)\n", VAR_11);

 FUNC_3(&VAR_10, VAR_13);
 FUNC_1(VAR_11->brdnr, VAR_11->pagenr);
 VAR_12 = FUNC_5(VAR_11, VAR_0);
 FUNC_0(VAR_11->brdnr);
 FUNC_4(&VAR_10, VAR_13);

 VAR_14 = 0;
 VAR_14 |= (VAR_12 & VAR_2) ? 0 : VAR_5;
 VAR_14 |= (VAR_12 & VAR_1) ? 0 : VAR_6;
 VAR_14 |= (VAR_12 & VAR_3) ? 0: VAR_8;
 VAR_14 |= (VAR_12 & VAR_4) ? 0: VAR_9;
 VAR_14 |= VAR_7;
 return VAR_14;
}
