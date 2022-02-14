
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct whc {scalar_t__ base; TYPE_1__* umc; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int,int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct whc *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 / 32;
 u32 VAR_4 = 1 << (VAR_2 % 32);

 FUNC_0(VAR_4, VAR_1->base + VAR_0 + VAR_3);

 return FUNC_1(&VAR_1->umc->dev,
        VAR_1->base + VAR_0 + VAR_3, VAR_4, 0,
        100, "DI update");
}
