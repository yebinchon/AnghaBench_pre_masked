
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flag; } ;
struct jfs_inode_info {int mode2; TYPE_1__ ea; int i_inline_ea; } ;
struct jfs_ea_list {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int flag; } ;
typedef TYPE_2__ dxd_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct jfs_inode_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct jfs_ea_list*,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct jfs_ea_list *VAR_4,
      int VAR_5, dxd_t * VAR_6)
{
 struct jfs_inode_info *VAR_7 = FUNC_3(VAR_3);





 if (VAR_4 && VAR_5 > sizeof (struct jfs_ea_list)) {
  FUNC_4(VAR_5 <= sizeof (VAR_7->i_inline_ea));





  if (!(VAR_7->mode2 & VAR_2) && !(VAR_7->ea.flag & VAR_0))
   return -VAR_1;

  FUNC_2(VAR_6, VAR_5);
  FUNC_1(VAR_6, 0);
  FUNC_0(VAR_6, 0);
  FUNC_5(VAR_7->i_inline_ea, VAR_4, VAR_5);
  VAR_6->flag = VAR_0;
  VAR_7->mode2 &= ~VAR_2;
 } else {
  VAR_6->flag = 0;
  FUNC_2(VAR_6, 0);
  FUNC_1(VAR_6, 0);
  FUNC_0(VAR_6, 0);


  if (VAR_7->ea.flag & VAR_0)
   VAR_7->mode2 |= VAR_2;
 }

 return 0;
}
