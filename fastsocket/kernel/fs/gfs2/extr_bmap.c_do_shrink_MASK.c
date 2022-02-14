
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct gfs2_inode {int dummy; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct gfs2_inode*) ;
 int FUNC_2 (struct gfs2_inode*,int ) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, u64 VAR_1, u64 VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 if (FUNC_1(VAR_3))
  return 0;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 == 0)
  VAR_4 = FUNC_3(VAR_3);

 return VAR_4;
}
