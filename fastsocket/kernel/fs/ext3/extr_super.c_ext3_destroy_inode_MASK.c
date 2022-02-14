
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext3_inode_info {int dummy; } ;
struct TYPE_5__ {int i_orphan; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int,int,TYPE_1__*,int,int) ;
 int FUNC_5 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_3)
{
 if (!FUNC_3(&(FUNC_0(VAR_3)->i_orphan))) {
  FUNC_5("EXT3 Inode %p: orphan list check failed!\n",
   FUNC_0(VAR_3));
  FUNC_4(VAR_1, "", VAR_0, 16, 4,
    FUNC_0(VAR_3), sizeof(struct ext3_inode_info),
    0);
  FUNC_1();
 }
 FUNC_2(VAR_2, FUNC_0(VAR_3));
}
