
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {size_t bytes_sent; } ;
struct port {int outvq_full; TYPE_1__ stats; int outvq_lock; struct virtqueue* out_vq; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct virtqueue*,struct scatterlist*,int,int ,void*) ;
 int FUNC_5 (struct virtqueue*,unsigned int*) ;
 int FUNC_6 (struct virtqueue*) ;

__attribute__((used)) static ssize_t FUNC_7(struct port *VAR_0, struct scatterlist *VAR_1,
         int VAR_2, size_t VAR_3,
         void *VAR_4, bool VAR_5)
{
 struct virtqueue *VAR_6;
 ssize_t VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9;

 VAR_6 = VAR_0->out_vq;

 FUNC_2(&VAR_0->outvq_lock, VAR_8);

 FUNC_1(VAR_0);

 VAR_7 = FUNC_4(VAR_6, VAR_1, VAR_2, 0, VAR_4);


 FUNC_6(VAR_6);

 if (VAR_7 < 0) {
  VAR_3 = 0;
  goto done;
 }

 if (VAR_7 == 0)
  VAR_0->outvq_full = 1;

 if (VAR_5)
  goto done;
 while (!FUNC_5(VAR_6, &VAR_9))
  FUNC_0();
done:
 FUNC_3(&VAR_0->outvq_lock, VAR_8);

 VAR_0->stats.bytes_sent += VAR_3;




 return VAR_3;
}
