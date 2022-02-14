
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ib_sa_mcmember_rec {int mgid; int pkey; } ;
struct mcast_group {scalar_t__ state; scalar_t__ pkey_index; int work; TYPE_2__* port; int node; struct ib_sa_mcmember_rec rec; } ;
struct TYPE_4__ {int lock; int table; int port_num; TYPE_1__* dev; } ;
struct TYPE_3__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,struct mcast_group*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_5 (struct mcast_group*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(int VAR_3, struct ib_sa_mcmember_rec *VAR_4,
    void *VAR_5)
{
 struct mcast_group *VAR_6 = VAR_5;
 u16 VAR_7 = VAR_1;

 if (VAR_3)
  FUNC_5(VAR_6, VAR_3);
 else {
  FUNC_1(VAR_6->port->dev->device, VAR_6->port->port_num,
        FUNC_0(VAR_4->pkey), &VAR_7);

  FUNC_7(&VAR_6->port->lock);
  VAR_6->rec = *VAR_4;
  if (VAR_6->state == VAR_0 &&
      VAR_6->pkey_index == VAR_1)
   VAR_6->pkey_index = VAR_7;
  if (!FUNC_4(&VAR_2, &VAR_6->rec.mgid, sizeof VAR_2)) {
   FUNC_6(&VAR_6->node, &VAR_6->port->table);
   FUNC_2(VAR_6->port, VAR_6, 1);
  }
  FUNC_8(&VAR_6->port->lock);
 }
 FUNC_3(&VAR_6->work);
}
