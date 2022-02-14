
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct iattr {int ia_valid; struct file* ia_file; int ia_size; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct iattr*,struct file*) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static void FUNC_2(struct file *VAR_2)
{
 struct inode *VAR_3 = VAR_2->f_mapping->host;
 struct iattr VAR_4;

 VAR_4.ia_valid = VAR_1;
 VAR_4.ia_size = FUNC_1(VAR_3);

 VAR_4.ia_file = VAR_2;
 VAR_4.ia_valid |= VAR_0;

 FUNC_0(VAR_3, &VAR_4, VAR_2);
}
