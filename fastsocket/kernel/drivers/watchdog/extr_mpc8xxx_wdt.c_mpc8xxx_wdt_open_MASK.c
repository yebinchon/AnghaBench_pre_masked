
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int swcrr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct file*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_12, struct file *VAR_13)
{
 u32 VAR_14 = VAR_1;
 if (FUNC_4(0, &VAR_10))
  return -VAR_0;


 if (VAR_5)
  FUNC_0(VAR_4);


 if (VAR_6)
  VAR_14 |= VAR_2;
 if (VAR_7)
  VAR_14 |= VAR_3;

 VAR_14 |= VAR_8 << 16;

 FUNC_3(&VAR_9->swcrr, VAR_14);

 FUNC_1(&VAR_11);

 return FUNC_2(VAR_12, VAR_13);
}
