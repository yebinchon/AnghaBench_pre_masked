
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct nvme_ns *VAR_5,
     struct sg_io_hdr *VAR_6, u8 *VAR_7,
     int VAR_8)
{
 int VAR_9 = VAR_4;

 if (VAR_8 < VAR_1)
  return VAR_3;

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_2;


 return VAR_9;
}
