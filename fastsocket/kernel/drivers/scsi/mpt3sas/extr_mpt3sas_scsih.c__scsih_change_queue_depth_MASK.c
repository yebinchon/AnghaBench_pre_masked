
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int inquiry_len; int queue_depth; int* inquiry; int scsi_level; int ordered_tags; int simple_tags; int tagged_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_device*,int) ;
 int FUNC_1 (struct scsi_device*,int) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct scsi_device *VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_7 == VAR_2 || VAR_7 == VAR_4)
  FUNC_0(VAR_5, VAR_6);
 else if (VAR_7 == VAR_3)
  FUNC_1(VAR_5, VAR_6);
 else
  return -VAR_0;

 if (VAR_5->inquiry_len > 7)
  FUNC_2(VAR_1, VAR_5, "qdepth(%d), tagged(%d), " "simple(%d), ordered(%d), scsi_level(%d), cmd_que(%d)\n",

  VAR_5->queue_depth, VAR_5->tagged_supported, VAR_5->simple_tags,
  VAR_5->ordered_tags, VAR_5->scsi_level,
  (VAR_5->inquiry[7] & 2) >> 1);

 return VAR_5->queue_depth;
}
