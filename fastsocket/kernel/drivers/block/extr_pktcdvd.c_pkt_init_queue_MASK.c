
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct pktcdvd_device* queuedata; } ;
struct pktcdvd_device {TYPE_1__* disk; } ;
struct TYPE_2__ {struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*,int ) ;
 int FUNC_1 (struct request_queue*,int ) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct pktcdvd_device *VAR_4)
{
 struct request_queue *VAR_5 = VAR_4->disk->queue;

 FUNC_1(VAR_5, VAR_2);
 FUNC_0(VAR_5, VAR_0);
 FUNC_2(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_3);
 VAR_5->queuedata = VAR_4;
}
