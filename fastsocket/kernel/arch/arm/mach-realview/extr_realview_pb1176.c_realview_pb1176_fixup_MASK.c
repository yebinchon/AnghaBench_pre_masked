
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {int dummy; } ;
struct meminfo {int nr_banks; TYPE_1__* bank; } ;
struct machine_desc {int dummy; } ;
struct TYPE_2__ {int size; scalar_t__ start; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct machine_desc *VAR_1,
      struct tag *VAR_2, char **VAR_3,
      struct meminfo *VAR_4)
{



 VAR_4->bank[0].start = 0;
 VAR_4->bank[0].size = VAR_0;
 VAR_4->nr_banks = 1;
}
