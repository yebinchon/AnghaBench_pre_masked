
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmv_dsc_e4 {scalar_t__ function; scalar_t__ offset; scalar_t__ group; scalar_t__ address; } ;
struct TYPE_5__ {struct cmv_dsc_e4 e4; } ;
struct uea_softc {void* data1; void* data; TYPE_1__ cmv_dsc; } ;
struct cmv_e4 {int wFunction; int * dwData; int wAddress; int wGroup; int wOffset; } ;
struct TYPE_6__ {struct cmv_e4 cmv; } ;
struct TYPE_7__ {TYPE_2__ s2; } ;
struct TYPE_8__ {TYPE_3__ e4; } ;
struct intr_pkt {TYPE_4__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct uea_softc*) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct uea_softc*) ;

__attribute__((used)) static void FUNC_11(struct uea_softc *VAR_2, struct intr_pkt *VAR_3)
{
 struct cmv_dsc_e4 *VAR_4 = &VAR_2->cmv_dsc.e4;
 struct cmv_e4 *VAR_5 = &VAR_3->u.e4.s2.cmv;

 FUNC_7(FUNC_3(VAR_2));
 FUNC_6(FUNC_3(VAR_2), "cmv %x %x %x %x %x %x\n",
  FUNC_4(VAR_5->wGroup), FUNC_4(VAR_5->wFunction),
  FUNC_4(VAR_5->wOffset), FUNC_4(VAR_5->wAddress),
  FUNC_5(VAR_5->dwData[0]), FUNC_5(VAR_5->dwData[1]));

 if (FUNC_4(VAR_5->wFunction) != VAR_4->function)
  goto bad2;

 if (FUNC_4(VAR_5->wFunction) == FUNC_2(VAR_0, VAR_1, 1)) {
  FUNC_10(VAR_2);
  FUNC_9(FUNC_3(VAR_2));
  return;
 }


 if (FUNC_4(VAR_5->wOffset) != VAR_4->offset ||
     FUNC_4(VAR_5->wGroup) != VAR_4->group ||
     FUNC_4(VAR_5->wAddress) != VAR_4->address)
  goto bad2;

 VAR_2->data = FUNC_5(VAR_5->dwData[0]);
 VAR_2->data1 = FUNC_5(VAR_5->dwData[1]);
 FUNC_10(VAR_2);
 FUNC_9(FUNC_3(VAR_2));
 return;

bad2:
 FUNC_8(FUNC_3(VAR_2), "unexpected cmv received, "
   "Function : %d, Subfunction : %d\n",
   FUNC_1(VAR_5->wFunction),
   FUNC_0(VAR_5->wFunction));
 FUNC_9(FUNC_3(VAR_2));
 return;
}
