
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct sg_io_hdr {int cmd_len; int * cmdp; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (unsigned int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (unsigned int*,int *,int ) ;
 int FUNC_2 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_3 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_4 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_5 (struct nvme_ns*,struct sg_io_hdr*,int,unsigned int*) ;
 int FUNC_6 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_7 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_8 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_9 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_10 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_11 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_12 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_13 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_14 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_15 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_16 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;
 int FUNC_17 (struct nvme_ns*,struct sg_io_hdr*,unsigned int*) ;

__attribute__((used)) static int FUNC_18(struct nvme_ns *VAR_7, struct sg_io_hdr *VAR_8)
{
 u8 VAR_9[VAR_0];
 int VAR_10;
 unsigned int VAR_11;

 if (VAR_8->cmdp == ((void*)0))
  return -VAR_2;
 if (FUNC_1(VAR_9, VAR_8->cmdp, VAR_8->cmd_len))
  return -VAR_1;

 VAR_11 = VAR_9[0];

 switch (VAR_11) {
 case 143:
 case 146:
 case 145:
 case 144:
  VAR_10 = FUNC_5(VAR_7, VAR_8, 0, VAR_9);
  break;
 case 129:
 case 132:
 case 131:
 case 130:
  VAR_10 = FUNC_5(VAR_7, VAR_8, 1, VAR_9);
  break;
 case 152:
  VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_9);
  break;
 case 151:
  VAR_10 = FUNC_6(VAR_7, VAR_8, VAR_9);
  break;
 case 150:
 case 149:
  VAR_10 = FUNC_7(VAR_7, VAR_8, VAR_9);
  break;
 case 148:
 case 147:
  VAR_10 = FUNC_8(VAR_7, VAR_8, VAR_9);
  break;
 case 142:
  VAR_10 = FUNC_9(VAR_7, VAR_8, VAR_9);
  break;
 case 137:
  if (FUNC_0(VAR_9))
   VAR_10 = FUNC_9(VAR_7, VAR_8, VAR_9);
  else
   goto out;
  break;
 case 141:
  VAR_10 = FUNC_10(VAR_7, VAR_8, VAR_9);
  break;
 case 140:
  VAR_10 = FUNC_11(VAR_7, VAR_8, VAR_9);
  break;
 case 139:
 case 138:
  VAR_10 = FUNC_12(VAR_7, VAR_8, VAR_9);
  break;
 case 136:
  VAR_10 = FUNC_13(VAR_7, VAR_8, VAR_9);
  break;
 case 135:
  VAR_10 = FUNC_14(VAR_7, VAR_8, VAR_9);
  break;
 case 153:
  VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);
  break;
 case 134:
  VAR_10 = FUNC_15(VAR_7, VAR_8, VAR_9);
  break;
 case 128:
  VAR_10 = FUNC_17(VAR_7, VAR_8, VAR_9);
  break;
 case 133:
  VAR_10 = FUNC_16(VAR_7, VAR_8, VAR_9);
  break;
 default:
 out:
  VAR_10 = FUNC_2(VAR_8, VAR_4,
    VAR_3, VAR_6,
    VAR_5);
  break;
 }
 return VAR_10;
}
