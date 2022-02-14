
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {int (* isr ) (struct stlpanel*,unsigned int) ;} ;
struct stlbrd {int ioctrlval; unsigned int iostatus; unsigned int nrbnks; unsigned int* bnkstataddr; int ioctrl; struct stlpanel** bnk2panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct stlpanel*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct stlbrd *VAR_4)
{
 struct stlpanel *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8 = 0;

 FUNC_1((VAR_4->ioctrlval | VAR_1), VAR_4->ioctrl);

 while (FUNC_0(VAR_4->iostatus) & VAR_2) {
  VAR_8 = 1;
  for (VAR_7 = 0; VAR_7 < VAR_4->nrbnks; VAR_7++) {
   VAR_6 = VAR_4->bnkstataddr[VAR_7];
   if (FUNC_0(VAR_6) & VAR_3) {
    VAR_5 = VAR_4->bnk2panel[VAR_7];
    (* VAR_5->isr)(VAR_5, (VAR_6 & 0xfffc));
   }
  }
 }

 FUNC_1((VAR_4->ioctrlval | VAR_0), VAR_4->ioctrl);

 return VAR_8;
}
