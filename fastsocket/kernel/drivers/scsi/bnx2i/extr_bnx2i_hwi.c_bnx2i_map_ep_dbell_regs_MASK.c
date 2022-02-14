
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* ctx_base; } ;
struct bnx2i_endpoint {TYPE_1__ qp; TYPE_2__* hba; } ;
typedef int resource_size_t ;
struct TYPE_4__ {scalar_t__ mail_queue_access; int reg_base; int cnic_dev_type; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct bnx2i_endpoint*,int ) ;
 int FUNC_2 (struct bnx2i_endpoint*) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct bnx2i_endpoint *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 resource_size_t VAR_21;

 VAR_16 = FUNC_2(VAR_15);

 if (FUNC_5(VAR_4, &VAR_15->hba->cnic_dev_type)) {
  VAR_21 = FUNC_4(VAR_15->hba->pcidev,
           VAR_5);
  VAR_17 = VAR_1 * (VAR_16 & 0x1FFFF) +
     VAR_11;
  VAR_15->qp.ctx_base = FUNC_3(VAR_21 + VAR_17, 4);
  goto arm_cq;
 }

 if ((FUNC_5(VAR_3, &VAR_15->hba->cnic_dev_type)) &&
     (VAR_15->hba->mail_queue_access == VAR_2)) {
  VAR_20 = FUNC_0(VAR_15->hba, VAR_6);
  VAR_18 = VAR_20 & VAR_8;
  VAR_19 = (VAR_20 & VAR_7) >> 3;
  if (VAR_19)
   VAR_17 = VAR_10 + VAR_13 * VAR_14
      + VAR_0 *
      (((VAR_16 - VAR_18) / VAR_19) + 256);
  else
   VAR_17 = VAR_10 + (VAR_14 * VAR_16);
 } else

  VAR_17 = VAR_10 + (VAR_14 * VAR_16);

 VAR_15->qp.ctx_base = FUNC_3(VAR_15->hba->reg_base + VAR_17,
       VAR_14);
 if (!VAR_15->qp.ctx_base)
  return -VAR_12;

arm_cq:
 FUNC_1(VAR_15, VAR_9);
 return 0;
}
