
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_queue {int n_window; } ;



__attribute__((used)) static inline u8 FUNC_0(struct iwl_queue *VAR_0, u32 VAR_1)
{
 return VAR_1 & (VAR_0->n_window - 1);
}
