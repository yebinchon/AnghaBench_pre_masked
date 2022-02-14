
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {unsigned int flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_3, struct inode *VAR_4)
{
 unsigned int VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_0(VAR_4)->flags;

 if (VAR_5 & VAR_1) {
  FUNC_0(VAR_3)->flags &= ~VAR_0;
  FUNC_0(VAR_3)->flags |= VAR_1;
 } else if (VAR_5 & VAR_0) {
  FUNC_0(VAR_3)->flags &= ~VAR_1;
  FUNC_0(VAR_3)->flags |= VAR_0;
 }

 if (VAR_5 & VAR_2)
  FUNC_0(VAR_3)->flags |= VAR_2;

 FUNC_1(VAR_3);
}
