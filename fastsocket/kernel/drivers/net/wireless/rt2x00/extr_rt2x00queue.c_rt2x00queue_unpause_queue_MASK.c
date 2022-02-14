
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct data_queue {int qid; TYPE_3__* rt2x00dev; int flags; } ;
struct TYPE_6__ {TYPE_2__* ops; int hw; int flags; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* kick_queue ) (struct data_queue*) ;} ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct data_queue*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct data_queue *VAR_3)
{
 if (!FUNC_3(VAR_0, &VAR_3->rt2x00dev->flags) ||
     !FUNC_3(VAR_2, &VAR_3->flags) ||
     !FUNC_2(VAR_1, &VAR_3->flags))
  return;

 switch (VAR_3->qid) {
 case 129:
 case 130:
 case 132:
 case 131:




  FUNC_0(VAR_3->rt2x00dev->hw, VAR_3->qid);
  break;
 case 128:




  VAR_3->rt2x00dev->ops->lib->kick_queue(VAR_3);
 default:
  break;
 }
}
