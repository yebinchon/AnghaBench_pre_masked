
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxfs_fsh {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 struct vxfs_fsh* FUNC_1 (int,int ) ;
 int FUNC_2 (struct vxfs_fsh*,int ,int) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct inode*,int) ;

__attribute__((used)) static struct vxfs_fsh *
FUNC_5(struct inode *VAR_1, int VAR_2)
{
 struct buffer_head *VAR_3;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3) {
  struct vxfs_fsh *VAR_4;

  if (!(VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0)))
   goto out;
  FUNC_2(VAR_4, VAR_3->b_data, sizeof(*VAR_4));

  FUNC_3(VAR_3);
  return (VAR_4);
 }
out:
 FUNC_0(VAR_3);
 return ((void*)0);
}
