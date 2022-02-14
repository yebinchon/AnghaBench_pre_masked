
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
struct virtqueue {TYPE_2__ vring; TYPE_1__* dev; } ;
struct rng_info {int rfd; } ;
struct iovec {int dummy; } ;
struct TYPE_3__ {struct rng_info* priv; } ;


 int FUNC_0 (struct virtqueue*,unsigned int,unsigned int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct iovec*,unsigned int,int) ;
 int FUNC_4 (struct iovec*,unsigned int) ;
 int FUNC_5 (int ,struct iovec*,unsigned int) ;
 unsigned int FUNC_6 (struct virtqueue*,struct iovec*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_7(struct virtqueue *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 struct rng_info *VAR_6 = VAR_0->dev->priv;
 struct iovec VAR_7[VAR_0->vring.num];


 VAR_2 = FUNC_6(VAR_0, VAR_7, &VAR_4, &VAR_3);
 if (VAR_4)
  FUNC_2(1, "Output buffers in rng?");





 while (!FUNC_4(VAR_7, VAR_3)) {
  VAR_1 = FUNC_5(VAR_6->rfd, VAR_7, VAR_3);
  if (VAR_1 <= 0)
   FUNC_1(1, "Read from /dev/random gave %i", VAR_1);
  FUNC_3(VAR_7, VAR_3, VAR_1);
  VAR_5 += VAR_1;
 }


 FUNC_0(VAR_0, VAR_2, VAR_5);
}
