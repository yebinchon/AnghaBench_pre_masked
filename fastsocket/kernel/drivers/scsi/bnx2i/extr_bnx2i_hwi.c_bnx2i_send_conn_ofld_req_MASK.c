
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int cnic_dev_type; } ;
struct bnx2i_endpoint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2i_hba*,struct bnx2i_endpoint*) ;
 int FUNC_1 (struct bnx2i_hba*,struct bnx2i_endpoint*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct bnx2i_hba *VAR_1, struct bnx2i_endpoint *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_0, &VAR_1->cnic_dev_type))
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
