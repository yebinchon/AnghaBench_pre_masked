
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int write_count; int empty_read_count; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_1(struct efx_tx_queue *VAR_1, unsigned int VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1->empty_read_count);

 if (VAR_3 == 0)
  return 0;

 VAR_1->empty_read_count = 0;
 return ((VAR_3 ^ VAR_2) & ~VAR_0) == 0
  && VAR_1->write_count - VAR_2 == 1;
}
