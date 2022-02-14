
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_4__ {int (* set_tim ) (int ,int,int) ;} ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(local_info_t *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->func->set_tim)
  VAR_0->func->set_tim(VAR_0->dev, VAR_1, VAR_2);
}
