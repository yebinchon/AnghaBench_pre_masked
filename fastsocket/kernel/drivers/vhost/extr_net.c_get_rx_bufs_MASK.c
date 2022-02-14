
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_used_elem {unsigned int id; scalar_t__ len; } ;
struct vhost_virtqueue {unsigned int num; scalar_t__ iov; int dev; } ;
struct vhost_log {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vhost_virtqueue*,int) ;
 int FUNC_4 (int ,struct vhost_virtqueue*,scalar_t__,scalar_t__,unsigned int*,unsigned int*,struct vhost_log*,unsigned int*) ;
 int FUNC_5 (struct vhost_virtqueue*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct vhost_virtqueue *VAR_3,
         struct vring_used_elem *VAR_4,
         int VAR_5,
         unsigned *VAR_6,
         struct vhost_log *VAR_7,
         unsigned *VAR_8,
         unsigned int VAR_9)
{
 unsigned int VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 unsigned VAR_14;
 int VAR_15, VAR_16 = 0;

 while (VAR_5 > 0 && VAR_13 < VAR_9) {
  if (FUNC_2(VAR_12 >= VAR_2)) {
   VAR_15 = -VAR_1;
   goto err;
  }
  VAR_15 = FUNC_4(VAR_3->dev, VAR_3, VAR_3->iov + VAR_12,
          FUNC_0(VAR_3->iov) - VAR_12, &VAR_10,
          &VAR_11, VAR_7, VAR_8);
  if (FUNC_2(VAR_15 < 0))
   goto err;

  VAR_14 = VAR_15;
  if (VAR_14 == VAR_3->num) {
   VAR_15 = 0;
   goto err;
  }
  if (FUNC_2(VAR_10 || VAR_11 <= 0)) {
   FUNC_5(VAR_3, "unexpected descriptor format for RX: "
    "out %d, in %d\n", VAR_10, VAR_11);
   VAR_15 = -VAR_0;
   goto err;
  }
  if (FUNC_2(VAR_7)) {
   VAR_16 += *VAR_8;
   VAR_7 += *VAR_8;
  }
  VAR_4[VAR_13].id = VAR_14;
  VAR_4[VAR_13].len = FUNC_1(VAR_3->iov + VAR_12, VAR_11);
  VAR_5 -= VAR_4[VAR_13].len;
  ++VAR_13;
  VAR_12 += VAR_11;
 }
 VAR_4[VAR_13 - 1].len += VAR_5;
 *VAR_6 = VAR_12;
 if (FUNC_2(VAR_7))
  *VAR_8 = VAR_16;


 if (FUNC_2(VAR_5 > 0)) {
  VAR_15 = VAR_2 + 1;
  goto err;
 }
 return VAR_13;
err:
 FUNC_3(VAR_3, VAR_13);
 return VAR_15;
}
