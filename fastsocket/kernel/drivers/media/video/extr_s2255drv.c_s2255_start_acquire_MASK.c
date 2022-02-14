
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s2255_dev {TYPE_4__* udev; } ;
struct TYPE_7__ {TYPE_2__* frame; } ;
struct TYPE_5__ {int v4l2_dev; } ;
struct s2255_channel {size_t idx; int last_frame; TYPE_3__ buffer; scalar_t__ cur_frame; scalar_t__ bad_payload; TYPE_1__ vdev; } ;
typedef scalar_t__ __le32 ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {scalar_t__ cur_size; scalar_t__ ulState; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,char*,size_t,int) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_4__*,unsigned char*,int) ;
 struct s2255_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct s2255_channel *VAR_6)
{
 unsigned char *VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 struct s2255_dev *VAR_11 = FUNC_6(VAR_6->vdev.v4l2_dev);
 VAR_9 = VAR_3[VAR_6->idx];
 VAR_7 = FUNC_4(512, VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(&VAR_11->udev->dev, "out of mem\n");
  return -VAR_1;
 }

 VAR_6->last_frame = -1;
 VAR_6->bad_payload = 0;
 VAR_6->cur_frame = 0;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_6->buffer.frame[VAR_10].ulState = 0;
  VAR_6->buffer.frame[VAR_10].cur_size = 0;
 }


 *(__le32 *) VAR_7 = VAR_4;
 *((__le32 *) VAR_7 + 1) = (__le32) FUNC_0(VAR_9);
 *((__le32 *) VAR_7 + 2) = VAR_0;
 VAR_8 = FUNC_5(VAR_11->udev, (unsigned char *)VAR_7, 512);
 if (VAR_8 != 0)
  FUNC_1(&VAR_11->udev->dev, "CMD_START error\n");

 FUNC_2(2, "start acquire exit[%d] %d \n", VAR_6->idx, VAR_8);
 FUNC_3(VAR_7);
 return 0;
}
