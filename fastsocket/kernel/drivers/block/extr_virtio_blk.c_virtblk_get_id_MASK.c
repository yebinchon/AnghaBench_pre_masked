
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_blk {TYPE_1__* disk; } ;
struct request {int cmd_type; } ;
struct gendisk {struct virtio_blk* private_data; } ;
struct bio {int cmd_type; } ;
struct TYPE_2__ {int queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct request* FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int ,TYPE_1__*,struct request*,int) ;
 struct request* FUNC_5 (int ,struct request*,int ) ;
 int FUNC_6 (struct request*) ;

__attribute__((used)) static int FUNC_7(struct gendisk *VAR_3, char *VAR_4)
{
 struct virtio_blk *VAR_5 = VAR_3->private_data;
 struct request *VAR_6;
 struct bio *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_5->disk->queue, VAR_4, VAR_2,
      VAR_0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = FUNC_5(VAR_5->disk->queue, VAR_7, VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_3(VAR_7);
  return FUNC_1(VAR_6);
 }

 VAR_6->cmd_type = VAR_1;
 VAR_8 = FUNC_4(VAR_5->disk->queue, VAR_5->disk, VAR_6, 0);
 FUNC_6(VAR_6);

 return VAR_8;
}
