
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {int (* isr ) (struct stlpanel*,unsigned int) ;} ;
struct stlbrd {unsigned int ioctrl; unsigned int nrbnks; unsigned int* bnkstataddr; struct stlpanel** bnk2panel; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct stlpanel*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct stlbrd *VAR_1)
{
 struct stlpanel *VAR_2;
 unsigned int VAR_3, VAR_4;
 int VAR_5 = 0;

 while (FUNC_0(VAR_1->ioctrl) & 0x1) {
  VAR_5 = 1;
  for (VAR_4 = 0; VAR_4 < VAR_1->nrbnks; VAR_4++) {
   VAR_3 = VAR_1->bnkstataddr[VAR_4];
   if (FUNC_0(VAR_3) & VAR_0) {
    VAR_2 = VAR_1->bnk2panel[VAR_4];
    (* VAR_2->isr)(VAR_2, (VAR_3 & 0xfffc));
   }
  }
 }

 return VAR_5;
}
