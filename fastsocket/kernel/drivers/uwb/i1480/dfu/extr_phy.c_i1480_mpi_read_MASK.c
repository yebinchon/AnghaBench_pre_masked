
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct TYPE_5__ {int wEvent; void* bEventType; } ;
struct TYPE_4__ {void* wCommand; void* bCommandType; } ;
struct i1480_evt_mpi_read {scalar_t__ bResultCode; TYPE_3__* data; TYPE_2__ rceb; void* size; TYPE_1__ rccb; } ;
struct i1480_cmd_mpi_read {scalar_t__ bResultCode; TYPE_3__* data; TYPE_2__ rceb; void* size; TYPE_1__ rccb; } ;
struct i1480 {int buf_size; int dev; struct i1480_evt_mpi_read* evt_buf; struct i1480_evt_mpi_read* cmd_buf; } ;
struct TYPE_6__ {unsigned int page; unsigned int offset; int value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,unsigned int,...) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct i1480*,char*,int,int) ;
 int FUNC_4 (struct i1480_evt_mpi_read*,int,int) ;

__attribute__((used)) static
int FUNC_5(struct i1480 *VAR_5, u8 *VAR_6, u16 VAR_7, size_t VAR_8)
{
 int VAR_9;
 struct i1480_cmd_mpi_read *VAR_10 = VAR_5->cmd_buf;
 struct i1480_evt_mpi_read *VAR_11 = VAR_5->evt_buf;
 unsigned VAR_12;

 FUNC_4(VAR_5->cmd_buf, 0x69, 512);
 FUNC_4(VAR_5->evt_buf, 0x69, 512);

 FUNC_0(VAR_8 > (VAR_5->buf_size - sizeof(*VAR_11)) / 3);
 VAR_9 = -VAR_1;
 VAR_10->rccb.bCommandType = VAR_3;
 VAR_10->rccb.wCommand = FUNC_1(VAR_4);
 VAR_10->size = FUNC_1(3*VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_10->data[VAR_12].page = (VAR_7 + VAR_12) >> 8;
  VAR_10->data[VAR_12].offset = (VAR_7 + VAR_12) & 0xff;
 }
 VAR_11->rceb.bEventType = VAR_3;
 VAR_11->rceb.wEvent = VAR_4;
 VAR_9 = FUNC_3(VAR_5, "MPI-READ", sizeof(*VAR_10) + 2*VAR_8,
   sizeof(*VAR_11) + 3*VAR_8);
 if (VAR_9 < 0)
  goto out;
 if (VAR_11->bResultCode != VAR_2) {
  FUNC_2(VAR_5->dev, "MPI-READ: command execution failed: %d\n",
   VAR_11->bResultCode);
  VAR_9 = -VAR_0;
 }
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if (VAR_11->data[VAR_12].page != (VAR_7 + VAR_12) >> 8)
   FUNC_2(VAR_5->dev, "MPI-READ: page inconsistency at "
    "index %u: expected 0x%02x, got 0x%02x\n", VAR_12,
    (VAR_7 + VAR_12) >> 8, VAR_11->data[VAR_12].page);
  if (VAR_11->data[VAR_12].offset != ((VAR_7 + VAR_12) & 0x00ff))
   FUNC_2(VAR_5->dev, "MPI-READ: offset inconsistency at "
    "index %u: expected 0x%02x, got 0x%02x\n", VAR_12,
    (VAR_7 + VAR_12) & 0x00ff,
    VAR_11->data[VAR_12].offset);
  VAR_6[VAR_12] = VAR_11->data[VAR_12].value;
 }
 VAR_9 = 0;
out:
 return VAR_9;
}
