
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp2_target {int lu_list; int dont_block; } ;
struct TYPE_2__ {int length; struct sbp2_logical_unit* callback_data; int address_callback; } ;
struct sbp2_logical_unit {int lun; int has_sdev; int blocked; int link; int work; int orb_list; scalar_t__ retries; int login_id; struct sbp2_target* tgt; TYPE_1__ address_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct sbp2_logical_unit*) ;
 struct sbp2_logical_unit* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct sbp2_target *VAR_6, int VAR_7)
{
 struct sbp2_logical_unit *VAR_8;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->address_handler.length = 0x100;
 VAR_8->address_handler.address_callback = VAR_5;
 VAR_8->address_handler.callback_data = VAR_8;

 if (FUNC_2(&VAR_8->address_handler,
     &VAR_3) < 0) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }

 VAR_8->tgt = VAR_6;
 VAR_8->lun = VAR_7 & 0xffff;
 VAR_8->login_id = VAR_2;
 VAR_8->retries = 0;
 VAR_8->has_sdev = 0;
 VAR_8->blocked = 0;
 ++VAR_6->dont_block;
 FUNC_1(&VAR_8->orb_list);
 FUNC_0(&VAR_8->work, VAR_4);

 FUNC_5(&VAR_8->link, &VAR_6->lu_list);
 return 0;
}
