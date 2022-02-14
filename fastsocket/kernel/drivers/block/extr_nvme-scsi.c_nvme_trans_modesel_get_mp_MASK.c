
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nvme_dev*,int ,unsigned int,int ,int *) ;
 int FUNC_1 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_3(struct nvme_ns *VAR_9, struct sg_io_hdr *VAR_10,
     u8 *VAR_11, u8 VAR_12)
{
 int VAR_13 = VAR_8;
 int VAR_14;
 struct nvme_dev *VAR_15 = VAR_9->dev;
 unsigned VAR_16;

 switch (VAR_12) {
 case 130:
  VAR_16 = ((VAR_11[2] & VAR_0) ? 1 : 0);
  VAR_14 = FUNC_0(VAR_15, VAR_2, VAR_16,
         0, ((void*)0));
  VAR_13 = FUNC_2(VAR_10, VAR_14);
  if (VAR_13)
   break;
  if (VAR_14) {
   VAR_13 = VAR_14;
   break;
  }
  break;
 case 129:
  break;
 case 128:

  if ((VAR_11[2] & 0x01) != 0 || (VAR_11[3] & 0x0F) != 0) {
   VAR_13 = FUNC_1(VAR_10,
      VAR_3,
      VAR_1,
      VAR_6,
      VAR_4);
   if (!VAR_13)
    VAR_13 = VAR_7;
   break;
  }
  break;
 default:
  VAR_13 = FUNC_1(VAR_10, VAR_3,
     VAR_1, VAR_5,
     VAR_4);
  if (!VAR_13)
   VAR_13 = VAR_7;
  break;
 }

 return VAR_13;
}
