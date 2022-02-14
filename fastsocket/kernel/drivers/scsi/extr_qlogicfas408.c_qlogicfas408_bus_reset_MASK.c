
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct qlogicfas408_priv {int qabort; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 struct qlogicfas408_priv* FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct qlogicfas408_priv*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

int FUNC_4(struct scsi_cmnd *VAR_1)
{
 struct qlogicfas408_priv *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;

 VAR_2->qabort = 2;

 FUNC_2(VAR_1->device->host->host_lock, VAR_3);
 FUNC_1(VAR_2);
 FUNC_3(VAR_1->device->host->host_lock, VAR_3);

 return VAR_0;
}
