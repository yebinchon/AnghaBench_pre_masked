
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {scalar_t__ next; TYPE_1__* dev; } ;
typedef TYPE_2__ isdn_net_dev ;
struct TYPE_8__ {TYPE_2__* netdev; int lock; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(char *VAR_3)
{
 u_long VAR_4;
 isdn_net_dev *VAR_5;
 isdn_net_dev *VAR_6;


 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_5 = VAR_2->netdev;
 VAR_6 = ((void*)0);
 while (VAR_5) {
  if (!FUNC_4(VAR_5->dev->name, VAR_3)) {
   FUNC_3(&VAR_2->lock, VAR_4);
   return (FUNC_0(VAR_5, VAR_6));
  }
  VAR_6 = VAR_5;
  VAR_5 = (isdn_net_dev *) VAR_5->next;
 }
 FUNC_3(&VAR_2->lock, VAR_4);

 if (VAR_2->netdev == ((void*)0))
  FUNC_1(VAR_1, 0);
 return -VAR_0;
}
