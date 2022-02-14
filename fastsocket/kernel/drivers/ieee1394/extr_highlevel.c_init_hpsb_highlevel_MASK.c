
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int start; int end; int host_list; int * op; int hl_list; } ;
struct TYPE_3__ {int host_list; scalar_t__ end; scalar_t__ start; int * op; int hl_list; } ;
struct hpsb_host {int addr_space; TYPE_2__ dummy_max_addr; TYPE_1__ dummy_zero_addr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct hpsb_host *VAR_1)
{
 FUNC_0(&VAR_1->dummy_zero_addr.host_list);
 FUNC_0(&VAR_1->dummy_zero_addr.hl_list);
 FUNC_0(&VAR_1->dummy_max_addr.host_list);
 FUNC_0(&VAR_1->dummy_max_addr.hl_list);

 VAR_1->dummy_zero_addr.op = VAR_1->dummy_max_addr.op = &VAR_0;

 VAR_1->dummy_zero_addr.start = VAR_1->dummy_zero_addr.end = 0;
 VAR_1->dummy_max_addr.start = VAR_1->dummy_max_addr.end = ((u64) 1) << 48;

 FUNC_1(&VAR_1->dummy_zero_addr.host_list, &VAR_1->addr_space);
 FUNC_1(&VAR_1->dummy_max_addr.host_list, &VAR_1->addr_space);
}
