
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_4__ {int jinode; } ;
struct TYPE_3__ {int s_journal; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 FUNC_3(VAR_0);
 if (FUNC_1(VAR_0))
  FUNC_4(FUNC_2(VAR_0->i_sb)->s_journal,
           &FUNC_0(VAR_0)->jinode);
}
