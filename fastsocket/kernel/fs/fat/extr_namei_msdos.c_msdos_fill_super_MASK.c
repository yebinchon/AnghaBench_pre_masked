
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_root; int s_flags; } ;
struct TYPE_2__ {int * d_op; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,void*,int,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_2, 0);
 if (VAR_6)
  return VAR_6;

 VAR_3->s_flags |= VAR_0;
 VAR_3->s_root->d_op = &VAR_1;
 return 0;
}
