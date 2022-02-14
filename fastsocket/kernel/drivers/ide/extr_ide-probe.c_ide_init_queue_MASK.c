
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {TYPE_2__* queuedata; } ;
struct TYPE_6__ {int rqsize; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {struct request_queue* queue; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct request_queue* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct request_queue*,int) ;
 int FUNC_2 (struct request_queue*,int) ;
 int FUNC_3 (struct request_queue*,int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(ide_drive_t *VAR_3)
{
 struct request_queue *VAR_4;
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 int VAR_6 = 256;
 int VAR_7 = VAR_1;
 VAR_4 = FUNC_0(VAR_2, ((void*)0), FUNC_4(VAR_5));
 if (!VAR_4)
  return 1;

 VAR_4->queuedata = VAR_3;
 FUNC_3(VAR_4, 0xffff);

 if (VAR_5->rqsize < VAR_6)
  VAR_6 = VAR_5->rqsize;
 FUNC_1(VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_7);


 VAR_3->queue = VAR_4;


 FUNC_5(VAR_3, 1);

 return 0;
}
