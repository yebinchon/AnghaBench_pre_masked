
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_v4 {int dout_xfer_len; unsigned int din_xfer_len; scalar_t__ din_xferp; scalar_t__ dout_xferp; } ;
struct bsg_class_device {int class_dev; } ;
struct request_queue {int queue_flags; struct bsg_class_device bsg_dev; } ;
struct request {scalar_t__ cmd; scalar_t__ __cmd; int bio; scalar_t__ sense_len; int * sense; int cmd_type; struct request* next_rq; } ;
struct bsg_device {struct request_queue* queue; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct request* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct request_queue*,struct request*,struct sg_io_v4*,struct bsg_device*,int ) ;
 struct request* FUNC_2 (struct request_queue*,int,int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request_queue*,struct request*,int *,void*,unsigned int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct request_queue*,struct sg_io_v4*,int*) ;
 int FUNC_7 (char*,unsigned long long,int,unsigned long long,unsigned int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static struct request *
FUNC_10(struct bsg_device *VAR_7, struct sg_io_v4 *VAR_8, fmode_t VAR_9,
     u8 *VAR_10)
{
 struct request_queue *VAR_11 = VAR_7->queue;
 struct request *VAR_12, *VAR_13 = ((void*)0);
 int VAR_14, VAR_15;
 unsigned int VAR_16;
 void *VAR_17 = ((void*)0);
 struct bsg_class_device *VAR_18 = &VAR_11->bsg_dev;





 if (!VAR_18->class_dev)
  return FUNC_0(-VAR_1);

 FUNC_7("map hdr %llx/%u %llx/%u\n", (unsigned long long) VAR_8->dout_xferp,
  VAR_8->dout_xfer_len, (unsigned long long) VAR_8->din_xferp,
  VAR_8->din_xfer_len);

 VAR_14 = FUNC_6(VAR_11, VAR_8, &VAR_15);
 if (VAR_14)
  return FUNC_0(VAR_14);




 VAR_12 = FUNC_2(VAR_11, VAR_15, VAR_3);
 if (!VAR_12)
  return FUNC_0(-VAR_0);
 VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_8, VAR_7, VAR_9);
 if (VAR_14)
  goto out;

 if (VAR_15 == VAR_6 && VAR_8->din_xfer_len) {
  if (!FUNC_9(VAR_4, &VAR_11->queue_flags)) {
   VAR_14 = -VAR_2;
   goto out;
  }

  VAR_13 = FUNC_2(VAR_11, VAR_5, VAR_3);
  if (!VAR_13) {
   VAR_14 = -VAR_0;
   goto out;
  }
  VAR_12->next_rq = VAR_13;
  VAR_13->cmd_type = VAR_12->cmd_type;

  VAR_17 = (void*)(unsigned long)VAR_8->din_xferp;
  VAR_14 = FUNC_4(VAR_11, VAR_13, ((void*)0), VAR_17,
           VAR_8->din_xfer_len, VAR_3);
  if (VAR_14)
   goto out;
 }

 if (VAR_8->dout_xfer_len) {
  VAR_16 = VAR_8->dout_xfer_len;
  VAR_17 = (void*)(unsigned long)VAR_8->dout_xferp;
 } else if (VAR_8->din_xfer_len) {
  VAR_16 = VAR_8->din_xfer_len;
  VAR_17 = (void*)(unsigned long)VAR_8->din_xferp;
 } else
  VAR_16 = 0;

 if (VAR_16) {
  VAR_14 = FUNC_4(VAR_11, VAR_12, ((void*)0), VAR_17, VAR_16,
          VAR_3);
  if (VAR_14)
   goto out;
 }

 VAR_12->sense = VAR_10;
 VAR_12->sense_len = 0;

 return VAR_12;
out:
 if (VAR_12->cmd != VAR_12->__cmd)
  FUNC_8(VAR_12->cmd);
 FUNC_3(VAR_12);
 if (VAR_13) {
  FUNC_5(VAR_13->bio);
  FUNC_3(VAR_13);
 }
 return FUNC_0(VAR_14);
}
