
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t wEvent; void* bEventType; } ;
struct i1480_evt_confirm {scalar_t__ bResultCode; TYPE_2__ rceb; } ;
struct TYPE_3__ {void* wCommand; void* bCommandType; } ;
struct i1480_cmd_mpi_write {int data; void* size; TYPE_1__ rccb; } ;
struct i1480 {int dev; struct i1480_evt_confirm* evt_buf; struct i1480_cmd_mpi_write* cmd_buf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 void* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (struct i1480*,char*,int,int) ;
 int FUNC_4 (int ,void const*,size_t) ;

__attribute__((used)) static
int FUNC_5(struct i1480 *VAR_5, const void *VAR_6, size_t VAR_7)
{
 int VAR_8;
 struct i1480_cmd_mpi_write *VAR_9 = VAR_5->cmd_buf;
 struct i1480_evt_confirm *VAR_10 = VAR_5->evt_buf;

 FUNC_0(VAR_7 > 480);
 VAR_8 = -VAR_1;
 VAR_9->rccb.bCommandType = VAR_3;
 VAR_9->rccb.wCommand = FUNC_1(VAR_4);
 VAR_9->size = FUNC_1(VAR_7);
 FUNC_4(VAR_9->data, VAR_6, VAR_7);
 VAR_10->rceb.bEventType = VAR_3;
 VAR_10->rceb.wEvent = VAR_4;
 VAR_8 = FUNC_3(VAR_5, "MPI-WRITE", sizeof(*VAR_9) + VAR_7, sizeof(*VAR_10));
 if (VAR_8 < 0)
  goto out;
 if (VAR_10->bResultCode != VAR_2) {
  FUNC_2(VAR_5->dev, "MPI-WRITE: command execution failed: %d\n",
   VAR_10->bResultCode);
  VAR_8 = -VAR_0;
 }
out:
 return VAR_8;
}
