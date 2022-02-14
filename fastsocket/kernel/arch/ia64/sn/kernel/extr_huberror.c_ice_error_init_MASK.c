
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubdev_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct hubdev_info*) ;
 scalar_t__ FUNC_1 (int ,void*,int ,char*,void*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct hubdev_info *VAR_3)
{

        if (FUNC_1
            (VAR_1, (void *)VAR_2, VAR_0, "SN_TIO_error",
             (void *)VAR_3)) {
                FUNC_0("ice_error_init: request_irq() error hubdev_info 0x%p\n",
                       VAR_3);
  return;
 }
 FUNC_2(VAR_1);
}
