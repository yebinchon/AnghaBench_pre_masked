
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int (* f_rcvctrl ) (int ,unsigned int,int ) ;} ;
struct qib_ctxtdata {int ctxt; int ppd; scalar_t__ rcvhdrtail_kvaddr; struct qib_devdata* dd; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct qib_ctxtdata*) ;
 int FUNC_1 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct qib_ctxtdata *VAR_2, unsigned VAR_3,
      int VAR_4)
{
 struct qib_devdata *VAR_5 = VAR_2->dd;
 unsigned int VAR_6;

 if (VAR_3)
  goto bail;

 if (VAR_4) {
  if (VAR_2->rcvhdrtail_kvaddr)
   FUNC_0(VAR_2);
  VAR_6 = VAR_1;
 } else
  VAR_6 = VAR_0;
 VAR_5->f_rcvctrl(VAR_2->ppd, VAR_6, VAR_2->ctxt);

bail:
 return 0;
}
