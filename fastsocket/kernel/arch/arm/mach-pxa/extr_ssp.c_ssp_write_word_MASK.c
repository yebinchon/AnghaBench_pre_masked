
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_device {scalar_t__ mmio_base; } ;
struct ssp_dev {struct ssp_device* ssp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;

int FUNC_3(struct ssp_dev *VAR_5, u32 VAR_6)
{
 struct ssp_device *VAR_7 = VAR_5->ssp;
 int VAR_8 = VAR_4;

 while (!(FUNC_0(VAR_7->mmio_base + VAR_2) & VAR_3)) {
         if (!--VAR_8)
          return -VAR_0;
  FUNC_2();
 }

 FUNC_1(VAR_6, VAR_7->mmio_base + VAR_1);

 return 0;
}
