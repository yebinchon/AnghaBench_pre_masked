
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_offset_t ;
typedef int pt_entry_t ;
typedef int ppnum_t ;
typedef int pmap_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,int ) ;
 int * FUNC_9 (int ,int ) ;
 int * FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int ) ;

void
FUNC_16(pmap_t VAR_5, vm_map_offset_t VAR_6)
{
 ppnum_t VAR_7;
 pt_entry_t *VAR_8;
 boolean_t VAR_9 = FUNC_5(VAR_5);

 FUNC_0(VAR_5);

 if(FUNC_9(VAR_5, VAR_6) == VAR_2) {
  if (!FUNC_12(&VAR_7))
   FUNC_7("pmap_pre_expand");

  FUNC_15(VAR_7);

  VAR_8 = FUNC_10(VAR_5, VAR_6);

  FUNC_14(VAR_8, FUNC_6(FUNC_4(VAR_7))
    | FUNC_2(VAR_9)
    | (VAR_9 ? VAR_0 : VAR_1)
    | FUNC_3(VAR_9));

  VAR_8 = FUNC_11(VAR_5, VAR_6);

  FUNC_14(VAR_8, FUNC_6(FUNC_4(VAR_7))
    | FUNC_2(VAR_9)
    | (VAR_9 ? VAR_0 : VAR_1)
    | FUNC_3(VAR_9));

 }

 if(FUNC_8(VAR_5, VAR_6) == VAR_3) {
  if (!FUNC_12(&VAR_7))
   FUNC_7("pmap_pre_expand");

  FUNC_15(VAR_7);

  VAR_8 = FUNC_9(VAR_5, VAR_6);

  FUNC_14(VAR_8, FUNC_6(FUNC_4(VAR_7))
    | FUNC_2(VAR_9)
    | (VAR_9 ? VAR_0 : VAR_1)
    | FUNC_3(VAR_9));
 }

 if(FUNC_13(VAR_5, VAR_6) == VAR_4) {
  if (!FUNC_12(&VAR_7))
   FUNC_7("pmap_pre_expand");

  FUNC_15(VAR_7);

  VAR_8 = FUNC_8(VAR_5, VAR_6);

  FUNC_14(VAR_8, FUNC_6(FUNC_4(VAR_7))
    | FUNC_2(VAR_9)
    | (VAR_9 ? VAR_0 : VAR_1)
    | FUNC_3(VAR_9));
 }

 FUNC_1(VAR_5);
}
