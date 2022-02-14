
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fl_ops; } ;
struct TYPE_5__ {TYPE_1__ fl; } ;
struct TYPE_6__ {TYPE_2__ lock; } ;
struct nlm_rqst {TYPE_3__ a_args; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nlm_rqst *VAR_0)
{
 FUNC_0(VAR_0->a_args.lock.fl.fl_ops != ((void*)0));
}
