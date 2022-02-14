
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {int dev; } ;
struct dev_mc_list {int dmi_addrlen; int dmi_addr; struct dev_mc_list* next; } ;
struct TYPE_3__ {int mode; } ;
struct bonding {TYPE_2__* dev; TYPE_1__ params; } ;
struct TYPE_4__ {int flags; struct dev_mc_list* mc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct bonding *VAR_2, struct slave *VAR_3,
    struct slave *VAR_4)
{
 struct dev_mc_list *VAR_5;

 if (!FUNC_0(VAR_2->params.mode))



  return;

 if (VAR_4) {
  if (VAR_2->dev->flags & VAR_1)
   FUNC_4(VAR_4->dev, -1);

  if (VAR_2->dev->flags & VAR_0)
   FUNC_3(VAR_4->dev, -1);

  for (VAR_5 = VAR_2->dev->mc_list; VAR_5; VAR_5 = VAR_5->next)
   FUNC_2(VAR_4->dev, VAR_5->dmi_addr,
          VAR_5->dmi_addrlen, 0);
 }

 if (VAR_3) {

  if (VAR_2->dev->flags & VAR_1)
   FUNC_4(VAR_3->dev, 1);

  if (VAR_2->dev->flags & VAR_0)
   FUNC_3(VAR_3->dev, 1);

  for (VAR_5 = VAR_2->dev->mc_list; VAR_5; VAR_5 = VAR_5->next)
   FUNC_1(VAR_3->dev, VAR_5->dmi_addr,
       VAR_5->dmi_addrlen, 0);
 }
}
