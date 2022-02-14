
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int i_ctx; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 return FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_1)->i_ctx);
}
