
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {scalar_t__ active; int number; TYPE_1__* card; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pnp_dev *VAR_1)
{
 if (!VAR_1->active)
  return -VAR_0;
 FUNC_0(VAR_1->card->number, VAR_1->number);
 FUNC_2(VAR_1->number);
 VAR_1->active = 0;
 FUNC_1();
 return 0;
}
