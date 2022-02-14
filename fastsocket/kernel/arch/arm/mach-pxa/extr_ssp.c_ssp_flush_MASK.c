
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {scalar_t__ mmio_base; } ;
struct ssp_dev {struct ssp_device* ssp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct ssp_dev *VAR_6)
{
 struct ssp_device *VAR_7 = VAR_6->ssp;
 int VAR_8 = VAR_5 * 2;


 if (FUNC_1()) {
  while (FUNC_0(VAR_7->mmio_base + VAR_2) & 0xf00) {
   if (!--VAR_8)
    return -VAR_0;
   FUNC_2();
  }
  VAR_8 = VAR_5 * 2;
 }

 do {
  while (FUNC_0(VAR_7->mmio_base + VAR_2) & VAR_4) {
          if (!--VAR_8)
           return -VAR_0;
   (void)FUNC_0(VAR_7->mmio_base + VAR_1);
  }
         if (!--VAR_8)
          return -VAR_0;
 } while (FUNC_0(VAR_7->mmio_base + VAR_2) & VAR_3);

 return 0;
}
