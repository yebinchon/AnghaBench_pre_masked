
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcp_session {int bufsize; scalar_t__ response; } ;
struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmcp_session*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct vmcp_session *VAR_2;

 VAR_2 = (struct vmcp_session *)VAR_1->private_data;
 VAR_1->private_data = ((void*)0);
 FUNC_0((unsigned long)VAR_2->response, FUNC_1(VAR_2->bufsize));
 FUNC_2(VAR_2);
 return 0;
}
