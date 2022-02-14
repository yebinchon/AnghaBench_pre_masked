
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; scalar_t__ for_background; scalar_t__ nonblocking; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct inode*,struct writeback_control*) ;
 int FUNC_2 (struct inode*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct inode *VAR_2, struct writeback_control *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 >= 0 && FUNC_3(VAR_0, &FUNC_0(VAR_2)->flags)) {
  int VAR_5;
  bool VAR_6 = 1;

  if (VAR_3->sync_mode == VAR_1 || VAR_3->nonblocking ||
      VAR_3->for_background)
   VAR_6 = 0;

  VAR_5 = FUNC_2(VAR_2, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return VAR_4;
}
