
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct inode {scalar_t__ i_blocks; scalar_t__ i_size; int i_data; } ;
struct TYPE_9__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;
struct TYPE_10__ {int i_dtime; } ;


 TYPE_8__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (TYPE_1__*,struct inode*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct inode*) ;
 int FUNC_7 (TYPE_1__*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct inode*) ;
 TYPE_1__* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *,int ) ;

void FUNC_14 (struct inode * VAR_0)
{
 handle_t *VAR_1;

 FUNC_13(&VAR_0->i_data, 0);

 if (FUNC_10(VAR_0))
  goto no_delete;

 FUNC_12(VAR_0);
 VAR_1 = FUNC_11(VAR_0);
 if (FUNC_1(VAR_1)) {





  FUNC_7(((void*)0), VAR_0);
  goto no_delete;
 }

 if (FUNC_2(VAR_0))
  VAR_1->h_sync = 1;
 VAR_0->i_size = 0;
 if (VAR_0->i_blocks)
  FUNC_8(VAR_0);
 FUNC_7(VAR_1, VAR_0);
 FUNC_0(VAR_0)->i_dtime = FUNC_9();
 if (FUNC_6(VAR_1, VAR_0))

  FUNC_3(VAR_0);
 else
  FUNC_4(VAR_1, VAR_0);
 FUNC_5(VAR_1);
 return;
no_delete:
 FUNC_3(VAR_0);
}
