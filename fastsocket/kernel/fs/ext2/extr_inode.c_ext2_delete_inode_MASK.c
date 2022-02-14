
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__ i_blocks; scalar_t__ i_size; int i_data; } ;
struct TYPE_2__ {int i_dtime; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;

void FUNC_12 (struct inode * VAR_0)
{
 FUNC_11(&VAR_0->i_data, 0);

 if (FUNC_7(VAR_0))
  goto no_delete;
 FUNC_10(VAR_0->i_sb);
 FUNC_0(VAR_0)->i_dtime = FUNC_5();
 FUNC_8(VAR_0);
 FUNC_1(VAR_0, FUNC_6(VAR_0));

 VAR_0->i_size = 0;
 if (VAR_0->i_blocks)
  FUNC_4 (VAR_0);
 FUNC_3 (VAR_0);
 FUNC_9(VAR_0->i_sb);

 return;
no_delete:
 FUNC_2(VAR_0);
}
