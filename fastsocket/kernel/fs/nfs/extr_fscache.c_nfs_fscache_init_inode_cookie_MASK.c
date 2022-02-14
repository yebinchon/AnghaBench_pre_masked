
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_2__ {int flags; int * fscache; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct inode *VAR_1)
{
 FUNC_0(VAR_1)->fscache = ((void*)0);
 if (FUNC_1(VAR_1->i_mode))
  FUNC_2(VAR_0, &FUNC_0(VAR_1)->flags);
}
