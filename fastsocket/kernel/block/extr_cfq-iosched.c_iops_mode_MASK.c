
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_data {scalar_t__ hw_tag; int cfq_slice_idle; } ;



__attribute__((used)) static inline bool FUNC_0(struct cfq_data *VAR_0)
{







 if (!VAR_0->cfq_slice_idle && VAR_0->hw_tag)
  return 1;
 else
  return 0;
}
