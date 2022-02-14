
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* mcl_level; scalar_t__* portname; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__* gdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,char*,char*,char*,int ) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_0)
{
 if (VAR_0->info.portname[0])
  FUNC_0(&VAR_0->gdev->dev, "Device is a%s "
         "card%s%s%s\nwith link type %s "
         "(no portname needed by interface).\n",
         FUNC_1(VAR_0),
         (VAR_0->info.mcl_level[0]) ? " (level: " : "",
         (VAR_0->info.mcl_level[0]) ? VAR_0->info.mcl_level : "",
         (VAR_0->info.mcl_level[0]) ? ")" : "",
         FUNC_2(VAR_0));
 else
  FUNC_0(&VAR_0->gdev->dev, "Device is a%s "
         "card%s%s%s\nwith link type %s.\n",
         FUNC_1(VAR_0),
         (VAR_0->info.mcl_level[0]) ? " (level: " : "",
         (VAR_0->info.mcl_level[0]) ? VAR_0->info.mcl_level : "",
         (VAR_0->info.mcl_level[0]) ? ")" : "",
         FUNC_2(VAR_0));
}
