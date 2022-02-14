
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmv_dsc_e1 {scalar_t__ function; scalar_t__ idx; scalar_t__ address; scalar_t__ offset; } ;
struct TYPE_5__ {struct cmv_dsc_e1 e1; } ;
struct uea_softc {int data; TYPE_1__ cmv_dsc; } ;
struct cmv_e1 {scalar_t__ bDirection; scalar_t__ bFunction; void* wPreamble; int dwData; void* wOffsetAddress; int dwSymbolicAddress; void* wIndex; } ;
struct TYPE_6__ {struct cmv_e1 cmv; } ;
struct TYPE_7__ {TYPE_2__ s2; } ;
struct TYPE_8__ {TYPE_3__ e1; } ;
struct intr_pkt {TYPE_4__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct uea_softc*) ;
 scalar_t__ FUNC_4 (struct uea_softc*) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct uea_softc*) ;

__attribute__((used)) static void FUNC_13(struct uea_softc *VAR_5, struct intr_pkt *VAR_6)
{
 struct cmv_dsc_e1 *VAR_7 = &VAR_5->cmv_dsc.e1;
 struct cmv_e1 *VAR_8 = &VAR_6->u.e1.s2.cmv;

 FUNC_9(FUNC_3(VAR_5));
 if (FUNC_7(VAR_8->wPreamble) != VAR_4)
  goto bad1;

 if (VAR_8->bDirection != VAR_3)
  goto bad1;




 if (VAR_8->bFunction != VAR_7->function) {
  if (FUNC_4(VAR_5) == VAR_0
    && VAR_8->bFunction == FUNC_2(2, 2)) {
   VAR_8->wIndex = FUNC_5(VAR_7->idx);
   FUNC_8(VAR_7->address, &VAR_8->dwSymbolicAddress);
   VAR_8->wOffsetAddress = FUNC_5(VAR_7->offset);
  } else
   goto bad2;
 }

 if (VAR_8->bFunction == FUNC_2(VAR_1, VAR_2)) {
  FUNC_12(VAR_5);
  FUNC_11(FUNC_3(VAR_5));
  return;
 }


 if (FUNC_7(VAR_8->wIndex) != VAR_7->idx ||
     FUNC_6(&VAR_8->dwSymbolicAddress) != VAR_7->address ||
     FUNC_7(VAR_8->wOffsetAddress) != VAR_7->offset)
  goto bad2;

 VAR_5->data = FUNC_6(&VAR_8->dwData);
 VAR_5->data = VAR_5->data << 16 | VAR_5->data >> 16;

 FUNC_12(VAR_5);
 FUNC_11(FUNC_3(VAR_5));
 return;

bad2:
 FUNC_10(FUNC_3(VAR_5), "unexpected cmv received, "
   "Function : %d, Subfunction : %d\n",
   FUNC_1(VAR_8->bFunction),
   FUNC_0(VAR_8->bFunction));
 FUNC_11(FUNC_3(VAR_5));
 return;

bad1:
 FUNC_10(FUNC_3(VAR_5), "invalid cmv received, "
   "wPreamble %d, bDirection %d\n",
   FUNC_7(VAR_8->wPreamble), VAR_8->bDirection);
 FUNC_11(FUNC_3(VAR_5));
}
