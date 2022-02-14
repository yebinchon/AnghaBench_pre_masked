
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {int nrports; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (char*,struct stlpanel*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stlpanel*,unsigned int) ;
 int FUNC_6 (struct stlpanel*,unsigned int) ;
 int FUNC_7 (struct stlpanel*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct stlpanel *VAR_6, unsigned int VAR_7)
{
 unsigned char VAR_8;

 FUNC_2("stl_cd1400eiointr(panelp=%p,iobase=%x)\n", VAR_6, VAR_7);

 FUNC_3(&VAR_5);
 FUNC_1(VAR_1, VAR_7);
 VAR_8 = FUNC_0(VAR_7 + VAR_0);
 if (VAR_6->nrports > 4) {
  FUNC_1((VAR_1 + 0x80), VAR_7);
  VAR_8 |= FUNC_0(VAR_7 + VAR_0);
 }

 if (VAR_8 & VAR_3)
  FUNC_6(VAR_6, VAR_7);
 else if (VAR_8 & VAR_4)
  FUNC_7(VAR_6, VAR_7);
 else if (VAR_8 & VAR_2)
  FUNC_5(VAR_6, VAR_7);

 FUNC_4(&VAR_5);
}
