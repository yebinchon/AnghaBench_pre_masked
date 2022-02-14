
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
 int FUNC_0 (struct sg_io_hdr*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct nvme_ns *VAR_4,
     struct sg_io_hdr *VAR_5,
     u8 *VAR_6)
{
 return FUNC_0(VAR_5, VAR_1,
    VAR_0, VAR_3,
    VAR_2);
}
