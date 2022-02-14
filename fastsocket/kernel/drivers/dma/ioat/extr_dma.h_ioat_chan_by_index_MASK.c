
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_device {struct ioat_chan_common** idx; } ;
struct ioat_chan_common {int dummy; } ;



__attribute__((used)) static inline struct ioat_chan_common *
FUNC_0(struct ioatdma_device *VAR_0, int VAR_1)
{
 return VAR_0->idx[VAR_1];
}
