
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ixgbe_ring {int tail; void* next_to_alloc; void* next_to_use; } ;


 int FUNC_0 () ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ixgbe_ring *VAR_0, u32 VAR_1)
{
 VAR_0->next_to_use = VAR_1;


 VAR_0->next_to_alloc = VAR_1;






 FUNC_0();
 FUNC_1(VAR_1, VAR_0->tail);
}
