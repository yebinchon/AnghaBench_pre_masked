
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {scalar_t__ mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(const struct omap24xxcam_device *VAR_11)
{




 FUNC_0(VAR_11->mmio_base + VAR_7, VAR_8,
       VAR_9);


 FUNC_0(VAR_11->mmio_base + VAR_7, VAR_0,
       VAR_1 | (VAR_10 / 4 - 1));


 FUNC_0(VAR_11->mmio_base + VAR_7, VAR_2,
       VAR_5
       | VAR_4
       | VAR_6
       | VAR_3);
}
