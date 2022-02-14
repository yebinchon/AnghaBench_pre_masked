
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_compressor_mode_t ;
typedef scalar_t__ uint32_t ;
typedef int tmpc ;
typedef int new_codec ;
struct TYPE_2__ {int lz4_threshold; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,scalar_t__*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;

void FUNC_2(void) {
 vm_compressor_mode_t VAR_7 = VAR_4;
 FUNC_0("vm_compressor_codec", &VAR_7, sizeof(VAR_7));
 FUNC_1(((VAR_7 == VAR_4) || (VAR_7 == VAR_2) ||
  (VAR_7 == VAR_1) || (VAR_7 == VAR_0)),
     "Invalid VM compression codec: %u", VAR_7);
}
