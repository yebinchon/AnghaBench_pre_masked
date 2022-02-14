
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crw {int rsid; int erc; int anc; int rsc; int chn; int oflw; int slct; } ;
struct TYPE_4__ {int code; } ;
struct TYPE_3__ {int length; int code; } ;
struct chsc_sei_area {int flags; TYPE_2__ response; TYPE_1__ request; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct chsc_sei_area*) ;
 int FUNC_3 (struct chsc_sei_area*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct chsc_sei_area*,int ,int) ;
 struct chsc_sei_area* VAR_0 ;

__attribute__((used)) static void FUNC_6(struct crw *VAR_1, struct crw *VAR_2, int VAR_3)
{
 struct chsc_sei_area *VAR_4;

 if (VAR_3) {
  FUNC_4();
  return;
 }
 FUNC_0(2, "CRW reports slct=%d, oflw=%d, "
        "chn=%d, rsc=%X, anc=%d, erc=%X, rsid=%X\n",
        VAR_1->slct, VAR_1->oflw, VAR_1->chn, VAR_1->rsc, VAR_1->anc,
        VAR_1->erc, VAR_1->rsid);
 if (!VAR_0)
  return;


 VAR_4 = VAR_0;

 FUNC_1(2, "prcss");
 do {
  FUNC_5(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->request.length = 0x0010;
  VAR_4->request.code = 0x000e;
  if (FUNC_2(VAR_4))
   break;

  if (VAR_4->response.code == 0x0001) {
   FUNC_0(4, "chsc: sei successful\n");
   FUNC_3(VAR_4);
  } else {
   FUNC_0(2, "chsc: sei failed (rc=%04x)\n",
          VAR_4->response.code);
   break;
  }
 } while (VAR_4->flags & 0x80);
}
