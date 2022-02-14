
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int cede_latency_hint; } ;
struct TYPE_5__ {TYPE_1__ fields; } ;
struct TYPE_6__ {TYPE_2__ gpr5_dword; } ;


 TYPE_3__* FUNC_0 () ;

__attribute__((used)) static inline u8 FUNC_1(void)
{
 return FUNC_0()->gpr5_dword.fields.cede_latency_hint;
}
