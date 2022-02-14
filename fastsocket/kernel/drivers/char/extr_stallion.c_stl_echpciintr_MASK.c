
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {int (* isr ) (struct stlpanel*,unsigned int) ;} ;
struct stlbrd {unsigned int nrbnks; unsigned int* bnkstataddr; struct stlpanel** bnk2panel; int ioctrl; int * bnkpageaddr; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct stlpanel*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct stlbrd *VAR_1)
{
 struct stlpanel *VAR_2;
 unsigned int VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;

 while (1) {
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_1->nrbnks; VAR_4++) {
   FUNC_1(VAR_1->bnkpageaddr[VAR_4], VAR_1->ioctrl);
   VAR_3 = VAR_1->bnkstataddr[VAR_4];
   if (FUNC_0(VAR_3) & VAR_0) {
    VAR_2 = VAR_1->bnk2panel[VAR_4];
    (* VAR_2->isr)(VAR_2, (VAR_3 & 0xfffc));
    VAR_5++;
    VAR_6 = 1;
   }
  }
  if (! VAR_5)
   break;
 }
 return VAR_6;
}
