
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ img; } ;
struct iwl_drv {TYPE_1__ fw; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_drv*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct iwl_drv *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, VAR_1->fw.img + VAR_2);
}
