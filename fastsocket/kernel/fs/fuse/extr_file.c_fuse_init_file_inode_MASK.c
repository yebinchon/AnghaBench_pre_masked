
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * a_ops; } ;
struct inode {TYPE_1__ i_data; int * i_fop; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct inode *VAR_2)
{
 VAR_2->i_fop = &VAR_1;
 VAR_2->i_data.a_ops = &VAR_0;
}
