
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; int data_direction; int se_dev; TYPE_1__* se_tfo; int t_bidi_data_sg; } ;
struct TYPE_2__ {int (* queue_status ) (struct se_cmd*) ;int (* queue_data_in ) (struct se_cmd*) ;} ;





 int VAR_0 ;
 int FUNC_0 (struct se_cmd*) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*,int ) ;
 int FUNC_7 (struct se_cmd*) ;

__attribute__((used)) static void FUNC_8(struct se_cmd *VAR_1)
{
 int VAR_2 = 0;

 FUNC_5(VAR_1);

 if (VAR_1->se_cmd_flags & VAR_0) {
  VAR_2 = VAR_1->se_tfo->queue_status(VAR_1);
  if (VAR_2)
   goto out;
 }

 switch (VAR_1->data_direction) {
 case 130:
  VAR_2 = VAR_1->se_tfo->queue_data_in(VAR_1);
  break;
 case 128:
  if (VAR_1->t_bidi_data_sg) {
   VAR_2 = VAR_1->se_tfo->queue_data_in(VAR_1);
   if (VAR_2 < 0)
    break;
  }

 case 129:
  VAR_2 = VAR_1->se_tfo->queue_status(VAR_1);
  break;
 default:
  break;
 }

out:
 if (VAR_2 < 0) {
  FUNC_6(VAR_1, VAR_1->se_dev);
  return;
 }
 FUNC_7(VAR_1);
 FUNC_4(VAR_1);
}
