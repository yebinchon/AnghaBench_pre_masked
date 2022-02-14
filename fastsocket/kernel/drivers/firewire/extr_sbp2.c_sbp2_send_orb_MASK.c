
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int low; scalar_t__ high; } ;
struct sbp2_orb {TYPE_2__ pointer; int t; int kref; int link; int request_bus; } ;
struct sbp2_logical_unit {int orb_list; int tgt; } ;
struct fw_device {int max_speed; TYPE_1__* card; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int,int,int ,int ,TYPE_2__*,int,int ,struct sbp2_orb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct fw_device* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sbp2_orb *VAR_2, struct sbp2_logical_unit *VAR_3,
     int VAR_4, int VAR_5, u64 VAR_6)
{
 struct fw_device *VAR_7 = FUNC_6(VAR_3->tgt);
 unsigned long VAR_8;

 VAR_2->pointer.high = 0;
 VAR_2->pointer.low = FUNC_0(VAR_2->request_bus);

 FUNC_4(&VAR_7->card->lock, VAR_8);
 FUNC_3(&VAR_2->link, &VAR_3->orb_list);
 FUNC_5(&VAR_7->card->lock, VAR_8);


 FUNC_2(&VAR_2->kref);
 FUNC_2(&VAR_2->kref);

 FUNC_1(VAR_7->card, &VAR_2->t, VAR_0,
   VAR_4, VAR_5, VAR_7->max_speed, VAR_6,
   &VAR_2->pointer, sizeof(VAR_2->pointer),
   VAR_1, VAR_2);
}
