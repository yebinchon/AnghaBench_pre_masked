
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int sch_no; int ssid; } ;
struct crw {int rsid; int erc; int anc; int rsc; int chn; int oflw; int slct; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (struct subchannel_id,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct subchannel_id*) ;

__attribute__((used)) static void FUNC_4(struct crw *VAR_0, struct crw *VAR_1, int VAR_2)
{
 struct subchannel_id VAR_3;

 if (VAR_2) {
  FUNC_2();
  return;
 }
 FUNC_0(2, "CRW0 reports slct=%d, oflw=%d, "
        "chn=%d, rsc=%X, anc=%d, erc=%X, rsid=%X\n",
        VAR_0->slct, VAR_0->oflw, VAR_0->chn, VAR_0->rsc, VAR_0->anc,
        VAR_0->erc, VAR_0->rsid);
 if (VAR_1)
  FUNC_0(2, "CRW1 reports slct=%d, oflw=%d, "
         "chn=%d, rsc=%X, anc=%d, erc=%X, rsid=%X\n",
         VAR_1->slct, VAR_1->oflw, VAR_1->chn, VAR_1->rsc,
         VAR_1->anc, VAR_1->erc, VAR_1->rsid);
 FUNC_3(&VAR_3);
 VAR_3.sch_no = VAR_0->rsid;
 if (VAR_1)
  VAR_3.ssid = (VAR_1->rsid >> 8) & 3;






 FUNC_1(VAR_3, 0);
}
