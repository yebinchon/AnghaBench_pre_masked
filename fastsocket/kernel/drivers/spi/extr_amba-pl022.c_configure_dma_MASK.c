
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl022 {TYPE_1__* adev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct pl022 *VAR_2 = VAR_1;
 FUNC_0(&VAR_2->adev->dev, "configure DMA\n");
 return -VAR_0;
}
