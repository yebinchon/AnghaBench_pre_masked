
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_dev {int serial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct sg_io_hdr*,int *,int) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nvme_ns *VAR_4,
     struct sg_io_hdr *VAR_5, u8 *VAR_6,
     int VAR_7)
{
 struct nvme_dev *VAR_8 = VAR_4->dev;
 int VAR_9 = VAR_2;
 int VAR_10;

 FUNC_0(VAR_6, 0, VAR_3);
 VAR_6[1] = VAR_1;
 VAR_6[3] = VAR_0;
 FUNC_3(&VAR_6[4], VAR_8->serial, VAR_0);

 VAR_10 = FUNC_1(VAR_7, VAR_3);
 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_10);

 return VAR_9;
}
