
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int tt_entry_t ;
typedef int pt_entry_t ;
typedef int ppnum_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int* tte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 TYPE_1__* VAR_18 ;
 int FUNC_5 (char*,void*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int) ;
 size_t FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;

kern_return_t
FUNC_10(
 vm_offset_t VAR_19,
 vm_size_t VAR_20,
 vm_prot_t VAR_21)
{
 pt_entry_t VAR_22 = 0;
 pt_entry_t VAR_23 = 0;
 vm_offset_t VAR_24;
 ppnum_t VAR_25;
 kern_return_t VAR_26 = VAR_14;

 if (VAR_19 < VAR_15)
  return VAR_13;

 FUNC_3((VAR_19 & (VAR_2 - 1)) == 0);

 if ((VAR_21 & VAR_17) && (VAR_21 & VAR_16)) {
  FUNC_5("ml_static_protect(): WX request on %p", (void *) VAR_19);
 }


 if (VAR_21 & VAR_17) {
  VAR_22 |= FUNC_0(VAR_1);
  VAR_23 |= FUNC_1(VAR_1);
 } else {
  VAR_22 |= FUNC_0(VAR_0);
  VAR_23 |= FUNC_1(VAR_0);
 }

 if (!(VAR_21 & VAR_16)) {
  VAR_22 |= VAR_5;
  VAR_23 |= VAR_8;
 }

 for (VAR_24 = VAR_19;
      VAR_24 < ((VAR_19 + VAR_20) & ~VAR_3);
      VAR_24 += VAR_2) {
  VAR_25 = FUNC_6(VAR_18, VAR_24);
  if (VAR_25 != (vm_offset_t) ((void*)0)) {
   tt_entry_t *VAR_27 = &VAR_18->tte[FUNC_8(VAR_24)];
   tt_entry_t VAR_28 = *VAR_27;

   if ((VAR_28 & VAR_11) != VAR_12) {
    if (((VAR_28 & VAR_11) == VAR_10) &&
        ((VAR_28 & (VAR_7 | VAR_9)) == VAR_23)) {




     continue;
    }

    VAR_26 = VAR_13;
    break;
   }

   pt_entry_t *VAR_29 = (pt_entry_t *) FUNC_9(VAR_28) + FUNC_7(VAR_24);
   pt_entry_t VAR_30 = *VAR_29;

   VAR_30 = (VAR_30 & ~(VAR_4 | VAR_6)) | VAR_22;
   *VAR_29 = VAR_30;

   FUNC_2((vm_offset_t) VAR_29, sizeof(*VAR_29));

  }
 }

 if (VAR_24 > VAR_19)
  FUNC_4(VAR_19, (vm_size_t)(VAR_24 - VAR_19));

 return VAR_26;
}
