
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {int dev; int mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct omap24xxcam_device *VAR_5)
{
 int VAR_6 = VAR_4;


 FUNC_3(VAR_5->mmio_base,
       VAR_0,
       VAR_1);


 while (!(FUNC_2(VAR_5->mmio_base, VAR_2)
   & VAR_3)
        && --VAR_6) {
  FUNC_1(1);
 }

 if (!(FUNC_2(VAR_5->mmio_base, VAR_2)
       & VAR_3))
  FUNC_0(VAR_5->dev, "camera soft reset timeout\n");
}
