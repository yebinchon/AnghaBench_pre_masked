
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {scalar_t__ type; TYPE_1__* ops; int stream; scalar_t__ streaming; } ;
struct v4l2_requestbuffers {int count; scalar_t__ type; int memory; } ;
struct TYPE_2__ {int (* buf_setup ) (struct videobuf_queue*,unsigned int*,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct videobuf_queue*,unsigned int,unsigned int,int ) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct videobuf_queue*,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct videobuf_queue*) ;
 int FUNC_6 (struct videobuf_queue*) ;

int FUNC_7(struct videobuf_queue *VAR_7,
   struct v4l2_requestbuffers *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 if (VAR_8->count < 1) {
  FUNC_2(1, "reqbufs: count invalid (%d)\n", VAR_8->count);
  return -VAR_1;
 }

 if (VAR_8->memory != VAR_3 &&
     VAR_8->memory != VAR_5 &&
     VAR_8->memory != VAR_4) {
  FUNC_2(1, "reqbufs: memory type invalid\n");
  return -VAR_1;
 }

 FUNC_5(VAR_7);
 if (VAR_8->type != VAR_7->type) {
  FUNC_2(1, "reqbufs: queue type invalid\n");
  VAR_11 = -VAR_1;
  goto done;
 }

 if (VAR_7->streaming) {
  FUNC_2(1, "reqbufs: streaming already exists\n");
  VAR_11 = -VAR_0;
  goto done;
 }
 if (!FUNC_3(&VAR_7->stream)) {
  FUNC_2(1, "reqbufs: stream running\n");
  VAR_11 = -VAR_0;
  goto done;
 }

 VAR_10 = VAR_8->count;
 if (VAR_10 > VAR_6)
  VAR_10 = VAR_6;
 VAR_9 = 0;
 VAR_7->ops->buf_setup(VAR_7, &VAR_10, &VAR_9);
 FUNC_2(1, "reqbufs: bufs=%d, size=0x%x [%u pages total]\n",
  VAR_10, VAR_9,
  (unsigned int)((VAR_10 * FUNC_0(VAR_9)) >> VAR_2));

 VAR_11 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_8->memory);
 if (VAR_11 < 0) {
  FUNC_2(1, "reqbufs: mmap setup returned %d\n", VAR_11);
  goto done;
 }

 VAR_8->count = VAR_11;
 VAR_11 = 0;

 done:
 FUNC_6(VAR_7);
 return VAR_11;
}
