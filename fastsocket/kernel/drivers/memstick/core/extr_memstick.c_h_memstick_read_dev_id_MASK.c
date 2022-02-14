
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms_id_register {int if_mode; int class; int category; int type; } ;
struct memstick_request {int data; int error; } ;
struct TYPE_2__ {int class; int category; int type; int match_flags; } ;
struct memstick_dev {int mrq_complete; int dev; TYPE_1__ id; struct memstick_request current_mrq; } ;
typedef int id_reg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct ms_id_register*,int ,int) ;
 int FUNC_3 (struct memstick_request*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct memstick_dev *VAR_3,
      struct memstick_request **VAR_4)
{
 struct ms_id_register VAR_5;

 if (!(*VAR_4)) {
  FUNC_3(&VAR_3->current_mrq, VAR_2, ((void*)0),
      sizeof(struct ms_id_register));
  *VAR_4 = &VAR_3->current_mrq;
  return 0;
 } else {
  if (!(*VAR_4)->error) {
   FUNC_2(&VAR_5, (*VAR_4)->data, sizeof(VAR_5));
   VAR_3->id.match_flags = VAR_1;
   VAR_3->id.type = VAR_5.type;
   VAR_3->id.category = VAR_5.category;
   VAR_3->id.class = VAR_5.class;
   FUNC_1(&VAR_3->dev, "if_mode = %02x\n", VAR_5.if_mode);
  }
  FUNC_0(&VAR_3->mrq_complete);
  return -VAR_0;
 }
}
