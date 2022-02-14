
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__ i_blocks; scalar_t__ i_size; int i_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_dtime; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (struct inode*,scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,struct inode*) ;
 int FUNC_15 (int *,struct inode*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int ,char*,int) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (struct inode*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *,int ) ;

void FUNC_25(struct inode *VAR_0)
{
 handle_t *VAR_1;
 int VAR_2;

 if (FUNC_16(VAR_0))
  FUNC_6(VAR_0, 0);
 FUNC_24(&VAR_0->i_data, 0);

 if (FUNC_21(VAR_0))
  goto no_delete;





 FUNC_23(VAR_0->i_sb);
 VAR_1 = FUNC_12(VAR_0, FUNC_4(VAR_0)+3);
 if (FUNC_1(VAR_1)) {
  FUNC_17(VAR_0->i_sb, FUNC_3(VAR_1));





  FUNC_15(((void*)0), VAR_0);
  FUNC_22(VAR_0->i_sb);
  goto no_delete;
 }

 if (FUNC_2(VAR_0))
  FUNC_9(VAR_1);
 VAR_0->i_size = 0;
 VAR_2 = FUNC_14(VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_19(VAR_0->i_sb,
        "couldn't mark inode dirty (err %d)", VAR_2);
  goto stop_handle;
 }
 if (VAR_0->i_blocks)
  FUNC_18(VAR_0);







 if (!FUNC_8(VAR_1, 3)) {
  VAR_2 = FUNC_10(VAR_1, 3);
  if (VAR_2 > 0)
   VAR_2 = FUNC_11(VAR_1, 3);
  if (VAR_2 != 0) {
   FUNC_19(VAR_0->i_sb,
         "couldn't extend journal (err %d)", VAR_2);
  stop_handle:
   FUNC_13(VAR_1);
   FUNC_22(VAR_0->i_sb);
   goto no_delete;
  }
 }
 FUNC_15(VAR_1, VAR_0);
 FUNC_0(VAR_0)->i_dtime = FUNC_20();
 if (FUNC_14(VAR_1, VAR_0))

  FUNC_5(VAR_0);
 else
  FUNC_7(VAR_1, VAR_0);
 FUNC_13(VAR_1);
 FUNC_22(VAR_0->i_sb);
 return;
no_delete:
 FUNC_5(VAR_0);
}
