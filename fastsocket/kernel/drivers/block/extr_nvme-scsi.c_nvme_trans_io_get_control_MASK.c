
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvme_trans_io_cdb {scalar_t__ fua; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct nvme_ns *VAR_1,
     struct nvme_trans_io_cdb *VAR_2)
{
 u16 VAR_3 = 0;



 if (VAR_2->fua > 0)
  VAR_3 |= VAR_0;

 return VAR_3;
}
