
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {int ovl; int task; int work_q; int pageno; } ;
struct intr_pkt {int e1_bOvl; int e1_bSwapPageNo; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct uea_softc *VAR_0, struct intr_pkt *VAR_1)
{
 VAR_0->pageno = VAR_1->e1_bSwapPageNo;
 VAR_0->ovl = VAR_1->e1_bOvl >> 4 | VAR_1->e1_bOvl << 4;
 FUNC_0(VAR_0->work_q, &VAR_0->task);
}
