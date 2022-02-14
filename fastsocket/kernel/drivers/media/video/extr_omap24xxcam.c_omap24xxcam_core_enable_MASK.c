
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {int cc_ctrl; scalar_t__ mmio_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct omap24xxcam_device *VAR_2)
{

 FUNC_0(VAR_2->mmio_base + VAR_1, VAR_0,
       VAR_2->cc_ctrl);
}
