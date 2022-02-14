
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ v4l2_dev; } ;
struct sh_mobile_ceu_dev {TYPE_2__ ici; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_mobile_ceu_dev*,int ) ;
 int FUNC_1 (struct sh_mobile_ceu_dev*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sh_mobile_ceu_dev *VAR_4, u32 VAR_5)
{
 unsigned long VAR_6 = VAR_3 + 10 * VAR_2;





 while ((FUNC_0(VAR_4, VAR_1) & 1) && FUNC_5(VAR_3, VAR_6))
  FUNC_3(1);

 if (FUNC_4(VAR_3, VAR_6)) {
  FUNC_2(VAR_4->ici.v4l2_dev.dev,
   "Timeout waiting for frame end! Interface problem?\n");
  return;
 }


 while (FUNC_0(VAR_4, VAR_0) & (1 << 16))
  FUNC_6(10);


 if (VAR_5 & ~(1 << 16))
  FUNC_1(VAR_4, VAR_0, VAR_5);
}
