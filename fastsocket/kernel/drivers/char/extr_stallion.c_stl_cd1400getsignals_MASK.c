
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
 unsigned char VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned char FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct stlport *VAR_16)
{
 unsigned char VAR_17, VAR_18;
 unsigned long VAR_19;
 int VAR_20;

 FUNC_2("stl_cd1400getsignals(portp=%p)\n", VAR_16);

 FUNC_3(&VAR_15, VAR_19);
 FUNC_1(VAR_16->brdnr, VAR_16->pagenr);
 FUNC_6(VAR_16, VAR_0, (VAR_16->portnr & 0x03));
 VAR_17 = FUNC_5(VAR_16, VAR_1);
 VAR_18 = FUNC_5(VAR_16, VAR_7);
 FUNC_0(VAR_16->brdnr);
 FUNC_4(&VAR_15, VAR_19);

 VAR_20 = 0;
 VAR_20 |= (VAR_17 & VAR_3) ? VAR_9 : 0;
 VAR_20 |= (VAR_17 & VAR_2) ? VAR_10 : 0;
 VAR_20 |= (VAR_17 & VAR_5) ? VAR_12 : 0;
 VAR_20 |= (VAR_18 & VAR_8) ? VAR_14 : 0;




 VAR_20 |= VAR_11;

 return VAR_20;
}
