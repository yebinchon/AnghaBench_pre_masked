
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tg3 {TYPE_2__* napi; int dev; scalar_t__ link_up; } ;
struct TYPE_4__ {TYPE_1__* hw_status; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*) ;

__attribute__((used)) static inline void FUNC_5(struct tg3 *VAR_1)
{
 FUNC_4(VAR_1);





 FUNC_1(VAR_1->dev);

 if (VAR_1->link_up)
  FUNC_0(VAR_1->dev);

 FUNC_3(VAR_1);
 VAR_1->napi[0].hw_status->status |= VAR_0;
 FUNC_2(VAR_1);
}
