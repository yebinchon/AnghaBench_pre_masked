
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int i_sb; } ;
typedef int journal_t ;
struct TYPE_8__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;
struct TYPE_9__ {int i_flags; } ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (struct inode*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct inode *VAR_2, int VAR_3)
{
 journal_t *VAR_4;
 handle_t *VAR_5;
 int VAR_6;
 VAR_4 = FUNC_1(VAR_2);
 if (FUNC_9(VAR_4))
  return -VAR_0;

 FUNC_11(VAR_4);
 FUNC_10(VAR_4);
 if (VAR_3)
  FUNC_0(VAR_2)->i_flags |= VAR_1;
 else
  FUNC_0(VAR_2)->i_flags &= ~VAR_1;
 FUNC_7(VAR_2);

 FUNC_12(VAR_4);



 VAR_5 = FUNC_4(VAR_2, 1);
 if (FUNC_2(VAR_5))
  return FUNC_3(VAR_5);

 VAR_6 = FUNC_6(VAR_5, VAR_2);
 VAR_5->h_sync = 1;
 FUNC_5(VAR_5);
 FUNC_8(VAR_2->i_sb, VAR_6);

 return VAR_6;
}
