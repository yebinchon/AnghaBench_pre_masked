
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct file*,scalar_t__,int) ;
 int FUNC_2 (struct gfs2_holder*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;

__attribute__((used)) static loff_t FUNC_4(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_2->f_mapping->host);
 struct gfs2_holder VAR_6;
 loff_t VAR_7;

 if (VAR_4 == 2) {
  VAR_7 = FUNC_3(VAR_5->i_gl, VAR_1, VAR_0,
        &VAR_6);
  if (!VAR_7) {
   VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);
   FUNC_2(&VAR_6);
  }
 } else
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);

 return VAR_7;
}
