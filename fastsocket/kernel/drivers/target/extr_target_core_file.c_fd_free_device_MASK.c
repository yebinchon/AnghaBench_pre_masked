
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct fd_dev {int * fd_file; } ;


 struct fd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct fd_dev*) ;

__attribute__((used)) static void FUNC_3(struct se_device *VAR_0)
{
 struct fd_dev *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->fd_file) {
  FUNC_1(VAR_1->fd_file, ((void*)0));
  VAR_1->fd_file = ((void*)0);
 }

 FUNC_2(VAR_1);
}
