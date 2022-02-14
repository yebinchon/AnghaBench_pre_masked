
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {int (* isr ) (struct stlpanel*,unsigned int) ;} ;
struct stlbrd {unsigned int iostatus; unsigned int nrbnks; unsigned int* bnkstataddr; struct stlpanel** bnk2panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct stlpanel*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct stlbrd *VAR_2)
{
 struct stlpanel *VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6 = 0;

 while (FUNC_0(VAR_2->iostatus) & VAR_0) {
  VAR_6 = 1;
  for (VAR_5 = 0; VAR_5 < VAR_2->nrbnks; VAR_5++) {
   VAR_4 = VAR_2->bnkstataddr[VAR_5];
   if (FUNC_0(VAR_4) & VAR_1) {
    VAR_3 = VAR_2->bnk2panel[VAR_5];
    (* VAR_3->isr)(VAR_3, (VAR_4 & 0xfffc));
   }
  }
 }
 return VAR_6;
}
