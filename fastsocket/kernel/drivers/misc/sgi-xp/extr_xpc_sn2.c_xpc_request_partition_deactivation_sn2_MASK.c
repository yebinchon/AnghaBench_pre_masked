
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xpc_partition_sn2 {int activate_IRQ_phys_cpuid; int activate_IRQ_nasid; scalar_t__ remote_amos_page_pa; } ;
struct TYPE_2__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {TYPE_1__ sn; } ;
struct amo {int variable; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(struct xpc_partition *VAR_4)
{
 struct xpc_partition_sn2 *VAR_5 = &VAR_4->sn.sn2;
 unsigned long VAR_6;
 struct amo *VAR_7 = (struct amo *)FUNC_5(VAR_5->remote_amos_page_pa +
          (VAR_1 *
          sizeof(struct amo)));

 FUNC_8(VAR_6);


 FUNC_1(FUNC_4((u64)&VAR_7->variable), VAR_0,
    FUNC_0(VAR_2));







 (void)FUNC_9((u64 *)FUNC_2(FUNC_3(&VAR_7->
              variable),
           VAR_3));

 FUNC_7(VAR_6);





 FUNC_10(VAR_5->remote_amos_page_pa,
      FUNC_6(0),
      VAR_5->activate_IRQ_nasid,
      VAR_5->activate_IRQ_phys_cpuid);
}
