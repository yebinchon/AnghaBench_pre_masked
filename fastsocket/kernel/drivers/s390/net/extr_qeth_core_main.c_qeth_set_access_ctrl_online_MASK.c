
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ isolation; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct qeth_card {TYPE_4__* gdev; TYPE_3__ options; TYPE_1__ info; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_10__ {TYPE_2__ kobj; } ;
struct TYPE_9__ {TYPE_5__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,scalar_t__,int) ;

int FUNC_5(struct qeth_card *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 FUNC_1(VAR_5, 4, "setactlo");

 if ((VAR_6->info.type == VAR_3 ||
      VAR_6->info.type == VAR_4) &&
      FUNC_3(VAR_6, VAR_1)) {
  VAR_8 = FUNC_4(VAR_6,
   VAR_6->options.isolation, VAR_7);
  if (VAR_8) {
   FUNC_0(3,
    "IPA(SET_ACCESS_CTRL,%s,%d) sent failed\n",
    VAR_6->gdev->dev.kobj.name,
    VAR_8);
   VAR_8 = -VAR_0;
  }
 } else if (VAR_6->options.isolation != VAR_2) {
  VAR_6->options.isolation = VAR_2;

  FUNC_2(&VAR_6->gdev->dev, "Adapter does not "
   "support QDIO data connection isolation\n");
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
