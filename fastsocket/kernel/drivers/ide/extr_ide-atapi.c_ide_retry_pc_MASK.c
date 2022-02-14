
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct request {int q; int cmd; } ;
struct ide_atapi_pc {int c; } ;
struct TYPE_8__ {scalar_t__ media; TYPE_1__* hwif; int atapi_flags; struct ide_atapi_pc request_sense_pc; struct request sense_rq; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_7__ {struct request* rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (struct ide_atapi_pc*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct ide_atapi_pc*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ,int ,int) ;

void FUNC_8(ide_drive_t *VAR_3)
{
 struct request *VAR_4 = VAR_3->hwif->rq;
 struct request *VAR_5 = &VAR_3->sense_rq;
 struct ide_atapi_pc *VAR_6 = &VAR_3->request_sense_pc;

 (void)FUNC_6(VAR_3);


 FUNC_4(VAR_6);
 FUNC_7(VAR_6->c, VAR_5->cmd, 12);

 if (VAR_3->media == VAR_2)
  VAR_3->atapi_flags |= VAR_1;






 FUNC_0(VAR_4->q, VAR_4);
 VAR_3->hwif->rq = ((void*)0);
 if (FUNC_5(VAR_3, VAR_6)) {
  FUNC_2(VAR_4);
  FUNC_3(VAR_3, -VAR_0, FUNC_1(VAR_4));
 }
}
