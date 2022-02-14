
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cnic_ops {int (* cnic_handler ) (int ,int *) ;} ;
struct bnx2x {int cnic_data; int cnic_ops; int panic; int igu_dsb_id; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct bnx2x*) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 struct cnic_ops* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;

irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct bnx2x *VAR_6 = FUNC_3(VAR_5);

 FUNC_1(VAR_6, VAR_6->igu_dsb_id, VAR_2, 0,
       VAR_0, 0);






 if (FUNC_0(VAR_6)) {
  struct cnic_ops *VAR_7;

  FUNC_5();
  VAR_7 = FUNC_4(VAR_6->cnic_ops);
  if (VAR_7)
   VAR_7->cnic_handler(VAR_6->cnic_data, ((void*)0));
  FUNC_6();
 }




 FUNC_2(VAR_6);

 return VAR_1;
}
