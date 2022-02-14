
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_devdata {int num_pports; int flags; int first_user_ctxt; int (* f_rcvctrl ) (int ,int,int) ;struct qib_ctxtdata** rcd; scalar_t__ pport; int (* f_sendctrl ) (scalar_t__,int) ;} ;
struct qib_ctxtdata {int ppd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_7)
{
 u64 VAR_8;
 int VAR_9;




 for (VAR_9 = 0; VAR_9 < VAR_7->num_pports; ++VAR_9)
  VAR_7->f_sendctrl(VAR_7->pport + VAR_9, VAR_6 |
   VAR_5);




 VAR_8 = VAR_1 | VAR_2;
 VAR_8 |= (VAR_7->flags & VAR_0) ?
    VAR_3 : VAR_4;
 for (VAR_9 = 0; VAR_7->rcd && VAR_9 < VAR_7->first_user_ctxt; ++VAR_9) {
  struct qib_ctxtdata *VAR_10 = VAR_7->rcd[VAR_9];

  if (VAR_10)
   VAR_7->f_rcvctrl(VAR_10->ppd, VAR_8, VAR_9);
 }
}
