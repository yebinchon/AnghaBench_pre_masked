
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_fh {struct vpfe_device* vpfe_dev; } ;
struct vpfe_device {int v4l2_dev; } ;
struct videobuf_queue {struct vpfe_fh* priv_data; } ;
struct TYPE_2__ {unsigned int device_bufsize; unsigned int min_numbuffers; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int *,char*,...) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_2,
    unsigned int *VAR_3,
    unsigned int *VAR_4)
{
 struct vpfe_fh *VAR_5 = VAR_2->priv_data;
 struct vpfe_device *VAR_6 = VAR_5->vpfe_dev;

 FUNC_0(1, VAR_1, &VAR_6->v4l2_dev, "vpfe_buffer_setup\n");
 *VAR_4 = VAR_0.device_bufsize;

 if (*VAR_3 < VAR_0.min_numbuffers)
  *VAR_3 = VAR_0.min_numbuffers;
 FUNC_0(1, VAR_1, &VAR_6->v4l2_dev,
  "count=%d, size=%d\n", *VAR_3, *VAR_4);
 return 0;
}
