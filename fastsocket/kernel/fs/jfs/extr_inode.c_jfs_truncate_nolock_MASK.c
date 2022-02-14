
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct inode {int i_ctime; int i_mtime; int i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int commit_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,struct inode*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int,struct inode**,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,struct inode*,scalar_t__,int) ;

void FUNC_10(struct inode *VAR_5, loff_t VAR_6)
{
 loff_t VAR_7;
 tid_t VAR_8;

 FUNC_0(VAR_6 >= 0);

 if (FUNC_5(VAR_0, VAR_5)) {
  FUNC_9(0, VAR_5, VAR_6, VAR_3);
  return;
 }

 do {
  VAR_8 = FUNC_6(VAR_5->i_sb, 0);







  FUNC_3(&FUNC_1(VAR_5)->commit_mutex);

  VAR_7 = FUNC_9(VAR_8, VAR_5, VAR_6,
         VAR_2 | VAR_1);
  if (VAR_7 < 0) {
   FUNC_8(VAR_8);
   FUNC_4(&FUNC_1(VAR_5)->commit_mutex);
   break;
  }

  VAR_5->i_mtime = VAR_5->i_ctime = VAR_4;
  FUNC_2(VAR_5);

  FUNC_7(VAR_8, 1, &VAR_5, 0);
  FUNC_8(VAR_8);
  FUNC_4(&FUNC_1(VAR_5)->commit_mutex);
 } while (VAR_7 > VAR_6);
}
