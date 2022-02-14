
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_dev {TYPE_1__* bar; } ;
struct TYPE_2__ {int csts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct nvme_ns *VAR_8,
     struct sg_io_hdr *VAR_9,
     u8 *VAR_10)
{
 int VAR_11 = VAR_7;
 struct nvme_dev *VAR_12 = VAR_8->dev;

 if (!(FUNC_1(&VAR_12->bar->csts) & VAR_2))
  VAR_11 = FUNC_0(VAR_9, VAR_3,
         VAR_0, VAR_6,
         VAR_5);
 else
  VAR_11 = FUNC_0(VAR_9, VAR_4, VAR_1, 0, 0);

 return VAR_11;
}
