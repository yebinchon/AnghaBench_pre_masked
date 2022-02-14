
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int (* ack_int ) (struct cnic_dev*) ;} ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_dev*) ;
 int FUNC_1 (struct cnic_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct cnic_dev *VAR_3 = VAR_2;
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;

 if (VAR_4->ack_int)
  VAR_4->ack_int(VAR_3);

 FUNC_0(VAR_3);

 return VAR_0;
}
