
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcp_session {int mutex; scalar_t__ resp_size; int * response; int bufsize; } ;
struct inode {int dummy; } ;
struct file {struct vmcp_session* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct vmcp_session* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_5, struct file *VAR_6)
{
 struct vmcp_session *VAR_7;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->bufsize = VAR_4;
 VAR_7->response = ((void*)0);
 VAR_7->resp_size = 0;
 FUNC_2(&VAR_7->mutex);
 VAR_6->private_data = VAR_7;
 return FUNC_3(VAR_5, VAR_6);
}
