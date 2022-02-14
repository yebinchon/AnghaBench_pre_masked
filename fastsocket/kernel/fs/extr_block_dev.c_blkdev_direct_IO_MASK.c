
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct kiocb*,struct inode*,int ,struct iovec const*,int ,unsigned long,int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(int VAR_1, struct kiocb *VAR_2, const struct iovec *VAR_3,
   loff_t VAR_4, unsigned long VAR_5)
{
 struct file *VAR_6 = VAR_2->ki_filp;
 struct inode *VAR_7 = VAR_6->f_mapping->host;

 return FUNC_1(VAR_1, VAR_2, VAR_7, FUNC_0(VAR_7),
    VAR_3, VAR_4, VAR_5, VAR_0, ((void*)0));
}
