
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ssp_device {scalar_t__ mmio_base; } ;
struct ssp_dev {int mode; int flags; int psp_flags; int speed; struct ssp_device* ssp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

int FUNC_1(struct ssp_dev *VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct ssp_device *VAR_8 = VAR_3->ssp;

 VAR_3->mode = VAR_4;
 VAR_3->flags = VAR_5;
 VAR_3->psp_flags = VAR_6;
 VAR_3->speed = VAR_7;


 FUNC_0((VAR_3->speed | VAR_3->mode), VAR_8->mmio_base + VAR_0);
 FUNC_0(VAR_3->flags, VAR_8->mmio_base + VAR_1);
 FUNC_0(VAR_3->psp_flags, VAR_8->mmio_base + VAR_2);

 return 0;
}
