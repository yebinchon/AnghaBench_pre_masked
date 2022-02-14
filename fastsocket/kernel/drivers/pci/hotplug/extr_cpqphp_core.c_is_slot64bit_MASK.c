
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {scalar_t__ p_sm_slot; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct slot *VAR_1)
{
 return (FUNC_0(VAR_1->p_sm_slot + VAR_0) == 0x06) ? 1 : 0;
}
