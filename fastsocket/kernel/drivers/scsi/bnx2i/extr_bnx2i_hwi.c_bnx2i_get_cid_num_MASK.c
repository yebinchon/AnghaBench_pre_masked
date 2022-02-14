
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnx2i_endpoint {int ep_cid; TYPE_1__* hba; } ;
struct TYPE_2__ {int cnic_dev_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static u32 FUNC_2(struct bnx2i_endpoint *VAR_1)
{
 u32 VAR_2;

 if (FUNC_1(VAR_0, &VAR_1->hba->cnic_dev_type))
  VAR_2 = VAR_1->ep_cid;
 else
  VAR_2 = FUNC_0(VAR_1->ep_cid);
 return VAR_2;
}
