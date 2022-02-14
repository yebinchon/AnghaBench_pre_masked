
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {TYPE_3__* i_mapping; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int loff_t ;
struct TYPE_9__ {scalar_t__ time; int clientCanCacheRead; } ;
struct TYPE_8__ {scalar_t__ nrpages; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct file*,int,int) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static loff_t FUNC_5(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{

 if (VAR_3 == VAR_0) {
  int VAR_4;
  struct inode *VAR_5 = VAR_1->f_path.dentry->d_inode;





  if (!FUNC_0(VAR_5)->clientCanCacheRead && VAR_5->i_mapping &&
      VAR_5->i_mapping->nrpages != 0) {
   VAR_4 = FUNC_2(VAR_5->i_mapping);
   if (VAR_4) {
    FUNC_4(VAR_5->i_mapping, VAR_4);
    return VAR_4;
   }
  }





  FUNC_0(VAR_5)->time = 0;

  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 < 0)
   return (loff_t)VAR_4;
 }
 return FUNC_3(VAR_1, VAR_2, VAR_3);
}
