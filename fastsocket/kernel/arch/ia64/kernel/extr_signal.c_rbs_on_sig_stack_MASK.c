
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sas_ss_sp; unsigned long sas_ss_size; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (unsigned long VAR_1)
{
 return (VAR_1 - VAR_0->sas_ss_sp < VAR_0->sas_ss_size);
}
