
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct saa6588 {int buf_size; int last_blocknum; int work; scalar_t__ data_available_for_read; int read_queue; scalar_t__ rd_index; scalar_t__ wr_index; scalar_t__ block_count; int lock; struct v4l2_subdev sd; int * buffer; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct saa6588*) ;
 int * FUNC_3 (int,int ) ;
 struct saa6588* FUNC_4 (int,int ) ;
 int FUNC_5 (struct saa6588*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct saa6588 *VAR_7;
 struct v4l2_subdev *VAR_8;

 FUNC_9(VAR_5, "saa6588 found @ 0x%x (%s)\n",
   VAR_5->addr << 1, VAR_5->adapter->name);

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->buf_size = VAR_2 * 3;

 VAR_7->buffer = FUNC_3(VAR_7->buf_size, VAR_1);
 if (VAR_7->buffer == ((void*)0)) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }
 VAR_8 = &VAR_7->sd;
 FUNC_8(VAR_8, VAR_5, &VAR_3);
 FUNC_7(&VAR_7->lock);
 VAR_7->block_count = 0;
 VAR_7->wr_index = 0;
 VAR_7->rd_index = 0;
 VAR_7->last_blocknum = 0xff;
 FUNC_1(&VAR_7->read_queue);
 VAR_7->data_available_for_read = 0;

 FUNC_5(VAR_7);


 FUNC_0(&VAR_7->work, VAR_4);
 FUNC_6(&VAR_7->work, 0);
 return 0;
}
