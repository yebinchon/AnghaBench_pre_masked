
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {int num_pports; int cfgctxts; int first_user_ctxt; int pbufsctxt; int pioavregs; int (* f_initvl15_bufs ) (struct qib_devdata*) ;scalar_t__ piobcnt4k; scalar_t__ piobcnt2k; scalar_t__* pioavailshadow; int * pioavailregs_dma; scalar_t__ lastctxt_piobuf; scalar_t__ ctxts_extrabuf; scalar_t__ pport; int (* f_sendctrl ) (scalar_t__,int ) ;} ;
typedef int __le64 ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct qib_devdata*,int ,scalar_t__,int ,int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_6(struct qib_devdata *VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6;
 VAR_3->f_sendctrl(VAR_3->pport, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_3->num_pports; ++VAR_5)
  VAR_3->f_sendctrl(VAR_3->pport + VAR_5, VAR_1);







 VAR_6 = VAR_3->cfgctxts - VAR_3->first_user_ctxt;
 VAR_3->ctxts_extrabuf = VAR_3->pbufsctxt ?
  VAR_3->lastctxt_piobuf - (VAR_3->pbufsctxt * VAR_6) : 0;
 for (VAR_4 = 0; VAR_4 < VAR_3->pioavregs; VAR_4++) {
  __le64 VAR_7;

  VAR_7 = VAR_3->pioavailregs_dma[VAR_4];





  VAR_3->pioavailshadow[VAR_4] = FUNC_1(VAR_7);
 }
 while (VAR_4 < FUNC_0(VAR_3->pioavailshadow))
  VAR_3->pioavailshadow[VAR_4++] = 0;


 FUNC_2(VAR_3, 0, VAR_3->piobcnt2k + VAR_3->piobcnt4k,
          VAR_2, ((void*)0));
 VAR_3->f_initvl15_bufs(VAR_3);
}
