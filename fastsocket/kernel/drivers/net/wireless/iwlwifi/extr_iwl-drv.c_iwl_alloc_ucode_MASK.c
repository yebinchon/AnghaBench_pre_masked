
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_firmware_pieces {int dummy; } ;
struct TYPE_4__ {TYPE_1__* img; } ;
struct iwl_drv {TYPE_2__ fw; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_3__ {int * sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_firmware_pieces*,int,int) ;
 scalar_t__ FUNC_1 (struct iwl_firmware_pieces*,int,int) ;
 scalar_t__ FUNC_2 (struct iwl_drv*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_drv *VAR_2,
      struct iwl_firmware_pieces *VAR_3,
      enum iwl_ucode_type VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0;
      VAR_5 < VAR_1 && FUNC_1(VAR_3, VAR_4, VAR_5);
      VAR_5++)
  if (FUNC_2(VAR_2, &(VAR_2->fw.img[VAR_4].sec[VAR_5]),
          FUNC_0(VAR_3, VAR_4, VAR_5)))
   return -VAR_0;
 return 0;
}
