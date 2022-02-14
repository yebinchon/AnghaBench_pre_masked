
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct pcd_unit {int dummy; } ;
struct TYPE_9__ {int buffer; TYPE_1__* rq_disk; } ;
struct TYPE_8__ {struct pcd_unit* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pcd_unit* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct request_queue * VAR_11)
{
 if (VAR_6)
  return;
 while (1) {
  if (!VAR_9) {
   VAR_9 = FUNC_1(VAR_11);
   if (!VAR_9)
    return;
  }

  if (FUNC_5(VAR_9) == VAR_1) {
   struct pcd_unit *VAR_12 = VAR_9->rq_disk->private_data;
   if (VAR_12 != VAR_8)
    VAR_5 = -1;
   VAR_8 = VAR_12;
   VAR_10 = FUNC_3(VAR_9);
   VAR_7 = FUNC_2(VAR_9);
   VAR_4 = VAR_9->buffer;
   VAR_6 = 1;
   FUNC_4(VAR_2, ((void*)0), 0, VAR_3);
   return;
  } else {
   FUNC_0(VAR_9, -VAR_0);
   VAR_9 = ((void*)0);
  }
 }
}
