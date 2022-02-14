
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int* cmd; scalar_t__ errors; scalar_t__ resid_len; int __sector; int rq_disk; int cmd_type; } ;
struct TYPE_4__ {int blk_size; int valid; int buf; int cur; int disk; int first_frame; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_5__ {int queue; TYPE_1__* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,struct request*,int ) ;
 struct request* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int ,struct request*,int ,int,int ) ;
 int FUNC_5 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_6(ide_drive_t *VAR_8, int VAR_9, int VAR_10)
{
 idetape_tape_t *VAR_11 = VAR_8->driver_data;
 struct request *VAR_12;
 int VAR_13;

 FUNC_5(VAR_1, "cmd: 0x%x, size: %d", VAR_9, VAR_10);

 FUNC_0(VAR_9 != VAR_4 && VAR_9 != VAR_5);
 FUNC_0(VAR_10 < 0 || VAR_10 % VAR_11->blk_size);

 VAR_12 = FUNC_2(VAR_8->queue, VAR_3, VAR_7);
 VAR_12->cmd_type = VAR_6;
 VAR_12->cmd[13] = VAR_9;
 VAR_12->rq_disk = VAR_11->disk;
 VAR_12->__sector = VAR_11->first_frame;

 if (VAR_10) {
  VAR_13 = FUNC_4(VAR_8->queue, VAR_12, VAR_11->buf, VAR_10,
          VAR_7);
  if (VAR_13)
   goto out_put;
 }

 FUNC_1(VAR_8->queue, VAR_11->disk, VAR_12, 0);


 VAR_10 -= VAR_12->resid_len;
 VAR_11->cur = VAR_11->buf;
 if (VAR_9 == VAR_4)
  VAR_11->valid = VAR_10;
 else
  VAR_11->valid = 0;

 VAR_13 = VAR_10;
 if (VAR_12->errors == VAR_2)
  VAR_13 = -VAR_0;
out_put:
 FUNC_3(VAR_12);
 return VAR_13;
}
