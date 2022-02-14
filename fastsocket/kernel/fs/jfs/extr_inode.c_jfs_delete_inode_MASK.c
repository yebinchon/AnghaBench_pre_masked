
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; } ;
struct TYPE_2__ {scalar_t__ fileset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (char*,struct inode*) ;
 scalar_t__ FUNC_6 (int ,struct inode*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;

void FUNC_11(struct inode *VAR_2)
{
 FUNC_5("In jfs_delete_inode, inode = 0x%p", VAR_2);

 if (!FUNC_3(VAR_2) &&
     (FUNC_0(VAR_2)->fileset == VAR_1)) {
  FUNC_7(&VAR_2->i_data, 0);

  if (FUNC_6(VAR_0, VAR_2))
   FUNC_4(VAR_2);

  FUNC_2(VAR_2);




  FUNC_10(VAR_2);
  FUNC_9(VAR_2);
  FUNC_8(VAR_2);
 }

 FUNC_1(VAR_2);
}
