
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_2__* s_root; } ;
struct TYPE_4__ {char name_check; } ;
struct TYPE_6__ {TYPE_1__ options; } ;
struct TYPE_5__ {int * d_op; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,void*,int,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_2, 1);
 if (VAR_6)
  return VAR_6;

 if (FUNC_0(VAR_3)->options.name_check != 's')
  VAR_3->s_root->d_op = &VAR_0;
 else
  VAR_3->s_root->d_op = &VAR_1;

 return 0;
}
