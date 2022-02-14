
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_packet {scalar_t__ generation; int ack; int (* callback ) (struct fw_packet*,int *,int ) ;int * header; } ;
struct context {TYPE_1__* ohci; } ;
struct TYPE_2__ {scalar_t__ node_id; scalar_t__ generation; int card; int lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct context*,struct fw_packet*) ;
 int FUNC_2 (struct context*,struct fw_packet*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct fw_packet*,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct context *VAR_0, struct fw_packet *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_3(&VAR_0->ohci->lock, VAR_2);

 if (FUNC_0(VAR_1->header[0]) == VAR_0->ohci->node_id &&
     VAR_0->ohci->generation == VAR_1->generation) {
  FUNC_4(&VAR_0->ohci->lock, VAR_2);
  FUNC_2(VAR_0, VAR_1);
  return;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_4(&VAR_0->ohci->lock, VAR_2);

 if (VAR_3 < 0)
  VAR_1->callback(VAR_1, &VAR_0->ohci->card, VAR_1->ack);

}
