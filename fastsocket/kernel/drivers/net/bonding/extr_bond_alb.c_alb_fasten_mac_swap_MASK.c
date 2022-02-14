
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_2__* dev; } ;
struct TYPE_3__ {scalar_t__ rlb_enabled; } ;
struct bonding {TYPE_1__ alb_info; } ;
struct TYPE_4__ {int dev_addr; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct slave*) ;
 int FUNC_2 (struct slave*,int ) ;
 int FUNC_3 (struct bonding*,struct slave*) ;
 int FUNC_4 (struct bonding*,int ) ;

__attribute__((used)) static void FUNC_5(struct bonding *VAR_0, struct slave *VAR_1,
    struct slave *VAR_2)
{
 int VAR_3 = (FUNC_1(VAR_1) != FUNC_1(VAR_2));
 struct slave *VAR_4 = ((void*)0);

 FUNC_0();


 if (FUNC_1(VAR_1)) {
  FUNC_2(VAR_1, VAR_1->dev->dev_addr);
  if (VAR_0->alb_info.rlb_enabled) {



   FUNC_3(VAR_0, VAR_1);
  }
 } else {
  VAR_4 = VAR_1;
 }

 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_2, VAR_2->dev->dev_addr);
  if (VAR_0->alb_info.rlb_enabled) {



   FUNC_3(VAR_0, VAR_2);
  }
 } else {
  VAR_4 = VAR_2;
 }

 if (VAR_0->alb_info.rlb_enabled && VAR_3) {

  FUNC_4(VAR_0,
        VAR_4->dev->dev_addr);
 }
}
