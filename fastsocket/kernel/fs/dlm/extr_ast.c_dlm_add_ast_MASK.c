
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct dlm_lkb {int lkb_flags; int lkb_astqueue; int lkb_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dlm_lkb*,int ,int,int,int ,scalar_t__) ;
 int FUNC_1 (struct dlm_lkb*,int ,int,int,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct dlm_lkb *VAR_7, uint32_t VAR_8, int VAR_9, int VAR_10,
   uint32_t VAR_11)
{
 uint64_t VAR_12;
 int VAR_13;

 FUNC_6(&VAR_3);

 VAR_12 = ++VAR_4;

 if (VAR_7->lkb_flags & VAR_0) {
  FUNC_7(&VAR_3);
  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
  return;
 }

 VAR_13 = FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_13 < 0) {
  FUNC_7(&VAR_3);
  return;
 }

 if (FUNC_4(&VAR_7->lkb_astqueue)) {
  FUNC_2(&VAR_7->lkb_ref);
  FUNC_3(&VAR_7->lkb_astqueue, &VAR_2);
 }
 FUNC_7(&VAR_3);

 FUNC_5(VAR_1, &VAR_6);
 FUNC_8(VAR_5);
}
