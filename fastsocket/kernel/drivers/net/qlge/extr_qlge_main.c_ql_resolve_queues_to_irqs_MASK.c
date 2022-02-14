
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ql_adapter {int intr_count; TYPE_2__* ndev; TYPE_1__* rx_ring; int flags; struct intr_context* intr_context; } ;
struct intr_context {int intr; int intr_en_mask; int intr_dis_mask; int intr_read_mask; int name; void* handler; struct ql_adapter* qdev; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ql_adapter*,struct intr_context*) ;
 int FUNC_2 (struct ql_adapter*) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ql_adapter *VAR_10)
{
 int VAR_11 = 0;
 struct intr_context *VAR_12 = &VAR_10->intr_context[0];

 if (FUNC_0(FUNC_4(VAR_7, &VAR_10->flags))) {




  for (VAR_11 = 0; VAR_11 < VAR_10->intr_count; VAR_11++, VAR_12++) {
   VAR_10->rx_ring[VAR_11].irq = VAR_11;
   VAR_12->intr = VAR_11;
   VAR_12->qdev = VAR_10;



   FUNC_1(VAR_10, VAR_12);




   VAR_12->intr_en_mask =
       VAR_5 | VAR_2 |
       VAR_4 | VAR_1 | VAR_0
       | VAR_11;
   VAR_12->intr_dis_mask =
       VAR_5 | VAR_2 |
       VAR_3 | VAR_1 |
       VAR_0 | VAR_11;
   VAR_12->intr_read_mask =
       VAR_5 | VAR_2 |
       VAR_6 | VAR_1 | VAR_0 |
       VAR_11;
   if (VAR_11 == 0) {





    VAR_12->handler = VAR_8;
    FUNC_3(VAR_12->name, "%s-rx-%d",
     VAR_10->ndev->name, VAR_11);
   } else {



    VAR_12->handler = VAR_9;
    FUNC_3(VAR_12->name, "%s-rx-%d",
     VAR_10->ndev->name, VAR_11);
   }
  }
 } else {




  VAR_12->intr = 0;
  VAR_12->qdev = VAR_10;




  VAR_12->intr_en_mask =
      VAR_5 | VAR_2 | VAR_4;
  VAR_12->intr_dis_mask =
      VAR_5 | VAR_2 |
      VAR_3;
  VAR_12->intr_read_mask =
      VAR_5 | VAR_2 | VAR_6;



  VAR_12->handler = VAR_8;
  FUNC_3(VAR_12->name, "%s-single_irq", VAR_10->ndev->name);





  FUNC_1(VAR_10, VAR_12);
 }



 FUNC_2(VAR_10);
}
