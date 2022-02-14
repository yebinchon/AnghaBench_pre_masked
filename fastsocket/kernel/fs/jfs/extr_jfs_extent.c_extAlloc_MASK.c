
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flag; } ;
typedef TYPE_1__ xad_t ;
struct jfs_sb_info {int l2nbperpage; } ;
struct inode {int i_sb; } ;
typedef int s64 ;
struct TYPE_11__ {int commit_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 TYPE_9__* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*,int,int) ;
 int FUNC_8 (struct inode*,int,int*,int*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (int ,struct inode*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct inode*,int) ;
 int FUNC_18 (struct inode*,int) ;
 int FUNC_19 (int ,struct inode*,int,int,int ) ;
 int FUNC_20 (int ,struct inode*,int,int,int,int*,int ) ;

int
FUNC_21(struct inode *VAR_4, s64 VAR_5, s64 VAR_6, xad_t * VAR_7, bool VAR_8)
{
 struct jfs_sb_info *VAR_9 = FUNC_2(VAR_4->i_sb);
 s64 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 int VAR_15;
 int VAR_16;


 FUNC_16(VAR_4->i_sb);


 FUNC_12(&FUNC_1(VAR_4)->commit_mutex);


 if (VAR_5 > VAR_2)
  VAR_5 = VAR_2;


 VAR_12 = VAR_6 << VAR_9->l2nbperpage;


 if ((VAR_13 = FUNC_6(VAR_7))) {

  VAR_10 = FUNC_10(VAR_7);
  if (FUNC_14(VAR_7) + VAR_10 == VAR_12 &&
      VAR_8 == ((VAR_7->flag & VAR_3) ? 1 : 0))
   VAR_14 = VAR_13 + VAR_10;


  VAR_13 += (VAR_10 - 1);
 }
 VAR_10 = VAR_5;
 if ((VAR_15 = FUNC_8(VAR_4, VAR_13 ? VAR_13 : FUNC_0(VAR_4), &VAR_10, &VAR_11))) {
  FUNC_13(&FUNC_1(VAR_4)->commit_mutex);
  return (VAR_15);
 }


 if (FUNC_17(VAR_4, VAR_10)) {
  FUNC_7(VAR_4, VAR_11, (s64) VAR_10);
  FUNC_13(&FUNC_1(VAR_4)->commit_mutex);
  return -VAR_1;
 }


 VAR_16 = VAR_8 ? VAR_3 : 0;





 if (VAR_14 && VAR_14 == VAR_11)
  VAR_15 = FUNC_19(0, VAR_4, VAR_12, (int) VAR_10, 0);
 else
  VAR_15 = FUNC_20(0, VAR_4, VAR_16, VAR_12, (int) VAR_10, &VAR_11, 0);




 if (VAR_15) {
  FUNC_7(VAR_4, VAR_11, VAR_10);
  FUNC_18(VAR_4, VAR_10);
  FUNC_13(&FUNC_1(VAR_4)->commit_mutex);
  return (VAR_15);
 }


 FUNC_3(VAR_7, VAR_11);
 FUNC_4(VAR_7, VAR_10);
 FUNC_5(VAR_7, VAR_12);
 VAR_7->flag = VAR_16;

 FUNC_11(VAR_4);

 FUNC_13(&FUNC_1(VAR_4)->commit_mutex);





 if (FUNC_15(VAR_0,VAR_4))
  FUNC_9(VAR_4, 0);

 return (0);
}
