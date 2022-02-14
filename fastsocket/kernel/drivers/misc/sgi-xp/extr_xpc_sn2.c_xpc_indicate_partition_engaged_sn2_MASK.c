
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ remote_amos_page_pa; } ;
struct TYPE_4__ {TYPE_1__ sn2; } ;
struct xpc_partition {TYPE_2__ sn; } ;
struct amo {int variable; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(struct xpc_partition *VAR_4)
{
 unsigned long VAR_5;
 struct amo *VAR_6 = (struct amo *)FUNC_5(VAR_4->sn.sn2.remote_amos_page_pa +
          (VAR_1 *
          sizeof(struct amo)));

 FUNC_7(VAR_5);


 FUNC_1(FUNC_4((u64)&VAR_6->variable), VAR_0,
    FUNC_0(VAR_2));







 (void)FUNC_8((u64 *)FUNC_2(FUNC_3(&VAR_6->
              variable),
           VAR_3));

 FUNC_6(VAR_5);
}
