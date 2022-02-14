
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nx_host_tx_ring {int num_desc; int sw_consumer; int producer; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline u32 FUNC_2(struct nx_host_tx_ring *VAR_0)
{
 FUNC_1();
 return FUNC_0(VAR_0->producer,
   VAR_0->sw_consumer, VAR_0->num_desc);

}
