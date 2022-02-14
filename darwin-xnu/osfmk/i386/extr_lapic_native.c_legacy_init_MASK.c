
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int vm_map_entry_t ;
typedef int ppnum_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,scalar_t__,int ,int,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__*,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(void)
{
 int VAR_16;
 kern_return_t VAR_17;
 vm_map_entry_t VAR_18;
 vm_map_offset_t VAR_19;


 if (VAR_15 == 0) {
  VAR_19 = (vm_offset_t)FUNC_9(VAR_13);
  VAR_16 = FUNC_8(VAR_13,
        &VAR_19,
        FUNC_7(VAR_4), 0,
        0,
        VAR_8,
        VAR_7,
        &VAR_18);


  VAR_15 = (vm_offset_t) VAR_19;
  if (VAR_16 != VAR_1) {
   FUNC_4("legacy_init: vm_map_find_entry FAILED (err=%d)", VAR_16);
  }
  FUNC_10(VAR_13);
  VAR_17 = FUNC_5(FUNC_6(),
                  VAR_15,
                  (ppnum_t) FUNC_3(VAR_14),
                  VAR_10|VAR_11,
                  VAR_9,
                  VAR_12,
                  VAR_6);

  FUNC_1(VAR_17 == VAR_1);
 }





 FUNC_0(VAR_0, VAR_2);
 FUNC_0(VAR_5, (FUNC_2()) << VAR_3);
}
