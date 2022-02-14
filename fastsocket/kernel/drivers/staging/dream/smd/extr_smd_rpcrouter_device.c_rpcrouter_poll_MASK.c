
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct msm_rpc_endpoint {int read_q; int wait_q; } ;
struct file {scalar_t__ private_data; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_1,
       struct poll_table_struct *VAR_2)
{
 struct msm_rpc_endpoint *VAR_3;
 unsigned VAR_4 = 0;
 VAR_3 = (struct msm_rpc_endpoint *) VAR_1->private_data;





 if (!FUNC_0(&VAR_3->read_q))
  VAR_4 |= VAR_0;

 if (!VAR_4) {
  FUNC_1(VAR_1, &VAR_3->wait_q, VAR_2);
  if (!FUNC_0(&VAR_3->read_q))
   VAR_4 |= VAR_0;
 }

 return VAR_4;
}
