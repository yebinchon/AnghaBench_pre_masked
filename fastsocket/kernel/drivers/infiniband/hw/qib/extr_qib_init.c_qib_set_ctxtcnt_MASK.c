
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {scalar_t__ cfgctxts; scalar_t__ first_user_ctxt; scalar_t__ ctxtcnt; scalar_t__ num_pports; scalar_t__ freectxts; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;

void FUNC_1(struct qib_devdata *VAR_1)
{
 if (!VAR_0) {
  VAR_1->cfgctxts = VAR_1->first_user_ctxt + FUNC_0();
  if (VAR_1->cfgctxts > VAR_1->ctxtcnt)
   VAR_1->cfgctxts = VAR_1->ctxtcnt;
 } else if (VAR_0 < VAR_1->num_pports)
  VAR_1->cfgctxts = VAR_1->ctxtcnt;
 else if (VAR_0 <= VAR_1->ctxtcnt)
  VAR_1->cfgctxts = VAR_0;
 else
  VAR_1->cfgctxts = VAR_1->ctxtcnt;
 VAR_1->freectxts = (VAR_1->first_user_ctxt > VAR_1->cfgctxts) ? 0 :
  VAR_1->cfgctxts - VAR_1->first_user_ctxt;
}
