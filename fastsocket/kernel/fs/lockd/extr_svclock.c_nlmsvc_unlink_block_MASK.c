
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nlm_block {TYPE_4__* b_call; TYPE_1__* b_file; } ;
struct TYPE_6__ {int fl; } ;
struct TYPE_7__ {TYPE_2__ lock; } ;
struct TYPE_8__ {TYPE_3__ a_args; } ;
struct TYPE_5__ {int f_file; } ;


 int FUNC_0 (char*,struct nlm_block*) ;
 int FUNC_1 (struct nlm_block*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nlm_block *VAR_0)
{
 int VAR_1;
 FUNC_0("lockd: unlinking block %p...\n", VAR_0);


 VAR_1 = FUNC_2(VAR_0->b_file->f_file, &VAR_0->b_call->a_args.lock.fl);
 FUNC_1(VAR_0);
 return VAR_1;
}
