
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct sta_info* challenge; } ;
struct TYPE_8__ {TYPE_3__ sta; } ;
struct sta_info {int aid; int timer; TYPE_4__ u; scalar_t__ ap; int tx_buf; struct sta_info* crypt; int priv; TYPE_2__* ops; int addr; TYPE_1__* local; } ;
struct ap_data {int ** sta_aid; int num_sta; int * proc; } ;
struct TYPE_6__ {int (* deinit ) (int ) ;} ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct sta_info*) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ap_data *VAR_0, struct sta_info *VAR_1)
{
 if (VAR_1->ap && VAR_1->local)
  FUNC_1(VAR_1->local->dev, VAR_1);

 if (VAR_0->proc != ((void*)0)) {
  char VAR_2[20];
  FUNC_5(VAR_2, "%pM", VAR_1->addr);
  FUNC_3(VAR_2, VAR_0->proc);
 }

 if (VAR_1->crypt) {
  VAR_1->crypt->ops->deinit(VAR_1->crypt->priv);
  FUNC_2(VAR_1->crypt);
  VAR_1->crypt = ((void*)0);
 }

 FUNC_4(&VAR_1->tx_buf);

 VAR_0->num_sta--;

 if (VAR_1->aid > 0)
  VAR_0->sta_aid[VAR_1->aid - 1] = ((void*)0);

 if (!VAR_1->ap && VAR_1->u.sta.challenge)
  FUNC_2(VAR_1->u.sta.challenge);
 FUNC_0(&VAR_1->timer);


 FUNC_2(VAR_1);
}
