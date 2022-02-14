
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct inode {struct timespec i_ctime; int i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ i_disksize; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct timespec FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,scalar_t__) ;
 int FUNC_6 (struct timespec*,struct timespec*) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_2,
    int VAR_3, loff_t VAR_4, int VAR_5)
{
 struct timespec VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_2->i_sb);
  if (!FUNC_6(&VAR_2->i_ctime, &VAR_6))
   VAR_2->i_ctime = VAR_6;
 }




 if (!(VAR_3 & VAR_1)) {
  if (VAR_4 > FUNC_4(VAR_2))
   FUNC_5(VAR_2, VAR_4);
  if (VAR_4 > FUNC_0(VAR_2)->i_disksize)
   FUNC_3(VAR_2, VAR_4);
 } else {




  if (VAR_4 > FUNC_4(VAR_2))
   FUNC_2(VAR_2, VAR_0);
 }

}
