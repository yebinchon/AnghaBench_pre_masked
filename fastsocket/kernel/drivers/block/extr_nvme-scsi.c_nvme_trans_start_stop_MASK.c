
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_queue {int dummy; } ;
struct nvme_ns {int dev; int ns_id; } ;
struct TYPE_2__ {int nsid; int opcode; } ;
struct nvme_command {TYPE_1__ common; } ;
typedef int c ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 struct nvme_queue* FUNC_2 (int ) ;
 int FUNC_3 (struct nvme_command*,int ,int) ;
 int VAR_17 ;
 int FUNC_4 (struct nvme_queue*,struct nvme_command*,int *,int ) ;
 int FUNC_5 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_6 (struct nvme_ns*,struct sg_io_hdr*,int,int,int) ;
 int FUNC_7 (struct sg_io_hdr*,int) ;
 int FUNC_8 (struct nvme_queue*) ;

__attribute__((used)) static int FUNC_9(struct nvme_ns *VAR_18, struct sg_io_hdr *VAR_19,
       u8 *VAR_20)
{
 int VAR_21 = VAR_6;
 int VAR_22;
 struct nvme_queue *VAR_23;
 struct nvme_command VAR_24;
 u8 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;

 VAR_25 = FUNC_0(VAR_20, VAR_8);
 VAR_26 = FUNC_0(VAR_20, VAR_13);
 VAR_27 = FUNC_0(VAR_20, VAR_14);
 VAR_28 = FUNC_0(VAR_20, VAR_10);
 VAR_29 = FUNC_0(VAR_20, VAR_16);

 VAR_25 &= VAR_7;
 VAR_26 &= VAR_12;
 VAR_27 = (VAR_27 & VAR_11) >> VAR_1;
 VAR_28 &= VAR_9;
 VAR_29 &= VAR_15;

 if (VAR_25 != 0) {
  VAR_21 = FUNC_5(VAR_19, VAR_3,
     VAR_0, VAR_5,
     VAR_4);
 } else {
  if (VAR_28 == 0) {

   FUNC_3(&VAR_24, 0, sizeof(VAR_24));
   VAR_24.common.opcode = VAR_17;
   VAR_24.common.nsid = FUNC_1(VAR_18->ns_id);

   VAR_23 = FUNC_2(VAR_18->dev);
   FUNC_8(VAR_23);
   VAR_22 = FUNC_4(VAR_23, &VAR_24, ((void*)0), VAR_2);

   VAR_21 = FUNC_7(VAR_19, VAR_22);
   if (VAR_21)
    goto out;
   if (VAR_22) {
    VAR_21 = VAR_22;
    goto out;
   }
  }

  VAR_21 = FUNC_6(VAR_18, VAR_19, VAR_27, VAR_26, VAR_29);
 }

 out:
 return VAR_21;
}
