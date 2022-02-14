
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,void*,size_t,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,char**,void**,size_t*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_2, struct gfs2_inode *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 void *VAR_6;
 char *VAR_7;

 VAR_4 = FUNC_2(&VAR_3->i_inode, &VAR_2->i_inode,
        &VAR_7, &VAR_6, &VAR_5);

 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   return 0;
  return VAR_4;
 }

 VAR_4 = FUNC_0(&VAR_3->i_inode, VAR_1, VAR_7, VAR_6, VAR_5, 0);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);

 return VAR_4;
}
