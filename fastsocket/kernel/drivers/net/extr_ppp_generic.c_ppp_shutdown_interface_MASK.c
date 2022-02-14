
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppp_net {int all_ppp_mutex; int units_idr; } ;
struct TYPE_2__ {int dead; int rwait; int index; } ;
struct ppp {int closing; TYPE_1__ file; int * owner; int dev; int ppp_net; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ppp*) ;
 struct ppp_net* FUNC_3 (int ) ;
 int FUNC_4 (struct ppp*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ppp *VAR_0)
{
 struct ppp_net *VAR_1;

 VAR_1 = FUNC_3(VAR_0->ppp_net);
 FUNC_0(&VAR_1->all_ppp_mutex);


 FUNC_2(VAR_0);
 if (!VAR_0->closing) {
  VAR_0->closing = 1;
  FUNC_4(VAR_0);
  FUNC_6(VAR_0->dev);
 } else
  FUNC_4(VAR_0);

 FUNC_5(&VAR_1->units_idr, VAR_0->file.index);
 VAR_0->file.dead = 1;
 VAR_0->owner = ((void*)0);
 FUNC_7(&VAR_0->file.rwait);

 FUNC_1(&VAR_1->all_ppp_mutex);
}
