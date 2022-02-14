
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct nvme_queue* FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_command*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (struct nvme_queue*,struct nvme_command*,int *,int ) ;
 int FUNC_4 (struct sg_io_hdr*,int) ;
 int FUNC_5 (struct nvme_queue*) ;

__attribute__((used)) static int FUNC_6(struct nvme_ns *VAR_3,
     struct sg_io_hdr *VAR_4, u8 *VAR_5)
{
 int VAR_6 = VAR_1;
 int VAR_7;
 struct nvme_command VAR_8;
 struct nvme_queue *VAR_9;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.common.opcode = VAR_2;
 VAR_8.common.nsid = FUNC_0(VAR_3->ns_id);

 VAR_9 = FUNC_1(VAR_3->dev);
 FUNC_5(VAR_9);
 VAR_7 = FUNC_3(VAR_9, &VAR_8, ((void*)0), VAR_0);

 VAR_6 = FUNC_4(VAR_4, VAR_7);
 if (VAR_6)
  goto out;
 if (VAR_7)
  VAR_6 = VAR_7;

 out:
 return VAR_6;
}
